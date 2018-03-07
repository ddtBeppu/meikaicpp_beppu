//============================================================================
// Name        : e03_24.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-24
// 合計だけでなく平均も求めるように、List3-17を書き換えたプログラムを作成せよ。
// なお、読み込んだ負の数の個数は平均を求める際の分母から除外すること。

#include <iostream>
using namespace std;

int main() {
	int i_count = 0; // 整数を加算する回数を格納する変数
	int i_cur_count = 0; // 現在の回数を格納する変数
	double d_sum = 0; // 合計値を格納する変数
	double d_ave = 0; // 平均値を格納する変数
	int i_input = 0; // 加算する整数値を格納する変数

	// 整数を加算することを伝える
	cout << "整数を加算します。" << endl;
	// 加算する個数を尋ねる
	cout << "何個加算しますか。: ";
	// キーボードから回数を入力
	cin >> i_count;

	for (int iter = 0; iter < i_count; iter++) { // 入力した回数だけ繰り返し
		// 整数値の入力を促す
		cout << "整数（0で終了）: ";
		// キーボードから加算する値を入力
		cin >> i_input;

		if (i_input < 0) { // 入力値が負の値の場合
			// 負の値は加算しないことを伝える
			cout << "\a負の値は加算しません。" << endl;
			// 負の値は平均値の算出に使用しないことを伝える
			cout << "\a負の値は平均値の算出に使用しません。" << endl;
			continue;
		}

		// 以下は、負の値が入力された場合は実行されない。
		// 現在の回数となるように1を加算
		i_cur_count++;
		// 合計値に入力値を加算
		d_sum += i_input;
		// 平均値を求める
		d_ave = d_sum / i_cur_count;
	}

	// 合計値の出力
	cout << "合計は" << d_sum << "です。" << endl;
	// 平均値の出力
	cout << "平均は" << d_ave << "です。" << endl;

	// 整数値を返す
	return 0;
}
