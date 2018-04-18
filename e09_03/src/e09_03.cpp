//============================================================================
// Name        : e09_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-3
//               xの2乗を求める関数テンプレートsquareを作成せよ。
//                   template <class Type> Type square(Type x);
//============================================================================

#include <iostream>
using namespace std;

template <class Type> Type square(Type inputX); // 引数の２乗を求める関数

int main() {
	double dInput = 0.0; // キーボードから値を読み込み、２乗を求める値を格納する変数

	// 値の入力を促す
	cout << "値の入力。" << endl;
	// キーボードから読み込み
	cin >> dInput;

	// 入力値の２乗を表示
	cout << dInput << "の２乗は" << square(dInput) << "です。" << endl;

	// 正常終了
	return 0;
}

// 引数の２乗を求める関数
template <class Type> Type square(Type inputX) {
	// 2乗を計算して返却
	return inputX * inputX;
}
