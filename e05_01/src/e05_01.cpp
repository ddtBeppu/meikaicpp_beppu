//============================================================================
// Name        : e05_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-1
//               要素がint型で要素数が5の配列の要素に対して、先頭から順に5, 4, 3, 2, 1を代入して
//               表示するプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 5; // 配列の要素数を定義
	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列を定義
	int iMax = 5; // 配列に代入する初期値

	// 配列の要素数の回数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 5から順に値を配列に代入
		iArray[i] = iMax;

		// カウントダウンする
		iMax--;
	}

	// 配列の要素数の回数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 配列要素を表示
		cout << "iArray[" << i << "]" << " = " << iArray[i] << endl;
	}

	// 整数値を返す
	return 0;
}
