//============================================================================
// Name        : e03_15.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-15
// 読み込んだ整数値の全約数を表示するList3-12を書き換えて、
// 約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_input = 0; // 整数値を格納する変数。この数の約数を求める。
	int i_div = 0; // 整数値を割る数を格納する変数
	int i_count = 0; // 約数の数をカウントして格納する変数

	// 整数値の入力を促す
	cout << "整数値：";
	// キーボードから整数値を読み込む
	cin >> i_input;

	for (i_div = 1; i_div <= i_input; i_div++) {
		// 整数値を割る数を増加させながら処理を繰り返す
		if (i_input % i_div == 0) { // 商が0。割り切れる時
			// 整数を割った数が約数となる。これを表示。
			cout << i_div << endl;
			// 約数の数を1増加させる
			i_count++;
		}
	}
	// 約数の総数を表示する
	cout << "約数は" << i_count << "個です。" << endl;

	// 整数値を返す
	return 0;
}
