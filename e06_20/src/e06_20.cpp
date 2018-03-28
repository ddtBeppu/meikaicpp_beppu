//============================================================================
// Name        : e06_20.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-20
//               二つのint型整数a, bの最小値、三つのint型整数a,b,cの最小値を求める、以下に示す多重定義された
//               関数群を作成せよ。
//                 int min(int a, int b);
//                 int min(int a, int b, int c);
//============================================================================

#include <iostream>
using namespace std;

int min(int iA, int iB); // 二つの数の最小値を求める
int min(int iA, int iB, int iC); // 三つの数の最小値を求める

int main() {
	int iInputA = 0; // aとして入力する値を格納する変数
	int iInputB = 0; // bとして入力する値を格納する変数
	int iInputC = 0; // cとして入力する値を格納する変数

	// 二つの数の最小値を求めることをアナウンス
	cout << "二つの数a, bの最小値を求めましょう。" << endl;
	// aの入力を促す
	cout << "a: ";
	// キーボードからの読み込み
	cin >> iInputA;

	// bの入力を促す
	cout << "b: ";
	// キーボードからの読み込み
	cin >> iInputB;

	// 最小値を出力
	cout << "最小値は" << min(iInputA, iInputB) << "です。" << endl;

	// 三つの数の最小値を求めることをアナウンス
	cout << "\n三つの数a, b, cの最小値を求めましょう。" << endl;
	// bの入力を促す
	cout << "a: ";
	// キーボードからの読み込み
	cin >> iInputA;

	// bの入力を促す
	cout << "b: ";
	// キーボードからの読み込み
	cin >> iInputB;

	// cの入力を促す
	cout << "c: ";
	// キーボードからの読み込み
	cin >> iInputC;

	// 最小値を出力
	cout << "最小値は" << min(iInputA, iInputB, iInputC) << "です。" << endl;

	// 正常終了
	return 0;
}

// 二つの数の最小値を求める
int min(int iA, int iB) {
	// 大小関係を判定
	if (iA > iB) { // iA > iBの時
		// iBの値を返却
		return iB;
	} else { // iA > iBの時
		// iAの値を返却
		return iA;
	}
}

// 三つの数の最小値を求める
int min(int iA, int iB, int iC) {
	int iMin = iA; // 最小値の値に3数の中の一つを代入し、比較することで最小値を求める
	if (iMin > iB) { // iBが最小値よりも小さい場合
		// 最小値を更新
		iMin = iB;
	}
	if (iMin > iC) {// iCが最小値よりも小さい場合
		// 最小値を更新
		iMin = iC;
	}

	// 最小値を返却
	return iMin;
}
