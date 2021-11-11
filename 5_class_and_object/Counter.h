//
// Created by hongdae on 2021-11-08.
//

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter {
    // 클래스 멤버 선언
    int value;

public:
//    Counter() { value = 0; }
    Counter() : value{0} {};

    ~Counter() {};

    void reset() { value = 0; };

    void count() { ++value; };

    int getValue() const { return value; };
};

#endif // COUNTER_H_INCLUDED