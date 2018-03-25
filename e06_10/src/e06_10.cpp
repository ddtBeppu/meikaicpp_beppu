//============================================================================
// Name        : e06_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-10
//               「正の整数値：」と表示して、キーボードから正の整数値を読み込んで、その値を返却する関数
//                read_pintを作成せよ。0や負の値が入力されたら再入力させること。
//============================================================================

#include <iostream>
using namespace std;

int read_pint(); // キーボードから正の整数値を読み込み、表示する関数

int main() {
	// 返却された正の整数値を表示
	cout << read_pint() << endl;
}

int read_pint() {
	int iInput = 0; // 入力値を格納する変数

	// 入力値が0または負の値の場合、繰り返し入力させるループ
	do {
		// 正の整数値の入力を促す
		cout << "正の整数値: ";
		// キーボードからの読み込まれた値を受け取る
		cin >> iInput;
	} while (iInput == 0 || iInput < 0); // 入力値が0または負の値の場合、繰り返し

	// 入力値を返却
	return iInput;
}
