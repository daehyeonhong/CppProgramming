//
// Created by hongdae on 2021-11-09.
//

#ifndef INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H
#define INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H

#include <iostream>

using namespace std;

class NamedObj {
    char *name;
    int id;

    // static data member
    static int nConstr;// 생성된 객체 수
    static int nDestr;// 소멸된 객체 수
public:
    NamedObj(const char *s);// 생성자

    ~NamedObj();// 소멸자

    void display() const {// 객체의 속성 출력
        cout << "ID : " << id << " --> 이름 : " << name << endl;
    }

    static int nObj() {// 존재하는 객체 수 반환
        return nConstr - nDestr;
    }

};

#endif//INC_6_CLASS_AND_OBJECT_NAMEDOBJ_H