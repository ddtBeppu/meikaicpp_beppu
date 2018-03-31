//============================================================================
// Name        : e07_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-13
//               要素数がnである配列bの全要素を配列aにコピーする関数を作成せよ。
//                 void ary_cpy(int* a, const int* b, int n);
//============================================================================

#include <iostream>
using namespace std;

// 配列の全要素をコピーする関数
void ary_cpy(int* iArrayCpy, const int* iArray, int iArrSize);

int main() {
	const int iArrSize = 5; // 配列の要素数
	int iArray[iArrSize] = {0}; // コピー前の元の配列
	int iArrCpy[iArrSize] = {0}; // コピーした要素を格納する配列

	// 元の配列の値を設定
	cout << "配列要素を入力してください。" << endl;
	// 配列要素だけ処理を繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 値を入力する場所を知らせる
		cout << "iArray[" << i << "]: ";
		// キーボードから値を読み込み、配列の要素とする
		cin >> iArray[i];
	}

	// 配列の全要素をコピーする関数
	ary_cpy(iArrCpy, iArray, iArrSize);

	// コピーした配列の全要素を表示
	cout << "\nコピーした配列要素" << endl;
	// 配列の大きさだけ処理を繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 要素ごとに値を表示
		cout << "iArrCpy[" << i << "]: " << iArrCpy[i] << endl;;
	}

	// 正常終了
	return 0;
}

// 配列の全要素をコピーする関数
void ary_cpy(int* iArrayCpy, const int* iArray, int iArrSize) {
	// 配列の要素数だけ処理を繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// コピー元の配列の要素を、コピー先の配列のアドレスに書き込む
		*(iArrayCpy + i) = iArray[i];
	}
}
