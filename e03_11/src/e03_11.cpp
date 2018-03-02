//============================================================================
// Name        : e03_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-11
// 1からnまでの和を求めるList3-9(p.98)をfor文で実現せよ。

#include <iostream>
using namespace std;

int main() {
	int i_n = 0; // nの値。
	int i_sum = 0; // 1からnまでの和を格納する変数

	// nの値の入力を促す
	cout << "nを入力: ";
	// キーボードからの読み込み
	cin >> i_n;

	for (int i = 1; i <= i_n; i++) {
		// 1を1ずつ加算し、nの値と等しくなるまで繰り返す
		// 合計値にiの値を加算していく
		i_sum += i;
	}

	// 求めた和を出力
	cout << "iから" << i_n << "までの和は" << i_sum << "です。";

	// 整数値を返す
	return 0;
}
