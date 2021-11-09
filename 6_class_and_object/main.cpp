#include "CounterM.h"
#include "Counter.h"
#include "VecF.h"
#include "NamedObj.h"

using namespace std;

void f() {
    NamedObj x("third");// 세 번째 객체의 생성
    x.display();// 함수 반환 후 x는 소멸됨
}

int main() {

    float a[3] = {1, 2, 3};
    float b[3] = {2, 4, 6};

    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(v1.add(v2));
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;
    v3.print();
    cout << endl;

    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;

    NamedObj ff("First");// 첫 번째 객체 생성
    NamedObj s("Second");// 두 번째 객체 생성
    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;

    f();
    NamedObj c("Fourth");// 네 번째 객체 생성
    c.display();
    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;

    return 0;
}