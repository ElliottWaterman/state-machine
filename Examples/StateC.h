#ifndef EXAMPLES_STATEC_H
#define EXAMPLES_STATEC_H

#include "../StateMachine/IState.h"
#include "Payload2.h"

namespace Examples
{
    class StateC : public StateMachine::IState
    {
    public:
        StateC();
        virtual void EnterState(StateMachine::IPayload* payload);
        virtual StateMachine::ITransition* Run();
        virtual void ExitState();

    private:
        Payload2* _payload;
    };
}

#endif //EXAMPLES_STATEC_H
