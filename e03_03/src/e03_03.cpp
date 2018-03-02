//============================================================================
// Name        : e03_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-3
// 二つの整数値を読み込んで、小さい方の数以上で大きい方の数以下の全整数を、
// 小さい方から順に表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int int_a = 0; // 任意の整数を格納
	int int_b = 0; // 任意の整数を格納
	int min = 0; // 最小値を格納する変数
	int max = 0; // 最大値を格納する変数

	// 値の入力を促すコメント
	cout << "整数a: ";
	cin >> int_a; // キーボードから値を読み込み

	// 値の入力を促すコメント
	cout << "整数b: ";
	cin >> int_b; // キーボードから値を読み込み

	if (int_a < int_b) {// 整数aが整数bより小さい時
		min = int_a; // 最小値：整数a
		max = int_b; // 最大値：整数b
	} else {// 整数aが整数bより大きい時
		min = int_b; // 最小値：整数a
		max = int_a; // 最大値：整数b
	}

	// 最小値を出力
	cout << min << " ";
	do{ // 最小値が最大値と等しくない間、以下を実行
		min ++; // 最小値に１を加算

		// 数値を出力
		cout << min << " ";
	} while (min != max); // 最小値が最大値と等しくない場合、処理を続行

	return 0; // 整数値を返す
}
