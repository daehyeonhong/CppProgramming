//
// Created by hongdae on 2021-11-09.
//

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter {
    int value;
public:
    // Counter() {}
    void reset() { value = 0; }

    void count() { ++value; }

    int getValue() const { return value; }
};

#endif //COUNTER_H_INCLUDED