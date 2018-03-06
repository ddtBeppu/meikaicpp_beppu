//============================================================================
// Name        : e03_22.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-22
// n段の下向きのピラミッドを表示する関数を作成せよ。
// 第i行目にはi % 10によって得られる数字を表示すること。

#include <iostream>
using namespace std;

const string blank = " "; // 1文字分のスペース
void show_blanks(int n_blank); // スペースを表示する関数

int main() {
	int i_steps = 0; // ピラミッドの段数を格納する変数
	int i_steps_inv = 0; // ピラミッドの段数を逆順に
	int num_blanks = 0; // 中心から半分のスペースの数
	int num_rocks = 0; // 階層ごとの石の数

	// ピラミッドの段数を尋ねる
	cout << "何段のピラミッドを表示しますか。: ";
	// キーボードから段数を表す値を入力
	cin >> i_steps;

	// 段数を減らしていくため、値をコピーする
	i_steps_inv = i_steps;

	for (int height = 1; height <= i_steps; height++) {
		// ピラミッドの1段目から最下段まで繰り返す

		// 現在の階層での石の数を算出
		num_rocks = (i_steps_inv - 1) * 2 + 1;

		// 記号の左半分をスペースで埋める
		show_blanks(num_blanks);

		for (int width = 0; width < num_rocks; width++) { // 算出した石の数だけ繰り返し
			// 1 ~ 9の範囲で値を出力
			cout << height % 10;
		}
		// 記号の右半分をスペースで埋める
		show_blanks(num_blanks);

		// スペースの大きさを増やす
		num_blanks++;
		// 下段で石の数を減らすため、段数を1減らす
		i_steps_inv--;
		// 次の階層へ
		cout << "\n";
	}

	// 整数値を返す
	return 0;
}

// 記号の左、または右半分をスペースで埋める関数
void show_blanks(int n_blank) {
	for (int iter = 0; iter < n_blank; iter++) {
		// 求めたスペースの数だけ繰り返す

		// スペースを出力
		cout << blank;
	}
}
