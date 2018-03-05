//============================================================================
// Name        : e03_19.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-19
// n段の正方形を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_length = 0; // 正方形の一辺の長さを格納する変数

	// 正方形のサイズを尋ねる
	cout << "何段の正方形を表示しますか。：";
	// キーボードから長さの値を入力
	cin >> i_length;

	for (int cols = 0; cols < i_length; cols++) {
		// 縦方向の数の増加
		for (int rows = 0; rows < i_length; rows++) {
			// 横方向の数の増加
			// 記号を出力し、正方形を形成する
			cout << "* ";
		}
		// 改行し、次の行へ移る
		cout << "\n";
	}
	// 整数値を返す
	return 0;
}
