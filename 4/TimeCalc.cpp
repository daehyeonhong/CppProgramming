#include <iostream>

using namespace std;

struct TimeRec {
    int hours;
    int minutes;
};

void AddTime(TimeRec &t1, const TimeRec &t2) {
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

void AddTime(TimeRec &t, int minutes) {
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

//void g(int a) {
//    cout << a * a;
//}
//
//void g(int a, int b = 100) {
//    cout << a * b;
//}

void h(int a) {
    cout << a * a;
}

void h(float a) {
    cout << a * 11;
}

int main() {
    TimeRec tRec1 = {2, 30};
    TimeRec tRec2 = {2, 45};

    cout << tRec1.hours << " hour " << tRec1.minutes << " minutes + ";
    cout << tRec2.hours << " hour " << tRec2.minutes << " minutes = ";
    AddTime(tRec1, tRec2);
    cout << tRec1.hours << " hour " << tRec1.minutes << " minutes" << endl;

    cout << tRec1.hours << " hour " << tRec1.minutes << " minutes + ";
    cout << "135minutes = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << " hour " << tRec1.minutes << " minutes" << endl;


//    g(10, 20);
//    g(10); // Error: 선택 기준이 모호함

    h(10);
    h(10.0f);
//    h(10.0);// Error: double

    return 0;
}