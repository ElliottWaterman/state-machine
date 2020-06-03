#include <iostream>
#include <thread>
#include <chrono>
#include "StateB.h"
#include "Transition3.h"

using namespace std;

namespace Examples
{
    StateB::StateB()
    {
        _payload = nullptr;
    }

    void StateB::EnterState(StateMachine::IPayload * payload)
    {
        // TODO: Handle payload here
        if (payload != nullptr)
        {
            // Comes from StateA which returns Transition1 that contains Payload1
            // We know payload can only be Payload1 so static_cast
            _payload = static_cast<Payload1*> (payload);
        }

        // Also start measurements, timers etc.
    }

    StateMachine::ITransition* StateB::Run()
    {
        cout << "State B" << endl;
        if (_payload != nullptr)
            cout << "Payload: " << _payload->GetMessage() << endl;

        this_thread::sleep_for(chrono::seconds(2));

        Payload2* payload2 = Transition3::GetInstance()->GetPayload();
        payload2->SetMessage("Payload 2 from State B to State C");

        return Transition3::GetInstance();
    }

    void StateB::ExitState()
    {
    }
}
