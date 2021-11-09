#include "CounterM.h"
#include "Counter.h"
#include "VecF.h"

using namespace std;

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
    return 0;
}