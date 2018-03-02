//============================================================================
// Name        : e03_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-7
// 正の整数値を読み込んで、その桁数を出力するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int i_num = 0; //　正の整数値を格納する変数
	int i_count = 0; // 桁数をカウントする変数
	const int i_div = 10; // 入力値を割る値

	// 値の入力を促すコメント
	cout << "正の整数値を入力してください。: ";
	// キーボードから値を読み込む
	cin >> i_num;

	do { // 以下を実行
		// 桁数のカウントを1上げる
		i_count++;
		// 入力値を10で割る
		i_num = i_num / i_div;
	} while (i_num != 0); // 入力値を10で割った商が0でない限り繰り返し

	// 入力値の桁数を表示
	cout << "その値は" << i_count << "桁です。" << endl;

	// 整数値を返す
	return 0;
}
