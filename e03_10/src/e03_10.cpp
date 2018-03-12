//============================================================================
// Name        : e03_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-10
// 前問とは逆に、0から正の整数値までカウントアップするプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_max = 0; // カウントアップの目標となる数値を格納する変数

	// テキストの出力
	cout << "カウントアップします。: " << endl;
	do { // 以下、実行
		// 正の整数値の入力を促す
		cout << "正の整数値を入力してください。: ";
		// キーボードから値を読み込む
		cin >> i_max;
	} while (i_max <= 0); // 入力値が0以下の場合は、繰り返し正の値の入力を求める

	for (int i = 0; i <= i_max; i++) {
		// 0から順に、入力値になるまで繰り返し
		// 値の出力
		cout << i << endl;
	}

	// 整数値を返す
	return 0;
}
