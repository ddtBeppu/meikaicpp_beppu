//============================================================================
// Name        : e03_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-8
// 読み込んだ値が1未満であれば改行文字を出力しないように、
// List3-10(p.100)を書き換えたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_count = 0; // 表示する記号の数を表す値を格納する変数
	string ret = "\\n"; // 改行文字

	// 読み込む記号の数を尋ねる
	cout << "何個" << ret << "を表示しますか。: ";
	// キーボードから値を読み込む
	cin >> i_count;

	if (i_count > 0) { // 読み込んだ値が1以上の場合
		for (int i = 0; i < i_count; i++) {
			// 読み込んだ値を回数として処理を繰り返す

			// 記号を表示する
			cout << ret;
		}
	}
	// 改行
	cout << "\n";

	// 整数値を返す
	return 0;
}
