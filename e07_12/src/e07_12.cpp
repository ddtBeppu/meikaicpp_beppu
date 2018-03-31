//============================================================================
// Name        : e07_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-12
//               要素数nの配列pの全要素にvを代入する関数fillを作成せよ。
//                  void fill(int* p, int n, int v);
//============================================================================

#include <iostream>
using namespace std;

// iInputの値で配列を埋め尽くす関数
void fill(int* iArray, int iArrSize, int iInput);

int main() {
	const int iArrSize = 5; // 配列の要素数
	int iArray[iArrSize] = {0}; // 配列を初期化

	int iInput = 0; // キーボードから入力し、配列を埋める値を格納する変数

	// 配列に代入する値を尋ねる
	cout << "配列に代入する値を入力: ";
	// キーボードから値を入力
	cin >> iInput;

	// キーボードから入力した値で配列を埋め尽くす
	fill(iArray, iArrSize, iInput);

	// 配列の全要素を表示
	for (int i = 0; i < iArrSize; i++) {
		// 要素ごとに表示
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	// 正常終了
	return 0;
}

// iInputの値で配列を埋め尽くす関数
void fill(int* iArray, int iArrSize, int iInput) {
	// 配列の要素に順にアクセス
	for (int i = 0; i < iArrSize; i++) {
		// 配列要素のアドレスを移動しながら、値を格納
		*(iArray + i) = iInput;
	}
}
