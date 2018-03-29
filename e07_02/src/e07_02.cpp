//============================================================================
// Name        : e07_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-2
//               List6-15(p.220)の関数swapを参照渡しではなく、ポインタの値渡しによって行うように変更した
//               プログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void swap(int* iX, int* iY); // 引数としてアドレスを渡すことで、そのアドレスに格納された値を交換する

int main() {
	int iInputA = 0; // 入力値aとしての値を格納する変数
	int iInputB = 0; // 入力値bとしての値を格納する変数

	// 変数aの入力を促す
	cout << "変数a: ";
	// キーボードから値を読み込む
	cin >> iInputA;

	// 変数bの入力を促す
	cout << "変数b: ";
	// キーボードから値を読み込む
	cin >> iInputB;

	// 入力値のアドレスを引数として入力
	swap(&iInputA, &iInputB);

	// 入力値同士の値の交換が完了したことを通知
	cout << "\n変数aと変数bの値を交換しました。" << endl;
	// 変数aの値を出力
	cout << "変数a: " << iInputA << endl;
	// 変数aの値を出力
	cout << "変数b: " << iInputB << endl;

	// 正常終了
	return 0;
}

// 引数として二数のポインタを受け取る
void swap(int* iX, int* iY) {
	// iXは引数(アドレス)に格納されているオブジェクトである。
	// このオブジェクトの参照するアドレスをiTに渡す
	int iT = *iX;

	// 参照するアドレスを代入(更新)
	*iX = *iY;
	// iYが参照するアドレスをiXが参照するアドレスに置き換え
	// → 参照する値が変化する
	*iY = iT;
}
