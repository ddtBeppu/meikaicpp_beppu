//============================================================================
// Name        : e09_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-1
//               再帰呼び出しを用いずに、関数factorialを実現せよ。
//============================================================================

#include <iostream>
using namespace std;

int factorial(int iNum); // 引数の階乗を求める関数

int main() {
	int iInput = 0; // キーボードからから読み込む値を初期化

	// 整数値を読み込む
	cout << "整数値: ";
	// キーボードから値を読み込み
	cin >> iInput;

	// iInputの階乗を表示
	cout << iInput << "の階乗は" << factorial(iInput) << "です。" << endl;

	// 正常終了
	return 0;
}

// 引数の階乗を求める関数
int factorial(int iNum) {
	// 引数の値が0の時
	if (iNum == 0) {
		// 階乗は1
		return 1;
	}

	// 階乗を計算
	for (int i = iNum - 1; i > 0; i--) {
		// 1より大きい値を順にかけて、階乗を実現
		iNum *= i;
	}

	// 階乗の値を返す
	return iNum;
}
