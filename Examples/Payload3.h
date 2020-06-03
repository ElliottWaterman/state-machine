#ifndef EXAMPLES_PAYLOAD3_H
#define EXAMPLES_PAYLOAD3_H

#include "../StateMachine/IPayload.h"

namespace Examples
{
    class Payload3 : public StateMachine::IPayload
    {
    public:
        Payload3();

        virtual const std::string GetMessage();

    private:
        std::string _message;
    };
}

#endif //EXAMPLES_PAYLOAD3_H
