CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    unit_tests.cpp
)

ADD_EXECUTABLE(test
    Attacks/*.hpp
)
ADD_EXECUTABLE(test
    Base/*.hpp
)
ADD_EXECUTABLE(test
    Factory/*.hpp
)
ADD_EXECUTABLE(test
    guys/*.hpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
