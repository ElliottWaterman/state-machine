#ifndef EXAMPLES_TRANSITION1_H
#define EXAMPLES_TRANSITION1_H

#include "../StateMachine/ITransition.h"
#include "Payload1.h"

namespace Examples
{
    class Transition1 : public StateMachine::ITransition
    {
    public:
        static Transition1* GetInstance(Payload1* payload);

        virtual Payload1* GetPayload();

    private:
        static Transition1* _instance;

        Transition1(Payload1* payload);
        virtual void CreatePayload();
        Payload1* _payload;
    };
}

#endif //EXAMPLES_TRANSITION1_H
