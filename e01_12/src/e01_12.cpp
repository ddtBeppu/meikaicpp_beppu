//============================================================================
// Name        : e01_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-12
// 三角形の底辺と高さを読み込んで、その面積を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	double x, y; // 変数の宣言

	cout << "三角形の面積を求めます。\n"; // テキストの出力

	cout << "底辺: "; //テキストの出力
	cin >> x; // キーボードからの入力

	cout << "高さ: "; // テキストの出力
	cin >> y; // キーボードからの入力

	// 面積
	cout << "面積は" << (x * y) / 2 << "です。";

	return 0; // 整数を返す
}
