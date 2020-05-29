#ifndef EXAMPLES_PAYLOAD2_H
#define EXAMPLES_PAYLOAD2_H

#include "../StateMachine/IPayload.h"

namespace Examples
{
    class Payload2 : public StateMachine::IPayload
    {
    public:
        Payload2();

        virtual std::string GetString();

    private:
        std::string _message;
    };
}

#endif //EXAMPLES_PAYLOAD2_H
