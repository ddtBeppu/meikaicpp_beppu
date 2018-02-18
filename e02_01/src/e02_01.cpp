//============================================================================
// Name        : e02_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-1
// 整数値を読み込んで、その絶対値を求めて表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int num; // 入力値を格納する変数

	cout << "整数値: "; // テキストの出力
	cin >> num; // キーボードからの入力

	// 入力値が負の場合、正の値に直す
	if (num < 0) num = num * -1;

	// 結果の出力
	cout << "その絶対値は" << num << "です。\n";

	return 0; // 整数値を返す
}
