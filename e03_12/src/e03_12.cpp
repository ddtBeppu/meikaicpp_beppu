//============================================================================
// Name        : e03_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-12
// 前問のプログラムを書き換えて、”式”として表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_n = 0; // nの値。
	int i_sum = 0; // 1からnまでの和を格納する変数

	// nの値の入力を促す
	cout << "nの値: ";
	// キーボードからの読み込み
	cin >> i_n;

	for (int i = 1; i <= i_n; i++) {
		// 1を1ずつ加算し、nの値と等しくなるまで繰り返す
		cout << i;
		if (i < i_n) { // 足し合わせる最後の値以外の場合
			// +を表示
			cout << " + ";
		}
		// 合計値にiの値を加算していく
		i_sum += i;
	}

	// 最後に"=和"を表示
	cout << " = " << i_sum << endl;

	// 整数値を返す
	return 0;
}
