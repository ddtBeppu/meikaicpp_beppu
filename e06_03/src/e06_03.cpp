//============================================================================
// Name        : e06_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-3
//               三つのint型引数a, b, cの中央値を求める関数medを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

const int iNumEntries = 3; // 比較する値の数
int med(int iEntries[iNumEntries]); // 中央値を求める関数

int main() {
	int iInput[iNumEntries] = {}; // キーボードからの入力値を格納する配列

	// 決められた個数の値を、キーボードから入力
	for (int i = 0; i < iNumEntries; i++) {
		// 値の入力を促す
		cout << "値を入力してください。" << endl;
		// 入力する値が何個目か分かるように、テキストを出力
		cout << "値" << i + 1 << ": ";
		// キーボードから値を読み込み
	 	cin >> iInput[i];
	}

	// 中央値の値を表示する
	cout << "中央値は" << med(iInput) << "です。" << endl;

	// 正常終了
	return 0;
}

// 中央値を求める関数
int med(int iEntries[iNumEntries]) {
	int iMax = 0; // 最大値を格納する変数
	int iMin = 0; // 最小値を格納する変数
	int iMed = 0; // 中央値を格納する変数

	// 最初の要素を最大値とする
	iMax = iEntries[0];

	if (iEntries[1] > iMax) { // 2番目の要素が最大値より大きい場合、
		// 最大値が暫定的に最小値となる
		iMin = iMax;
		// 2番目の要素を最大値とする。
		iMax = iEntries[1];
	} else {
		// 最小値を暫定的に2番目の要素とする
		iMin = iEntries[1];
	}

	if (iEntries[2] > iMax) { // 最大値よりも大きい場合
		// 最大値が中央値となる。
		iMed = iMax;
	} else if (iEntries[2] < iMin) { // 最小値よりも小さい場合
		// 最小値が中央値となる。
		iMed = iMin;
	} else { // どちらでもなければ、3番目の要素が中央値となる
		iMed = iEntries[2];
	}

	// 中央値を返却する
	return iMed;
}
