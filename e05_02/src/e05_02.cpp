//============================================================================
// Name        : e05_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-2
//               要素型がdouble型で要素数が5の配列の全要素に0.0を代入して表示するプログラムを作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 5; // 配列の要素数
	double dArray[sizeArray] = {}; // 要素数がsizeArrayの配列

	// 実数の精度を小数点以下1桁とする
	cout << fixed << setprecision(1);

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 配列の要素に0.0を代入
		dArray[i] = 0.0;
	}

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 配列の中身を出力
		cout << "dArray[" << i << "]" << " = " << dArray[i] << endl;
	}

	// 整数値を返す
	return 0;
}
