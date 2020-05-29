#ifndef EXAMPLES_TRANSITION4_H
#define EXAMPLES_TRANSITION4_H

#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition4 : public StateMachine::ITransition
    {
    public:
        virtual StateMachine::IPayload* GetPayload();

        static StateMachine::ITransition* GetInstance();

    private:
        Transition4();

        static StateMachine::ITransition* _instance;
    };
}

#endif //EXAMPLES_TRANSITION4_H
