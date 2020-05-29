#include <iostream>
#include <thread>
#include <chrono>
#include "StateC.h"
#include "Transition4.h"

using namespace std;

namespace Examples
{
    StateC::StateC()
    { }


    StateMachine::ITransition* StateC::Run(StateMachine::IPayload* payload)
    {
        cout << "State C" << endl;
        if (payload != nullptr)
            cout << "Payload: " << payload->GetString() << endl;

        this_thread::sleep_for(chrono::seconds(3));

        return Transition4::GetInstance();
    }

    void StateC::ExitState()
    {
    }
}