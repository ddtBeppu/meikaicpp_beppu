//============================================================================
// Name        : e01_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 問題文
// キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int x; // 変数の宣言

	cout << "整数値："; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << x << "と入力しましたね。";

	return 0; // 整数を返す。
}
