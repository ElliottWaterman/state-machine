#include <iostream>
#include <thread>
#include <chrono>
#include "StateA.h"
#include "Transition1.h"
#include "Transition2.h"
#include "Payload1.h"

using namespace std;

namespace Examples
{
    StateA::StateA()
    {
        _payload = nullptr;
        _flag = false;
    }

    void StateA::EnterState(StateMachine::IPayload* payload)
    {
        // Handle payload here
        if (payload != nullptr)
        {
            // Comes from StateC which returns Transition4 that contains Payload3
            // We know payload can only be Payload3 so static_cast
            _payload = static_cast<Payload3*> (payload);

            // Safer but more expensive on resources:
            /*Payload3* inPayload = dynamic_cast<Payload3*> (payload);
            if (inPayload == NULL) {
                cout << "Dynamic Cast failed IPayload* to Payload3*" << endl;
            }
            else {
                _payload = inPayload;
            }*/
        }
        
        // Also start measurements, timers etc.
    }

    StateMachine::ITransition* StateA::Run()
    {
        cout << "State A" << endl;
        if (_payload != nullptr)
            cout << "Payload: " << _payload->GetMessage() << endl;

        this_thread::sleep_for(chrono::seconds(1));

        if (_flag) {
            //Payload1 *outgoingPayload = Transition1::GetInstance()->GetPayload();
            // No need to change message in Payload1

            return Transition1::GetInstance();
        }
        else {
            Payload2* outgoingPayload = Transition2::GetInstance()->GetPayload();
            outgoingPayload->SetMessage("Payload 2 from State A to State C");

            return Transition2::GetInstance();
        }
    }

    void StateA::ExitState()
    {
        _flag = !_flag;
    }
}
