//============================================================================
// Name        : e04_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-10
//               List4-15のように、float型の変数を0.0から1.0まで0.001ずつ増やしていく様子と、
//               List4-16のように、int型の変数を0から1000までインクリメントした様子を、
//               横に並べて表示するプログラムを作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	float fSum = 0.0F; // 繰り返し加算したfloat型の変数を格納
	int iSum = 0; // 繰り返し加算したint型の変数を格納
	float iCasted = 0; // float型にキャストして表示するための変数を格納

	float fAdd = 0.001F; // float型変数の増分。この値を繰り返し加算
	const int iIterMax = 1000; // 繰り返し回数を設定

	// 値の精度を6桁に指定する
	cout << fixed << setprecision(6);

	// 型ごとに見出しをつける
	cout << "  float " << "   " << "  int" << endl;
	// 区切りの線を表示
	cout << "-------------------" << endl;

	// ループ回数分だけ、加算、表示
	for (; iSum <= iIterMax; iSum++) {
		// int型の変数をfloat型で表示する為にキャスト
		iCasted = static_cast<float>(iSum) / 1000;
		// float, int型の変数を並べて表示
		cout << fSum << "   " << iCasted << endl;
		// float型変数に0.01を加算
		fSum += fAdd;
	}

	// 整数値を返す
	return 0;
}
