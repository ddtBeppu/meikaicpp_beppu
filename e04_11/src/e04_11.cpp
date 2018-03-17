//============================================================================
// Name        : e04_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-11
//               float型の変数を0.0から1.0まで0.001ずつ増やしながら、その値と、その値の２乗を表示する
//               プログラムを作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	float fCur = 0.0F; // float型の変数
	float fDoubled = 0.0F; // float型の２乗の値を格納

	float fAdd = 0.001F; // float型変数の増分。この値を繰り返し加算
	float fMax = 1.0F; // 変数の最大値を設定

	// 値の精度を6桁に指定する
	cout << fixed << setprecision(6);

	// 表示する値の見出し
	cout << " float " << "    " << " float^2" << endl;
	// 区切りの線を表示
	cout << "-------------------" << endl;

	// ループ回数分だけ、加算、表示
	for (; fCur <= fMax; fCur += fAdd) {
		// float型変数の２乗を計算
		fDoubled = fCur * fCur;

		// float, ２乗型の値を並べて表示
		cout << fCur << "   " << fDoubled << endl;
	}

	// 整数値を返す
	return 0;
}
