//============================================================================
// Name        : e03_16.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-16
// 右に示すように、1からnまでの整数値の２乗値を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	const int i_begin = 1; // この値を開始値とする
	int i_num = 0; // この整数値の乗数を表示する
	int i_end = 0; // i_beginからこの値までの整数値の２乗値を表示する

	cout << "nの値："; // 終了値の入力を促す
	cin >> i_end; // キーボードから値を読み込む

	for (i_num = i_begin; i_num <= i_end; i_num++) {
		// 整数値が終了値と等しくなるまで以下を繰り返す

		// 整数値の２乗を出力
		cout << i_num << "の2乗は"
				<< i_num * i_num << endl;
	}

	// 整数値を返す
	return 0;
}
