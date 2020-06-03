#ifndef EXAMPLES_STATEB_H
#define EXAMPLES_STATEB_H

#include "../StateMachine/IState.h"
#include "Payload1.h"

namespace Examples
{
    class StateB : public StateMachine::IState
    {
    public:
        StateB();
        virtual void EnterState(StateMachine::IPayload* payload);
        virtual StateMachine::ITransition* Run();
        virtual void ExitState();

    private:
        Payload1* _payload;
    };
}

#endif //EXAMPLES_STATEB_H
