//============================================================================
// Name        : e01_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-8
// int型の変数に実数値の初期化値を与えるとどうなるか。プログラムを作成して確認せよ。

// 解答
// 小数点以下の値が切り捨てられる。

#include <iostream>
using namespace std;

int main() {
	int x; // 変数の宣言
	int y; // 変数の宣言

	x = 63.5; // 実数値の代入
	y = 18.5; // 実数値の代入

	// xの値を出力
	cout << "xの値は" << x << "です。\n";
	// yの値を出力
	cout << "yの値は" << y << "です。\n";

	// 合計を出力
	cout << "合計は" << x+y << "です。\n";
	// 平均を出力
	cout << "平均は" << (x+y)/2 << "です。\n";

	return 0; // 整数を出力
}
