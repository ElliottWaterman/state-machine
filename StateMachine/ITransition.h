#ifndef STATE_MACHINE_ITRANSITION_H
#define STATE_MACHINE_ITRANSITION_H

#include "IPayload.h"

namespace StateMachine
{
    class ITransition
    {
    public:
        virtual IPayload* GetPayload() = 0;

    protected:
        ITransition() {};
    };
}

#endif //STATE_MACHINE_ITRANSITION_H
