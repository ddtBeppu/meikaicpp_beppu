//============================================================================
// Name        : e01_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 問題文
// 二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	double x, y; // 変数の宣言

	cout << "xの値： "; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << "yの値： "; // テキストの出力
	cin >> y; // キーボードからの入力

	// 合計
	cout << "合計は" << x + y << "です。\n";
	// 平均
	cout << "平均は" << (x+y)/2 << "です。";

	return 0; // 整数の出力
}
