#ifndef EXAMPLES_TRANSITION3_H
#define EXAMPLES_TRANSITION3_H

#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition3 : public StateMachine::ITransition
    {
    public:
        virtual StateMachine::IPayload* GetPayload();

        static StateMachine::ITransition* GetInstance();

    private:
        Transition3();

        static StateMachine::ITransition* _instance;
    };
}

#endif //EXAMPLES_TRANSITION3_H
