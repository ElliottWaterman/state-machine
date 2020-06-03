#ifndef EXAMPLES_TRANSITION2_H
#define EXAMPLES_TRANSITION2_H

#include "../StateMachine/ITransition.h"
#include "Payload2.h"

namespace Examples
{
    class Transition2 : public StateMachine::ITransition
    {
    public:
        static Transition2* GetInstance();

        virtual Payload2* GetPayload();

    private:
        static Transition2* _instance;

        Transition2();
        Payload2* _payload;
    };
}

#endif //EXAMPLES_TRANSITION2_H
