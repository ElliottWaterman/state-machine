#ifndef EXAMPLES_STATEA_H
#define EXAMPLES_STATEA_H

#include <stdlib.h>
#include "../StateMachine/IState.h"

namespace Examples
{
    class StateA : public StateMachine::IState
    {
    public:
        StateA();
        virtual StateMachine::ITransition *Run(StateMachine::IPayload* payload);
        virtual void ExitState();
    private:
        bool _flag;
    };
}

#endif //EXAMPLES_STATEA_H
