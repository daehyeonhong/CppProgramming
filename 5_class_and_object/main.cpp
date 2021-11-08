#include <iostream>
#include "Counter.h"

using namespace std;

int main() {

    /**
     * 객체(object)란?
     * - 소프트웨어 시스템 안의 어떠한 대상을 표현한 것
     * */
    Counter cnt;
//    cnt.value = 0; private 멤버 이므로
    cnt.reset();
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    return 0;

}