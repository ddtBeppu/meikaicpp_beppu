//============================================================================
// Name        : e03_23-1.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-23（List3-15の書き換え）
// 合計だけでなく平均も求めるように、List3-15およびList3-16を書き換えたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_count = 0; // 整数を加算する回数を格納する変数
	int i_sum = 0; // 合計値を格納する変数
	double i_ave = 0; // 平均値を格納する変数
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

		if (i_input == 0) { // 入力値が0の時
			// for文から抜ける
			break;
		}
		// 合計値に加算する
		i_sum += i_input;
	}
	// 平均値の算出
	i_ave = i_sum / i_count;

	// 合計値の出力
	cout << "合計は" << i_sum << "です。" << endl;
	// 平均値の出力
	cout << "平均は" << i_ave << "です。" << endl;

	// 整数値を返す
	return 0;
}
