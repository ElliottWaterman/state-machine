#ifndef EXAMPLES_TRANSITION3_H
#define EXAMPLES_TRANSITION3_H

#include "../StateMachine/ITransition.h"
#include "Payload2.h"

namespace Examples
{
    class Transition3 : public StateMachine::ITransition
    {
    public:
        static Transition3* GetInstance();

        virtual Payload2* GetPayload();

    private:
        static Transition3* _instance;

        Transition3();
        Payload2* _payload;
    };
}

#endif //EXAMPLES_TRANSITION3_H
