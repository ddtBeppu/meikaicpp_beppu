//============================================================================
// Name        : e03_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-6
// 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
// +と-を交互に表示すること

#include <iostream>
using namespace std;

int main() {
	int i_count = 0; // 表示する記号の数を表す変数

	// 記号を表示する個数を問う
	cout << "何個表示しますか。: ";
	// キーボードから値を入力
	cin >> i_count;

	int i = 0; // 繰り返しの回数を表す変数を宣言
	do { // 以下を実行
		if (i % 2 == 0) {// 偶数回の時
			cout << "+"; // +を表示
		} else if (i % 2 != 0) { // 奇数回の時
			cout << "-"; // -を表示
		}
		// カウントアップする
		i++;
	} while (i < i_count); // 設定した回数に達するまで繰り返し

	return 0; // 整数値を返す
}
