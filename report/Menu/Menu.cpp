//
// Created by hongdae on 2021-11-11.
//

#include "Menu.h"

void Menu::insertMenu() {
    string str;
    cout << "메뉴 명칭을 입력하시오 : ";
    cin >> str;
    cout << endl;
    Menu::~Menu();
    Menu::menuName = str;
    cout << "메뉴 객체를 만들었습니다." << endl;
    cout << "생성된 메뉴의 명칭 : '" << Menu::menuName << "'" << endl << endl;
}

void Menu::printMenu() {
    if (Menu::isMenuEmpty()) {
        Menu::printException();
        return;
    }
    cout << Menu::menuName << endl << endl;
    Menu::printSelectionVector();
}

bool Menu::isMenuEmpty() {
    return Menu::menuName.empty();
}

void Menu::insertSelection() {
    if (Menu::isMenuEmpty()) {
        Menu::printException();
        return;
    }
    if (Menu::isSelectionVectorFull()) {
        cout << "선택 항목은 최대 10개까지 입력 가능합니다." << endl;
        return;
    }
    cout << "추가할 선택 항목을 입력하시오 : ";
    string selection;
    cin >> selection;
    Menu::selectionVector.push_back(selection);
    cout << "메뉴 객체에 선택 항목을 추가하였습니다." << endl;
    cout << "추가돈 선택 항목 : '" << selection << "'" << endl;
}

void Menu::chooseSelection() {
    if (Menu::isMenuEmpty() || Menu::isSelectionVectorEmpty()) {
        Menu::printException();
        return;
    }
    cout << "생성된 메뉴를 이용하여 다음과 같이 선택 항목 중 하나의 선택을 입력할 수 있습니다." << endl;
    cout << endl << Menu::menuName << endl << endl;
    Menu::printSelectionVector();
    cout << "항목 번호를 선택하시오 : ";
    int index;
    cin >> index;
    if (Menu::selectionVector.size() < index) {
        Menu::printException();
        return;
    }
    cout << "메뉴 객체가 반환한 번호는 " << index << "입니다." << endl;
    cout << "선택된 항목의 내용 : '" << Menu::selectionVector.at((index - 1)) << "'" << endl;
}

void Menu::printSelectionVector() {
    for (int i = 0; i < Menu::selectionVector.size(); ++i)
        cout << "[" << i + 1 << "] " << selectionVector.at(i) << endl;
    cout << endl;
}

void Menu::clearSelectionVector() {
    Menu::selectionVector.clear();
}

bool Menu::isSelectionVectorEmpty() {
    return Menu::selectionVector.empty();
}

bool Menu::isSelectionVectorFull() {
    return Menu::selectionVector.size() == Menu::size;
}
