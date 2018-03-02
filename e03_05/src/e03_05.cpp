//============================================================================
// Name        : e03_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-5
// 読み込んだ値が1未満であれば改行文字を出力しないように
// List3-6（p.92）を書き換えたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_count = 0; // 記号を表示する数を示す変数

	// 値をいくつ表示するかを問うコメント
	cout << "何個↩︎を表示しますか。: ";
	// キーボードから値を読み込み
	cin >> i_count;

	int i = 1; // 閾値の設定
	while (i <= i_count) { // 読み込んだ値がi以上の間
		// 改行文字を出力
		cout << "↩︎" << endl;;
		// iに1を加算
		i++;
	}
	// 改行
	cout << "\n";

	return 0; // 整数値を返す
}
