//============================================================================
// Name        : e02_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-10
// キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	int x, y, z; // 三つの整数の最小値を宣言
	int nums[3]; // 三つの整数を格納する配列を宣言

	cout << "x: "; // テキストの出力
	cin >> x; // キーボードからの入力

	cout << "y: "; // テキストの出力
	cin >> y; // キーボードからの入力

	cout << "z: "; // テキストの出力
	cin >> z; // キーボードからの入力

	nums[0] = x; // 配列に格納
	nums[1] = y; // 配列に格納
	nums[2] = z; // 配列に格納

	int max = 0; // 最大値を0に初期化
	for (int i = 0; i < 3; i++){ // ループを回す
		if (nums[i] > max) // 入力値が最大値より大きい場合
			max = nums[i]; // 最大値を更新
	}

	// 結果の出力
	cout << "最大値は" << max << "です。";

	return 0; // 整数を返す
}
