//============================================================================
// Name        : e06_18.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-18
//               0以上9以下の乱数を返却する関数rand1を作成せよ。複数回呼び出された場合に、連続して同じ値を
//               返さないようにすること。(例えば、1回前に呼び出された際に5を返却していれば、5以外の値を
//               返却しなければならない。)
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int iNumPre = 10; // 1回前に表示した値を格納することで、重複をなくす
int rand1(); // 0以上9以下の乱数を返却する関数

int main() {
	int iNumPrint = 0; // 乱数を表示する回数を格納する変数

	// 乱数を表示する回数を尋ねる
	cout << "乱数を表示します。何回表示しますか。: ";
	// キーボードから値を読み込み
	cin >> iNumPrint;

	// 指定した回数だけ乱数を表示
	for (int i = 0; i < iNumPrint; i++) {
		// 乱数を表示
		cout << "値: " << rand1() << endl;
	}

	// 正常終了
	return 0;
}

// 0以上9以下の乱数を返却する関数
int rand1() {
	int iRand = 0; // 乱数を格納する変数

	// 重複がないように乱数を生成する
	do {
		// 乱数の種を生成
		srand(time(NULL));
		// 乱数を生成
		iRand = rand() % 10;
	} while (iNumPre == iRand); // 1回前と同じ値の場合、乱数を生成し直す

	// 次回の値との重複を確認するため、値を代入しておく
	iNumPre = iRand;

	// 乱数を返却する
	return iRand;
}
