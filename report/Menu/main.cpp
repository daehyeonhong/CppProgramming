#include<iostream>
#include<string>
#include "Menu.h"

using namespace std;

int main() {
    string option[5] = {"메뉴 객체 생성",
                        "선택 항목 추가",
                        "메뉴 내용 출력",
                        "생성된 메뉴를 이용한 항목 선택",
                        "종료"};

    Menu menu;
    char status = 1;
    while (status != 5) {
        for (int i = 0; i < sizeof option / sizeof option[0]; i++)
            cout << "[" << i + 1 << "] " << option[i] << endl;
        cout << endl;
        cout << "항목 번호를 선택하시오 : ";
        cin >> status;
        cout << status << endl;
        int statusInt = status - '0';
        switch (statusInt) {
            case 1:
                menu.insertMenu();
                break;
            case 2:
                menu.insertSelection();
                break;
            case 3:
                menu.printMenu();
                break;
            case 4:
                menu.chooseSelection();
                break;
            case 5:
                cout << "시스템을 종료합니다.";
                status = 5;
                break;
            default:
                status = 0;
                cout << "잘못된 입력입니다, 다시 입력해주세요.";
                cout << endl;
                continue;
        }
    }
    return EXIT_SUCCESS;
}
