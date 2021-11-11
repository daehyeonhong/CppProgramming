#ifndef  CHARSTACK_H_INCLUDED
#define  CHARSTACK_H_INCLUDED

class CharStack {
    enum {
        size = 20
    };        // 스택의 크기
    int top;                    // 마지막 데이터를 가리키는 포인터
    char buf[size];            // 스택의 저장공간
public:
    CharStack() : top{size} {}  // 생성자
    bool chkEmpty() const {    // 스택에 데이터가 없으면 true
        return top == size;
    }

    bool chkFull() const {    // 스택이 가득 차 있으면 true
        return !top;
    }

    bool push(char ch);        // 스택에 데이터를 넣음.
    char pop();                // 스택에서 데이터를 꺼냄.
};

#endif
