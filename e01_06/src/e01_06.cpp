//============================================================================
// Name        : e01_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double x; // 変数の宣言
	double y; // 変数の宣言

	x = 63.5; // 値の代入
	y = 18.7; // 値の代入

	// ２乗の計算
	cout << "x*2の値は" << x*2 << "です。\n";
	//平方根の計算
	cout << "√yの値は" << sqrt(y) << "です。\n";

	// 合計を出力
	cout << "合計は" << x+y << "です。\n";
	// 平均を出力
	cout << "平均は" << (x+y)/2 << "です。\n";

	return 0; // 整数を出力
}
