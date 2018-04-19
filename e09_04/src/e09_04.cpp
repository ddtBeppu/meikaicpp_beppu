//============================================================================
// Name        : e09_04.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-4
//               二値の最小値を求める関数テンプレートminofを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

template <class Type> Type minof(Type inputA, Type inputB); // 二値の最小値を求める関数テンプレート

int main() {
	int iInputA = 0; // 比較する値のうちの一つ
	int iInputB = 0; // 比較する値のうちの一つ

	// 最小値を求める
	cout << "2値A,Bの最小値を求めます。" << endl;

	// 値Aの入力
	cout << "A: ";
	// キーボードから読み込み
	cin >> iInputA;

	// 値Bの入力
	cout << "B: ";
	// キーボードから読み込み
	cin >> iInputB;

	// 最小値の表示
	cout << "最小値は" << minof(iInputA, iInputB) << "です。" << endl;

	// 正常終了
	return 0;
}

// 二値の最小値を求める関数テンプレート
template <class Type> Type minof(Type inputA, Type inputB) {
	if (inputA < inputB) { // inputAの方が小さい場合
		// inputAが最小値
		return inputA;
	}
	// そうでない時、inputBを最小値として返却
	return inputB;
}
