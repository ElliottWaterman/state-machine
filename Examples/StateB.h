#ifndef EXAMPLES_STATEB_H
#define EXAMPLES_STATEB_H

#include "../StateMachine/IState.h"

namespace Examples
{
    class StateB : public StateMachine::IState
    {
    public:
        StateB();
        StateMachine::ITransition* Run(StateMachine::IPayload* payload);
        virtual void ExitState();
    };
}

#endif //EXAMPLES_STATEB_H
