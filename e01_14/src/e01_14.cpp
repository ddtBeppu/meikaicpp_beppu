//============================================================================
// Name        : e01_14.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習1-14
// キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値を
//  ランダムに生成して表示するプログラムを作成せよ。
// ※　キーボードから読み込んだ値が100であれば、95 ~ 105の範囲の整数値を表示すること

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int txt; // 入力値を格納する変数

	cout << "整数値: "; // テキストの出力
	cin >> txt; // キーボードからの入力

	srand(time(NULL)); // 乱数の種を生成
	int num = rand() % 10 - 5; // -5 ~ 5の乱数を生成
	int output = txt + num; // 入力値に加算

	// 結果の出力
	cout << "出力値: " << output <<endl;

	return 0; // 整数値を返す
}
