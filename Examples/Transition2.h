#ifndef EXAMPLES_TRANSITION2_H
#define EXAMPLES_TRANSITION2_H

#include "../StateMachine/ITransition.h"
#include "Payload2.h"

namespace Examples
{
    class Transition2 : public StateMachine::ITransition
    {
    public:
        virtual Payload2* GetPayload();

        static Transition2* GetInstance(Payload2* payload);

    private:
        Transition2();
        virtual void CreatePayload();
        Payload2* _payload = nullptr;

        static Transition2* _instance;
    };
}

#endif //EXAMPLES_TRANSITION2_H
