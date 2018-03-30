//============================================================================
// Name        : e07_04.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-4
//               typeid演算子を用いて型を表示することによって、List7-10(p.260)の関数reverseの仮引数
//               aが配列でなくポインタであることを確認せよ。
//============================================================================

#include <typeinfo>
#include <iostream>
using namespace std;

void reverse(int iA[], int iN); // 配列要素の順序を反転させる関数

int main() {
	const int iN = 5; // 配列の要素数として設定
	int iNum[iN] = {0}; // 配列要素を0で初期化する

	// 定義した配列要素数だけ値の代入を行う
	for (int i = 0; i < iN; i++) {
		// i番目の要素の入力を促す
		cout << "iNum[" << i << "]: ";
		// キーボードから値を読み込み
		cin >> iNum[i];
	}

	// 値の反転を行う
	reverse(iNum, iN);

	// 配列の要素の順序を反転させたことを伝える
	cout << "\n要素の並びを反転しました。" << endl;
	// 配列の要素数回分繰り返し
	for (int i = 0; i < iN; i++) {
		// 関数reverseにより順序を反転した値を出力
		cout << "iNum[" << i << "]: " << iNum[i] << endl;
	}

	// 正常終了
	return 0;
}

// 配列要素の順序を反転させる関数
void reverse(int iA[], int iN) {
	// iA、すなわち問題文におけるaの型名を表示する。
	// 結果、型名はPiであり、ポインタであることが確認できた。
	cout << "iAの型: " << typeid(iA).name() << endl;

	// 配列の長さの半分を計算し、真ん中より前と後ろを入れ替えることにより、順序の反転を実現
	for (int i = 0; i < iN / 2; i++) {
		// 真ん中より前の値を一時退避させる
		int iT = iA[i];
		// 真ん中より後ろよりの値を代入
		iA[i] = iA[iN - i - 1];
		// 退避させていた値を後ろに入れることにより、値の交換が成立
		iA[iN - i - 1] = iT;
	}
}
