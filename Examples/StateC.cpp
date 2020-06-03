#include <iostream>
#include <thread>
#include <chrono>
#include "StateC.h"
#include "Transition4.h"

using namespace std;

namespace Examples
{
    StateC::StateC()
    {
        _payload = nullptr;
    }

    void StateC::EnterState(StateMachine::IPayload* payload)
    {
        // Handle payload here
        if (payload != nullptr)
        {
            // Comes from StateA or B which returns Transition2 or 3 that contains Payload2
            // We know payload can only be Payload2 so static_cast
            _payload = static_cast<Payload2*> (payload);
        }

        // Also start measurements, timers etc.
    }

    StateMachine::ITransition* StateC::Run()
    {
        cout << "State C" << endl;
        if (_payload != nullptr)
            cout << "Payload: " << _payload->GetMessage() << endl;

        this_thread::sleep_for(chrono::seconds(3));

        //Payload3 *outgoingPayload = Transition4::GetInstance()->GetPayload();
        // No need to change message in Payload3

        return Transition4::GetInstance();
    }

    void StateC::ExitState()
    {
    }
}