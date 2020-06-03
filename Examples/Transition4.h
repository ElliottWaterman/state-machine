#ifndef EXAMPLES_TRANSITION4_H
#define EXAMPLES_TRANSITION4_H

#include "../StateMachine/ITransition.h"
#include "Payload3.h"

namespace Examples
{
    class Transition4 : public StateMachine::ITransition
    {
    public:
        static Transition4* GetInstance();

        virtual Payload3* GetPayload();

    private:
        static Transition4* _instance;

        Transition4();
        Payload3* _payload;
    };
}

#endif //EXAMPLES_TRANSITION4_H
