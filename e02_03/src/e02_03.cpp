//============================================================================
// Name        : e02_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-3
// 二つのint型整数a, bを読み込んで、その大小関係を以下のいずれかで表示するプログラムを作成せよ。
// 「aの方が大きいです。」「bの方が大きいです。」「aとbは同じ値です。」

#include <iostream>
using namespace std;

int main() {
	int a, b; // 整数を格納する変数

	cout << "a: "; // テキストの出力
	cin >> a; // キーボードからの入力

	cout << "b: "; // テキストの出力
	cin >> b; // キーボードからの入力

	if (a > b) // a>bの場合
		// 結果出力
		cout << "aの方が大きいです。\n";
	else if (a < b) // a<bの場合
		// 結果出力
		cout << "bの方が大きいです。\n";
	else // その他、すなわちa=bの場合
		// 結果出力
		cout << "aとbは同じ値です。\n";

	return 0; // 整数値を返す
}
