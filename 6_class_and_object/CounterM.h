//
// Created by hongdae on 2021-11-09.
//

#ifndef COUNTER_M_H_INCLUDED
#define COUNTER_M_H_INCLUDED

class CounterM {
    const int maxValue;
    int value;
public:
//    CounterM(); 생성자가 없으면 기본 생성자 묵시적으로 생성

//    CounterM(const CounterM &c) : maxValue{c.maxValue}, value{c.value} {} 복사 생성자가 없으면 기본 복사 생성자 묵시적으로 생성

    CounterM(int mVal) : maxValue{mVal}, value{0} {};

    void reset() { value = 0; }

    void count() { value = value < maxValue ? value + 1 : 0; }
};

#endif //COUNTER_M_H_INCLUDED