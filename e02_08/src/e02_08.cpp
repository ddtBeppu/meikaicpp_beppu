//============================================================================
// Name        : e02_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-8
// 二つの整数を読み込んで、それらの値の差を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int x, y; // 二つの整数を宣言

	cout << "x: "; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << "y: "; // テキストの出力
	cin >> y; // キーボードからの入力

	// 2値の差を計算
	int sub = x - y;

	if (sub < 0) // 差が負の値になる場合
		sub = sub * -1; // -1をかけて正の値にする

	// 結果を出力
	cout << "差: " << sub << endl;

	return 0; // 整数を返す
}
