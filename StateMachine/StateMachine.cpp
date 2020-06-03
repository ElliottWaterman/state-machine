#include "StateMachine.h"

namespace StateMachine
{
    StateMachine::StateMachine(std::map<ITransition *, IState *> *transitions, IState *initialState)
    {
        _transitions = transitions;
        _currentState = initialState;
        _defaultState = initialState;
    }

    void StateMachine::Run()
    {
        ITransition *transition = nullptr;
        IPayload* payload = nullptr;    // new Payload1();  // Use Payload of the initial / default state

        while(true)
        {
            _currentState->EnterState(payload);
            transition = _currentState->Run();  // Executes here until a transition
            _currentState->ExitState();

            payload = transition->GetPayload(); //if (transition != nullptr) 

            // Find if the transition exists in the map then return the state
            // If not found return the default state
            _currentState = _transitions->find(transition) != _transitions->end() ?
                            (*_transitions)[transition] :
                            _defaultState;
                            // Could get "default" state based on the current state
                            // I.e. map of <IState, IState>, input current state get default back
        }
    }
}
