#include <iostream>
#include <map>
#include "StateMachine/StateMachine.h"
#include "Examples/StateA.h"
#include "Examples/StateB.h"
#include "Examples/StateC.h"
#include "Examples/Transition1.h"
#include "Examples/Transition2.h"
#include "Examples/Transition3.h"
#include "Examples/Transition4.h"
#include "Examples/Payload1.h"

using namespace std;
using namespace Examples;

int main()
{
    map<StateMachine::ITransition*, StateMachine::IState*> transitionMap;

    StateMachine::IState* initialState = new StateA();
    StateMachine::IState* stateC = new StateC();

    Payload1* payload1 = new Payload1();
    Transition1::GetInstance().AddPayload(payload1);    // TODO:

    /* StateA -> */ transitionMap[Transition1::GetInstance(payload1)] = new StateB();
        /* StateB -> */ transitionMap[Transition3::GetInstance()] = stateC;
            /* StateC -> */ transitionMap[Transition4::GetInstance()] = initialState;
    /* StateA -> */ transitionMap[Transition2::GetInstance()] = stateC;

    StateMachine::StateMachine *stateMachine = new StateMachine::StateMachine(&transitionMap, initialState);
    stateMachine->Run();

    return 0;
}