//============================================================================
// Name        : e07_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-5
//               List7-10の関数reverseでの2要素の交換を、演習7-2(p.253)で作成した関数swapの呼び出しによって
//               行うように変更したプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void reverse(int iA[], int iN); // 配列要素の順序を反転させる関数
void swap(int* iX, int* iY); // 引数としてアドレスを渡すことで、そのアドレスに格納された値を交換する

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
		// 配列要素のアドレスを引数として代入、交換を行う
		swap(&iA[i], &iA[iN - i -1]);
	}
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
