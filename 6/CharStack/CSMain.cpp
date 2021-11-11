#include  <iostream>
#include "CharStack.h"

using namespace std;

int main() {
    CharStack chStack;    // 20개의 문자를 저장할 수 있는 스택
    char str[20];

    cout << "영어 단어를 입력하시오 : ";
    cin >> str;

    char *pt = str;    // 포인터로 문자열 시작 위치를 가리킴.
    while (*pt)            // 문자열의 끝이 아니면 반복
        chStack.push(*(pt++));    // 스택에 문자를 넣음.

    cout << "역순 단어 출력 : ";
    while (!chStack.chkEmpty())    // 스택이 비어 있지 않으면 반복
        cout << chStack.pop();    // 스택에서 인출한 문자를 출력
    cout << endl;
    return 0;
}
