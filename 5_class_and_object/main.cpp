#include <iostream>
#include "Counter.h"
#include "Person.h"

using namespace std;

int main() {

    /**
     * 객체(object)란?
     * - 소프트웨어 시스템 안의 어떠한 대상을 표현한 것
     * */
//    Counter cnt;
////    cnt.value = 0; private 멤버 이므로
//    cnt.reset();
//    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
//    cnt.count();
//    cnt.count();
//    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    Person *p1 = new Person("이철수", "서울시 종로구");
    Person *p2 = new Person("박은미", "강원도 동해시");

    p1->print();
    p2->print();
    cout << endl << "주소 변경 : ";
    p2->chAddr("대전시 서구");
    p2->print();

    delete p1;
    delete p2;

    return 0;

}