//============================================================================
// Name        : e04_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-8
//               以下の算術演算を行う格式にsizeof演算子やtypeidを適用した値を表示するプログラムを
//               作成せよ。また、実行結果に対する考察を行うこと。
//              int + int     double + double     int + double      double + int
//============================================================================

// 結果に対する考察
// int + double および double + intは順序が異なるのみであり、演算結果が等しくなることは期待通りである。
// int + intの演算結果も同様である。
// 一方、double + doubleの演算結果が、例えば5.5 + 5.5 = 11のようにint型のようになることは発見といえる。


#include <iostream>
using namespace std;

int main() {
	int iInput = 0; // int型の入力値
	double dInput = 0.0; // double型の入力値

	// int型の値の入力を促す
	cout << "int型の値を入力: ";
	// キーボードから値を読み込む
	cin >> iInput;

	// double型の値の入力を促す
	cout << "double型の値を入力: ";
	// キーボードから値を読み込む
	cin >> dInput;

	// int + int
	cout << "int + intの答え: " << iInput + iInput << endl;

	// double + double
	cout << "double + doubleの答え: " << dInput + dInput << endl;

	// int + double
	cout << "int + doubleの答え: " << iInput + dInput << endl;

	// double + int
	cout << "double + intの答え: " << dInput + iInput << endl;

	// 整数値を返す
	return 0;
}
