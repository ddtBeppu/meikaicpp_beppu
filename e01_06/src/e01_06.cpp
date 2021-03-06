//============================================================================
// Name        : e01_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-6
// List1-7のプログラムを変更して、小数部をもつ実数値をxやyに代入するプログラムを作成せよ。
// その実行結果から、int型整数が整数値のみしか扱えないことを確認すること。

// 解答
// 実行結果から、実数値の小数部の切り捨てが行われていることを確認しました。

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x; // 変数の宣言
	int y; // 変数の宣言

	x = 63.5; // 値の代入
	y = 18.7; // 値の代入

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
