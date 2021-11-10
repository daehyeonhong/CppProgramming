//
// Created by hongdae on 2021-11-10.
//

#include <iostream>
#include "Complex1.h"

using namespace std;

int main() {
    Complex1 c1(1, 2);
    Complex1 c2(2, 3);
    Complex1 c3 = c1.add(c2);

    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    c3.display();
    cout << endl;
}
