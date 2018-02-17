//============================================================================
// Name        : e01_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 問題文
// 三つのint型整数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int num[3]; // 配列の宣言

	num[0] = 3.; // 値の代入
	num[1] = 5.; // 値の代入
	num[2] = 8.; // 値の代入

	// 合計の計算
	cout << "合計は" << num[0] + num[1] + num[2] << "です。\n";
	// 平均値の計算
	cout << "平均は" << (num[0] + num[1] + num[2]) / (sizeof(num)/sizeof(num[0])) << "です。";

	return 0; // 整数を返す
}
