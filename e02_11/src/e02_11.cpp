//============================================================================
// Name        : e02_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in iInput[2]++, Ansi-style
//============================================================================

// 演習2-11
// キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int iInput[3] = {0}; // 3変数を格納する配列
	int iMax = 0; // 最大値を格納する変数
	int iMin = 0; // 最小値を格納する変数
	int iMid = 0; // 中央値を格納する変数

	cout << "三つの整数の中央値を求めます。" << endl;
	// 一つ目の値
	cout << "値1: ";
	// 値の読み込み
	cin >> iInput[0];

	// 一つ目の値
	cout << "値2: ";
	// 値の読み込み
	cin >> iInput[1];

	// 一つ目の値
	cout << "値3: ";
	// 値の読み込み
	cin >> iInput[2];

	// 一つ目の入力値を最大値とし、比較を開始
	iMax = iInput[0];
	if (iInput[1] > iMax) { // 2つ目の値が最大値より大きい場合
		// bを最大値とする
		iMax = iInput[1];
	}
	if (iInput[2] > iMax) { // 3つ目の値が最大値より大きい場合
		// cを最大値とする
		iMax = iInput[2];
	}

	// 一つ目の入力値を最小値とし、比較を開始
	iMin = iInput[0];
	if (iInput[1] < iMin) { // 2つ目の値が最小値より小さい場合
		// bを最小値とする
		iMin = iInput[1];
	}
	if (iInput[2] < iMin) { // 3つ目の値が最小値より小さい場合
		// cを最小値とする
		iMin = iInput[2];
	}

	for (int i = 0; i < 3; i++){ // 3つの値に順にアクセス
		if (iInput[i] != iMax && iInput[i] != iMin) { // 現在の最大値でなく、かつ最小値でない場合
			// 現在の値を中央値とする
			iMid = iInput[i];
		}
	}
	// 中央値を表示する
	cout << "中央値は" << iMid << "です。\n"<< endl;

	// 正常終了
	return 0;
}
