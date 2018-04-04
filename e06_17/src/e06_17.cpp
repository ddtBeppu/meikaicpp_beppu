//============================================================================
// Name        : e06_17.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-17
//               呼び出された回数を表示する関数put_countを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

const int iNumCall = 10; // 関数を呼び出す回数
void put_count(); // 呼び出された回数を表示する関数

int main() {
	// 指定した回数だけ、関数を呼び出す
	for (int i = 0; i < iNumCall; i++) {
		// 関数を呼び出して、カウントアップする
		put_count();
	}

	// 正常終了
	return 0;
}

// 呼び出された回数を表示する関数
void put_count() {
	static int iCount = 0;
	// 静的記憶域期間にある変数をカウントアップする
	iCount++;

	// 関数が呼び出された回数を表示する
	cout << "put_count: " << iCount << "回目" << endl;
}
