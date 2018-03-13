//============================================================================
// Name        : e03_18.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-18
// 九九の表を表示するList3-13(p.106)を、
// setw操作子を用いることなく実現するように書き換えたプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	const int i_end = 9; // 値の範囲。九九なので、9まで。
	const string s_blank = " "; // スペース1文字分
	const int i_border = 10; // 10以上 or 未満を判別する為に使用する

	for (int cols = 1; cols <= i_end; cols++) { // 列数が1~9ので繰り返し
		for (int rows = 1; rows <= i_end; rows++) { // 行数が1~9ので繰り返し
			// 2数の積を求める
			int mul = rows * cols;

			if (mul < i_border) { // 積が1桁の場合
				// スペースを1文字分とる
				cout << s_blank;
				// スペースを1文字分とる
				cout << s_blank;
			} else if (mul >= i_border){ // 積が2桁の場合
				// スペースを1文字分とる
				cout << s_blank;
			}
			// 積の値を出力
			cout << mul;
		}
		// 次の段を表示するため改行
		cout << "\n";
	}
	// 整数値を返す
	return 0;
}
