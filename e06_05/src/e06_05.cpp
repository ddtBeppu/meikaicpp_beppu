//============================================================================
// Name        : e06_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-5
//               1からnまでの全整数の和を求めて返却する関数sumupを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int sumup(int iIter); // 1からnまでの全整数の和を求めて返却する関数

int main() {
	int iMax = 1; // 足し合わせる数の最大値。1からこの値までの和を求める。

	// nの値の入力を行う箇所
	do {
		// 足し合わせる最後の値の入力を促す
		cout << "1からnまでの和を求めます。整数値nの値(n > 1)を入力してください。: ";
		// キーボードから入力された値を受け取る
		cin >> iMax;
	} while (iMax <= 1); // 入力値が1以下であれば、入力に戻る

	// 1からnまでの全整数の和を表示
	cout << "1から" << iMax << "までの和は" << sumup(iMax) << "です。" << endl;

	// 正常終了
	return 0;
}

// 1からnまでの全整数の和を求めて返却する関数
int sumup(int iIter) {
	int iSum = 0; // 合計値を格納する変数

	// 1から入力された値までを足し合わせる
	for (int i = 1; i <= iIter; i++) {
		// 値を増加させながら加算
		iSum += i;
	}

	// 合計値を返却
	return iSum;
}
