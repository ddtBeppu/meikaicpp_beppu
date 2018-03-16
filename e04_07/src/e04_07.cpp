//============================================================================
// Name        : e04_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-7
//               浮動小数点型の情報をtypeidによって表示するプログラムを作成せよ。
//============================================================================

#include <typeinfo>
#include <iostream>
using namespace std;

int main() {
	// float型の情報を表示
	cout << "float型の情報 : " << typeid(float).name() << endl;

	// double型の情報を表示
	cout << "double型の情報 : " << typeid(double).name() << endl;

	// long double型の情報を表示
	cout << "long double型の情報 : " << typeid(long double).name() << endl;

	// 整数値を返す
	return 0;
}
