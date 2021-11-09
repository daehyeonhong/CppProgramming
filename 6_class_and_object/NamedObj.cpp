//
// Created by hongdae on 2021-11-09.
//

#include <cstring>
#include "NamedObj.h"

NamedObj::NamedObj(const char *s) {
    name = new char[strlen(s) + 1];// 문자열을 복사할 공간을 할당
    strcpy(name, s);
    id = ++nConstr;// 생성된 객체의 수를 증가시키고 이를 ID로 부여
}

NamedObj::~NamedObj() {
    ++nDestr;// 소멸된 객체의 수를 증가시킴
    delete[] name;
}

// static data member의 정의 및 초기화
int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;