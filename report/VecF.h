#ifndef 	VEC_F_H_INCLUDED
#define 	VEC_F_H_INCLUDED
#include 	<iostream>
#include 	<cstring>
using namespace std;

class VecF {
	int		n;
	float	*arr;
public:
	VecF(int d, const float* a = nullptr) : n{ d } {
		arr = new float[d];
		if (a) memcpy(arr, a, sizeof(float) * n);
	}
	VecF(const VecF& fv) : n{ fv.n } {
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float)*n);
	}
	VecF(VecF&& fv) : n{ fv.n }, arr{ fv.arr } {
		fv.arr = nullptr;
		fv.n = 0;
	}
	~VecF() {
		delete[] arr;
	}
	VecF	add(const VecF& fv) const {
		VecF	tmp(n); 	// º¤ÅÍÀÇ µ¡¼À °á°ú¸¦ ÀúÀåÇÒ ÀÓ½Ã °´Ã¼
		for (int i = 0; i < n; i++)
			tmp.arr[i] = arr[i] + fv.arr[i];
		return tmp; 	// µ¡¼À °á°ú¸¦ ¹ÝÈ¯ÇÔ
	}
	void	print() const {
		cout << "[ ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << "]";
	}
};
#endif // !VEC_F_H_INCLUDED
