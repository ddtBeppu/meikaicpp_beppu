//============================================================================
// Name        : e02_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-6
/* キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。
 * 判定は以下のように行うこと。
 * 　　0 ~ 59 -> 不可 / 60 ~ 69 -> 可 / 70 ~ 79 -> 良 / 80 ~ 100 -> 優
 */

#include <iostream>
using namespace std;

/** 成績を判定する関数 */
// 引数: 点数
// 返り値: 0
int eval(int val) {
	if (val < 0) { // 点数に負の値が入力された場合
		// 正の値の入力を促す
		cout << "正の値を入力してください。: ";

		int sec_val; // 再入力値を格納する変数
		cin >> sec_val; // キーボードからの入力
		eval(sec_val); // 関数の再帰呼び出し
	} else { // 点数が正の場合
		if (val < 60) { // 点数が0 ~ 59点の場合
			// 判定
			cout << "不可\n";
		} else if (val >= 60 && val < 70) { // 点数が60 ~ 69点の場合
			// 判定
			cout << "可\n";
		} else if (val >= 70 && val < 80) { // 点数が70 ~ 79点の場合
			// 判定
			cout << "良\n";
		} else if (val >= 80 && val <= 100) { // 点数が80 ~ 100点の場合
			// 判定
			cout << "優\n";
		}
	}
	return 0; // 整数値を返す
}

int main() {
	int score = 0; // 点数を格納する変数

	// 点数の入力を促す
	cout << "点数を入力してください。: ";
	// キーボードからの読み込み
	cin >> score;

	// 成績を判定する関数の呼び出し
	eval(score);

	// 整数値を返す
	return 0;
}
