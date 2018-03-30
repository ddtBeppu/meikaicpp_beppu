//============================================================================
// Name        : e07_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-6
//               要素数nの配列の全要素の合計を求めて返却する関数sumOfを作成せよ。
//                  int sumOf(const int a[], int n);
//============================================================================

#include <iostream>
using namespace std;

int sumOf(const int iA[], int iN); // 要素数nの配列の全要素の合計を求めて返却する関数

int main() {
	const int iNumElem = 5; // 配列の要素数を定義
	int iArray[iNumElem] = {0}; // 配列を0で初期化し定義

	// 定義した配列要素数だけ値の代入を行う
	for (int i = 0; i < iNumElem; i++) {
		// i番目の要素の入力を促す
		cout << "iArray[" << i << "]: ";
		// キーボードから値を読み込み
		cin >> iArray[i];
	}

	// 関数sumOfの第一引数として配列の先頭要素を与え、アドレスを移動させながら、値の加算をしていく
	cout << "\n合計値は" << sumOf(&iArray[0], iNumElem) << "です。" << endl;

	// 正常終了
	return 0;
}

// 要素数nの配列の全要素の合計を求めて返却する関数
int sumOf(const int iA[], int iN) {
	int iSum = 0; // 合計値を格納する変数を定義

	// 要素数分だけ加算を行う
	for (int i = 0; i < iN; i++) {
		// 配列の先頭要素の値から移動しつつ、加算していく
		iSum += *(iA + i);
	}

	// 合計値を返却する
	return iSum;
}
