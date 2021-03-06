//
// Created by hongdae on 2021-11-09.
//


#include <iostream>
#include <cstring>

#ifndef INC_6_CLASS_AND_OBJECT_VECF_H
#define INC_6_CLASS_AND_OBJECT_VECF_H

class VecF {
    int n;
    float *arr;
public:
    VecF(int d, const float *a = nullptr) : n{d} {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }

    VecF(const VecF &fv) : n{fv.n} { //복사 생성자
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float) * n);
    }

    VecF(VecF &&fv) : n{fv.n}, arr{fv.arr} { //이동 생성자
        fv.arr = nullptr;
        fv.n = 0;
    };

    ~VecF() {
        delete[] arr;
    }

    VecF add(const VecF &fv) const {
        VecF tmp(n); // 백터의 덧셈 결과를 저장할 임시 객체
        for (int i = 0; i < n; i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
        return tmp; // 덧셈 결과를 반환함
    }

    void print() const {
        std::cout << "[ ";
        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
        std::cout << "]";
    }

};

#endif //INC_6_CLASS_AND_OBJECT_VECF_H