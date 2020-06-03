cmake_minimum_required(VERSION 3.3)
project(state_machine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    StateMachine/StateMachine.h
    StateMachine/StateMachine.cpp
    StateMachine/IState.h
    StateMachine/ITransition.h
    StateMachine/IPayload.h
    Examples/StateA.h
    Examples/StateA.cpp
    Examples/StateB.h
    Examples/StateB.cpp
    Examples/StateC.h
    Examples/StateC.cpp
    Examples/Transition1.h
    Examples/Transition1.cpp
    Examples/Transition2.h
    Examples/Transition2.cpp
    Examples/Transition3.h
    Examples/Transition3.cpp
    Examples/Transition4.h
    Examples/Transition4.cpp
    Examples/Payload1.h
    Examples/Payload1.cpp
    Examples/Payload2.h
    Examples/Payload2.cpp
    Examples/Payload3.h
    Examples/Payload3.cpp
    )
add_executable(state_machine ${SOURCE_FILES})