//============================================================================
// Name        : e06_16.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-16
//               静的記憶領域期間をもつ配列の全要素が0で初期化されることを確認するプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

const int iNumElem = 10; // 配列の要素数を定義
int iArray[iNumElem]; // 配列要素が0で初期化することを確認するため、初期化は行わない。

int main() {
	static int siArray[iNumElem]; // 配列要素が0で初期化することを確認するため、初期化は行わない。

	// 関数の外で定義された配列要素の値を確認
	for (int i = 0; i < iNumElem; i++) {
		// 要素を順位表示する
		cout << "iArray[" << i << "]: " << iArray[i] << endl;
	}
	// 改行し、見やすく
	cout << "\n";

	// 関数内で定義された配列要素の値を確認
	for (int i = 0; i < iNumElem; i++) {
		// 要素を順位表示する
		cout << "siArray[" << i << "]: " << siArray[i] << endl;
	}

	// 正常終了
	return 0;
}
