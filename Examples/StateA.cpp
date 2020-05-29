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
        _flag = false;
    }

    StateMachine::ITransition* StateA::Run(StateMachine::IPayload* payload)
    {
        cout << "State A" << endl;
        if (payload != nullptr)
            cout << "Payload: " << payload->GetString() << endl;

        this_thread::sleep_for(chrono::seconds(1));

        if (_flag) {
            Payload1 *payload1 = Transition1::GetInstance(nullptr)->GetPayload();

            // If the payload does not exist create one
            if (payload1 == nullptr) payload1 = new Payload1();

            // Do stuff with payload

            return Transition1::GetInstance(payload1);
        }
        else {
            return Transition2::GetInstance();
        }
    }

    void StateA::ExitState()
    {
        _flag = !_flag;
    }
}
