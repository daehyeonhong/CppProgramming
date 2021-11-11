//
// Created by hongdae on 2021-11-11.
//

#ifndef MENU_MENU_H
#define MENU_MENU_H

#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Menu {
    enum {
        size = 10
    };
    string menu;
    vector<string> selectionList;
public:
    Menu() : menu() {}

    void insertMenu();

    void printMenu();

    void insertSelection();

    void chooseSelection();

    void printSelectionList();

};


#endif //MENU_MENU_H
