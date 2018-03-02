//============================================================================
// Name        : e03_04.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-4
// List3-4のwhile文終了時にxの値が-1になることを確認できるように
// 書き換えたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_x = 0; // カウントダウンの始まりの値を格納する変数

	cout << "カウントダウンします。\n";

	do { // i_xが0以下の間、以下を実行
		// テキストの出力
		cout << "正の整数値: ";
		// キーボードから値を入力
		cin >> i_x;
	} while (i_x <= 0); // xが0以下の間

	// 値の出力
	cout << i_x << "\n";

	do { // xが0以上の間
		// i_xから1を減算
		i_x--;
		// 値の出力
		cout << i_x << "\n";
	} while (i_x >= 0); // i_xの値が0以上の間繰り返し

	return 0; // 整数値を返す
}
