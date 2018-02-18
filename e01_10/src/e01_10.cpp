//============================================================================
// Name        : e01_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-10
// キーボードから読み込んだ整数値に10を加えた値と10を減じた値を出力するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int x; // 変数の宣言
	const int y = 10; // 変数の宣言

	cout << "整数値："; // テキストの出力
	cin >> x; // キーボードからの入力

	// 加算
	cout << "yを加えた値は" << x + y << "です。\n";
	//減算
	cout << "yを減じた値は" << x - y << "です。";

	return 0; // 整数を返す
}
