//
// Created by hongdae on 2021-11-11.
//

#include "Menu.h"

void Menu::insertMenu() {
    string str;
    cout << "메뉴 명칭을 입력하시오 : ";
    cin >> str;
    cout << endl;
    Menu::menu = str;
    std::remove(selectionList.begin(), selectionList.end(),1 );
    Menu::selectionList.remove();
    cout << "메뉴 객체를 만들었습니다." << endl;
    cout << "생성된 메뉴의 명칭 : '" << Menu::menu << "'" << endl << endl;
}

void Menu::insertSelection() {
    if (Menu::menu.empty()) {
        cout << "메뉴 객체가 -1을 반환하였고, 항목 선택이 올바른 범위 값이 아님을 의미합니다." << endl;
        return;
    }
    cout << Menu::selectionList.size();
    if (Menu::selectionList.size() + 1 > Menu::size) {
        cout << "선택 항목은 최대 10개까지 입력 가능합니다." << endl;
        return;
    }
    cout << "추가할 선택 항목을 입력하시오 : ";
    string selection;
    cin >> selection;
    Menu::selectionList.push_back(selection);
    cout << "메뉴 객체에 선택 항목을 추가하였습니다." << endl;
    cout << "추가돈 선택 항목 : '" << selection << "'" << endl;
}

void Menu::printMenu() {
    if (Menu::menu.empty()) {
        cout << "메뉴 객체가 -1을 반환하였고, 항목 선택이 올바른 범위 값이 아님을 의미합니다." << endl;
        return;
    }
    cout << menu << endl << endl;
    Menu::printSelectionList();
}

void Menu::chooseSelection() {
    if (Menu::menu.empty()) {
        cout << "메뉴 객체가 -1을 반환하였고, 항목 선택이 올바른 범위 값이 아님을 의미합니다." << endl;
        return;
    }
    cout << "생성된 메뉴를 이용하여 다음과 같이 선택 항목 중 하나의 선택을 입력할 수 있습니다." << endl;
    cout << endl << Menu::menu << endl << endl;
    Menu::printSelectionList();
    cout << "항목 번호를 선택하시오 : ";
    int index;
    cin >> index;
    cout << "메뉴 객체가 반환한 번호는 " << index << "입니다." << endl;
    cout << "선택된 항목의 내용 : '" << Menu::selectionList.at((index - 1)) << "'" << endl;
}

void Menu::printSelectionList() {
    int a = 1;
    for (const auto &item: selectionList)
        cout << "[" << a++ << "] " << item << endl;
    cout << endl;
}
