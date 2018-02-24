//============================================================================
// Name        : e02_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


// 演習2-13
// 二つの整数値を読み込んで降順（大きい順）に並べ換えるプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int a, b; // 二つの整数値を格納する変数を宣言

	cout << "a: "; // テキストの出力
	cin >> a; // キーボードからの入力

	cout << "b: "; // テキストの出力
	cin >> b; // キーボードからの入力

	if (a == b){ // 2値が等しいとき
		// テキストの出力
		cout << "二つの値は等しいです。" << endl;
	} else if (a < b){ // a < bのとき、
		int t = a; // aをtにコピー
		a = b; // bをaに代入
		b = t; // tをbに代入
	}

	// 結果出力
	cout << "大きい順に並べると、" << a << ", " << b << "です。\n" << endl;

	return 0; // 整数の出力
}
