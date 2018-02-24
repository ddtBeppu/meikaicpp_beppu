//============================================================================
// Name        : e02_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-11
// キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int a, b, c; // 三つの整数値を宣言
	int max, min, mid; // 最大値、最小値、中央値
	int num[3]; // 3変数を格納する配列

	cout << "a: "; // テキストの出力
	cin >> a; // キーボードからの入力

	cout << "b: "; // テキストの出力
	cin >> b; // キーボードからの入力

	cout << "c: "; // テキストの出力
	cin >> c; // キーボードからの入力

	num[0] = a; // 変数を配列に格納
	num[1] = b; // 変数を配列に格納
	num[2] = c; // 変数を配列に格納

	max = a; // aを最大値とする
	if (b > max) max = b; // bがmaxより大きい場合、bを最大値とする
	if (c > max) max = c; // cがmaxより大きい場合、cを最大値とする

	min = a; // aを最小値とする
	if (b < min) min = b; // bがminより小さい場合、bを最小値とする
	if (c < min) min = c; // cがminより小さい場合、cを最小値とする

	for (int i = 0; i < 3; i++){ // ループを回す
		if (num[i] != max && num[i] != min) // num[i]が最大値でなく、かつ最小値でない場合
			mid = num[i]; // num[i]を中央値とする
	}

	// 結果出力
	cout << "中央値は" << mid << "です。\n"<< endl;

	return 0; // 整数を返す
}
