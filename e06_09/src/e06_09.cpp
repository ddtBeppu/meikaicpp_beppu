//============================================================================
// Name        : e06_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-9
//               a以上b未満の乱数を生成して、その値を返却する関数randomを作成せよ。
//               内部で乱数を生成する標準ライブラリであるrand関数を呼び出すこと。
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int random(int iMin, int iMax); // iMin以上iMax未満の乱数を生成して、その値を返却する関数

int main() {
	int iInputA = 0; // aの値として入力される値を格納する変数
	int iInputB = 0; // bの値として入力される値を格納する変数

	// 範囲内での乱数生成を行うことを知らせる。
	cout << "a以上b未満の乱数を生成します。" << endl;
	// 下限値の入力を促す
	cout << "a: ";
	// キーボードから値を読み込み
	cin >> iInputA;

	// 上限値の入力を促す
	cout << "b: ";
	// キーボードから値を読み込み
	cin >> iInputB;

	// 生成された乱数の値を表示
	cout << "値: " << random(iInputA, iInputB);

	// 正常終了
	return 0;
}

// iMin以上iMax未満の乱数を生成して、その値を返却する関数
int random(int iMin, int iMax) {
	int iRand = 0; // 乱数の値を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	if (iMin > iMax) { // 上限値iMaxが下限値iMinより小さい場合
		// iMinをそのまま表示して、終了
		return iMin;
	}

	do { // 目的の範囲内の乱数が生成されるまで繰り返す
		// 乱数を生成
		iRand = rand();
	} while (iRand < iMin || iRand >= iMax); // 乱数が範囲外のとき、処理を繰り返し

	// 乱数の値を返却する
	return iRand;
}
