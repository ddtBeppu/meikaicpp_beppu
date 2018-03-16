//============================================================================
// Name        : e04_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-6
//               3種類の浮動小数点型の大きさをsizeof演算子によって表示するプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// double型の大きさを表示する
	cout << "double型の大きさ: " << sizeof(double) << endl;

	// float型の大きさを表示する
	cout << "float型の大きさ: " << sizeof(float) << endl;

	// long double型の大きさを表示する
	cout << "long double型の大きさ: " << sizeof(long double) << endl;

	// 整数値を返す
	return 0;
}
