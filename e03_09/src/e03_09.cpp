//============================================================================
// Name        : e03_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-9
// 正の整数値を0までカウントダウンするList3-4(p.88)をfor文で表現せよ。

#include <iostream>
using namespace std;

int main() {
	int i_begin = 0; // 初めの値を格納する変数

	// テキストの出力
	cout << "カウントダウンします。: " << endl;
	// 正の整数値の入力を促す
	cout << "正の整数値: ";
	// キーボードから値を読み込む
	cin >> i_begin;

	for (int i = i_begin; i >= 0; i--) {
		// 入力値の数だけ、0になるまで繰り返し
		// 値の出力
		cout << i << endl;
	}

	// 整数値を返す
	return 0;
}
