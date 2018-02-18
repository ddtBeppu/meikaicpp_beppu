//============================================================================
// Name        : e02_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-2
// List2-5の最後のelseを、else if (n == 0)に変更するとどうなるかを検討せよ。

// -> 解答: elseのみの場合と同様に、"その値は0です。"と出力される。

#include <iostream>
using namespace std;

int main() {
	int n; // 変数の宣言

	cout << "整数値: "; // テキストの出力
	cin >> n; // キーボードからの入力

	if (n > 0) // nが正の場合
		// 結果の出力
		cout << "その値は正です。\n";
	else if (n < 0) // nが負の場合
		// 結果の出力
		cout << "その値は負です。\n";
	else if (n == 0) // nが0の場合
		// 結果の出力
		cout << "その値は0です。\n";

	return 0; // 整数値を返す
}
