//============================================================================
// Name        : e07_15.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-15
//               double型のオブジェクトを生成して0.0で初期化するプログラムを作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double* dX = new double(0.0); // double型のオブジェクトを生成して0.0で初期化

	// 小数点第一位まで表示するようにして、0.0と表示する
	cout << "*dX = " << fixed << setprecision(1) << *dX << endl;

	// dXを破棄する
	delete dX;

	// 正常終了
	return 0;
}
