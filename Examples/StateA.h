#ifndef EXAMPLES_STATEA_H
#define EXAMPLES_STATEA_H

#include <stdlib.h>
#include "../StateMachine/IState.h"
#include "Payload3.h"

namespace Examples
{
    class StateA : public StateMachine::IState
    {
    public:
        StateA();
        virtual void EnterState(StateMachine::IPayload* payload);
        virtual StateMachine::ITransition *Run();
        virtual void ExitState();
    private:
        Payload3* _payload;
        bool _flag;
    };
}

#endif //EXAMPLES_STATEA_H
