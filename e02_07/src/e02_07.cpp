//============================================================================
// Name        : e02_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-7
// 二つの実数値を読み込んで、大きい方の値を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	double x, y; // 二つの実数値を用意する

	cout << "x: "; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << "y: "; // テキストの出力
	cin >> y; // キーボードからの入力

	if (x > y) // x > yのとき
		// 値の出力
		cout << "大きい方の値は" << x << "です。\n";
	else if (x < y) // x < yのとき
		// 値の出力
		cout << "大きい方の値は" << y << "です。\n";
	else // それ以外、すなわち値が等しい場合
		// 値の出力
		cout << "等しい値です。";

	return 0; // 整数を返す
}
