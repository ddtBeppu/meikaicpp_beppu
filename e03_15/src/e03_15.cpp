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
	int i_num = 0; // 整数値を格納する変数。この数の約数を求める。
	int div = 0; // 整数値を割る数を格納する変数
	int count = 0; // 約数の数をカウントして格納する変数

	cout << "整数値："; // 整数値の入力を促す
	cin >> i_num; // キーボードから整数値を読み込む

	for (div = 1; div <= i_num; div++) {
		// 整数値を割る数を増加させながら処理を繰り返す
		if (i_num % div == 0) { // 商が0。割り切れる時
			// 整数を割った数が約数となる。これを表示。
			cout << div << endl;
			// 約数の数を1増加させる
			count++;
		}
	}
	// 約数の総数を表示する
	cout << "約数は" << count << "個です。" << endl;

	// 整数値を返す
	return 0;
}
