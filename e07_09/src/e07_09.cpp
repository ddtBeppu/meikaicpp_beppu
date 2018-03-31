//============================================================================
// Name        : e07_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-9
//               要素数nの配列の要素a[idx]にxを挿入する関数aryinsを作成せよ。
//                  int aryins(int a[], int n, int idx, int x);
//               挿入に従ってa[idx] ~ a[n - 2]を一つ後方にずらさなければならない。
//               例えば、配列aの要素が{1,3,4,7,9,11}の時にaryins{a,6,2,99}と呼び出した後の配列aの要素は
//               {1,3,99,4,7,9}となる。
//============================================================================

#include <iostream>
using namespace std;

// 配列に値を挿入する関数
int aryins(int iArr[], int iArrSize, int idx, int iInsVal);

int main() {
	const int iArrSize = 8; // 配列の要素数を定義
	int iArray[iArrSize] = {0}; // 配列を定義し、0で初期化

	int iIndex = 0; // 関数aryrmvで何番目の要素を削除するかの値を与える
	int iValIns = 0; // 配列に挿入する値

	// 定義した配列要素数だけ値の代入を行う
	for (int i = 0; i < iArrSize; i++) {
		// i番目の要素の入力を促す
		cout << "iArray[" << i << "]: ";
		// キーボードから値を読み込み
		cin >> iArray[i];
	}

	// 現在の配列要素を表示し、どの値を削除するかを決定する
	cout << "\n現在の配列要素: " << endl;
	// 配列の要素数だけ繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 配列の要素を前から順に表示する
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	//　配列に挿入する値を尋ねる
	cout << "配列に値を挿入します。挿入する値を入力してください: ";
	// キーボードから読み込み
	cin >> iValIns;

	// 不正な値の入力を防止する
	do {
		// 何番目の要素を削除するかを尋ねる
		cout << "何番目の要素に挿入しますか。: ";
		// キーボードから値を読みこむ
		cin >> iIndex;
	} while (iIndex < 0 || iIndex > iArrSize - 1); // 値が負の値で、要素数よりも大きくならないようにする

	// 配列の指定した場所に、値を挿入する
	aryins(&iArray[0], iArrSize, iIndex, iValIns);

	// 削除を行なった後の配列要素を表示する
	cout << "現在の配列要素: " << endl;
	// 配列の要素数だけ繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 配列の要素を前から順に表示する
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	// 正常終了
	return 0;
}

// // 配列に値を挿入する関数
int aryins(int iArr[], int iArrSize, int idx, int iInsVal) {
	// 配列の後ろの値から順に値を更新していく
	for (int i = iArrSize; i > idx; i--) {
		// 一つ前のアドレスのオブジェクトを格納
		*(iArr + i) = *(iArr + i - 1);
	}
	// 指定したインデックスの値として入力値を代入
	*(iArr + idx) = iInsVal;

	// 正常終了
	return 0;
}
