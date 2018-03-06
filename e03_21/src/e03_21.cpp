//============================================================================
// Name        : e03_21.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-21
// n段のピラミッドを表示するプログラムを作成せよ。
// 第i行目には(i - 1) * 2 + 1個の'*'記号を出力すること

#include <iostream>
using namespace std;

const string blank = " "; // 1文字分のスペース
void show_blanks(int n_blank); // スペースを表示する関数

int main() {
	int i_steps = 0; // ピラミッドの段数を格納する変数
	int width_max = 0; // 最下段の数
	int num_blanks = 0; // 中心から半分のスペースの数
	int num_rocks = 0; // 階層ごとの石の数

	// ピラミッドの段数を尋ねる
	cout << "何段のピラミッドを表示しますか。: ";
	// キーボードから段数を表す値を入力
	cin >> i_steps;

	// 最下段の石の数を算出
	width_max = (i_steps - 1) * 2 + 1;
	// 最下段の石から、スペースの大きさを算出
	num_blanks = (width_max - 1) / 2;

	for (int height = 1; height <= i_steps; height++) {
		// ピラミッドの1段目から最下段まで繰り返し

		// 現在の階層での石の数を算出
		num_rocks = (height - 1) * 2 + 1;

		// 左半分をスペースで埋める
		show_blanks(num_blanks);
		// 算出した数の記号を出力
		for (int iter = 0; iter < num_rocks; iter++) {
			cout << "*";
		}
		// 右半分をスペースで埋める
		show_blanks(num_blanks);

		// スペースの数を1減らす
		num_blanks--;
		// 下の階層へ
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
