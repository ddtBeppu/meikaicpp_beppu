//============================================================================
// Name        : e02_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-9
/* 二つの整数値を読み込んで、それらの値の差が10以下であれば「それらの差は10以下です。」
 * と表示し、そうでなければ「それらの差は11以上です。」と表示するプログラムを作成せよ。
 */

#include <iostream>
using namespace std;

int main() {
	int x, y; // 二つの整数値の宣言

	cout << "x: "; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << "y: "; // テキストの出力
	cin >> y; // キーボードからの入力

	// 2値の差を計算
	int sub = x - y;

	if (sub < 0) // 差が負の値の場合
		sub = sub * -1; // -1をかけて正の値にする

	if (sub < 11) // 差が10以下の場合
		// テキストの出力
		cout << "それらの値の差は10以下です。";
	else // それ以外の場合
		// テキストの出力
		cout << "それらの差は11以上です。";

	return 0; // 整数を返す
}
