//============================================================================
// Name        : e06_22.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-22
//               xの2乗を求めるインライン関数、3乗を求めるインライン関数を作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

inline double square(double dLength);
inline double cube(double dLength);

int main() {
	double dInput = 0.0; // キーボードから入力する値を受け取る変数

	// xの2乗を求める
	cout << "xの２乗を求めます。" << endl;
	// xとしての値の入力を促す
	cout << "x: ";
	// キーボードから値を読み込む
	cin >> dInput;

	// インライン関数を呼び出し、入力値の2乗を表示する
	cout << "xの2乗は" << setprecision(3) << square(dInput) << "です。" << endl;

	// xの3乗を求める
	cout << "\nxの3乗を求めます。" << endl;
	// xとしての値の入力を促す
	cout << "x: ";
	// キーボードから値を読み込む
	cin >> dInput;

	// インライン関数を呼び出し、入力値の3乗を表示する
	cout << "xの3乗は" << setprecision(3) << cube(dInput) << "です。" << endl;

	// 正常終了
	return 0;
}

// 引数の2乗を求めるインライン関数
inline double square(double dX) {
	// 引数dXの2乗を求めて返却
	return dX * dX;
}

// 引数の3乗を求めるインライン関数
inline double cube(double dX) {
	// 引数dXの3乗を求めて返却
	return dX * dX * dX;
}
