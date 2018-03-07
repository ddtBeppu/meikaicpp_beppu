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
	int i_max = 0; // nの値。この値までの数を足し合わせる
	int i_sum = 0; // 1からnまでの和を格納する変数

	// nの値の入力を促す
	cout << "nの値: ";
	// キーボードからの読み込み
	cin >> i_max;

	for (int i = 1; i < i_max; i++) {
		// 1を1ずつ加算し、nの値と等しくなるまで繰り返す
		cout << i;
		// +を表示
		cout << " + ";
		// 合計値にiの値を加算していく
		i_sum += i;
	}
	// 最後に加算する値を表示
	cout << i_max;
	// 最後にnの値を加算
	i_sum += i_max;

	// 最後に"=和"を表示
	cout << " = " << i_sum << endl;

	// 整数値を返す
	return 0;
}
