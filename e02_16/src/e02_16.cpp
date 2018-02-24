//============================================================================
// Name        : e02_16.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-16
// 月を1 ~ 12の整数値として読み込んで、
// それに対応する季節を表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int month; // 月を表す整数を格納する変数
	char season; // 季節を表す文字を格納する変数

	cout << "月: "; // テキストの出力
	cin >> month; // キーボードからの入力

	cout << "季節は"; // テキストの出力
	switch(month){
	case 1:
	case 2:
	case 3: cout << "春"; break; // テキストの出力
	case 4:
	case 5:
	case 6: cout << "夏"; break; // テキストの出力
	case 7:
	case 8:
	case 9: cout << "秋"; break; // テキストの出力
	case 10:
	case 11:
	case 12: cout << "冬"; break; // テキストの出力
	}

	cout << "です。" << endl; // テキストの出力

	return 0; // 整数値を返す
}
