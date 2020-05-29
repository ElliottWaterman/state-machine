#ifndef EXAMPLES_PAYLOAD1_H
#define EXAMPLES_PAYLOAD1_H

#include "../StateMachine/IPayload.h"

namespace Examples
{
    class Payload1 : public StateMachine::IPayload
    {
    public:
        Payload1();

        virtual std::string GetString();

    private:
        std::string _message;
    };
}

#endif //EXAMPLES_PAYLOAD1_H
