#include <iostream>
#include <thread>
#include <chrono>
#include "StateB.h"
#include "Transition3.h"

using namespace std;

namespace Examples
{
    StateB::StateB()
    { }


    StateMachine::ITransition* StateB::Run(StateMachine::IPayload* payload)
    {
        cout << "State B" << endl;
        if (payload != nullptr)
            cout << "Payload: " << payload->GetString() << endl;

        this_thread::sleep_for(chrono::seconds(2));

        return Transition3::GetInstance();
    }

    void StateB::ExitState()
    {
    }
}
