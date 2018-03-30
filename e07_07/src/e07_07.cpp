//============================================================================
// Name        : e07_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-7
//               要素数nの配列aから要素a[idx]を削除する関数aryrmvを作成せよ。
//                   int aryrmv(int a[], int n, int idx);
//               削除はa[idx]より後方の全要素を一つずつ前方にずらすことによって行う。移動されずに余ってしまう
//               末尾要素a[n - 1]の値は変更しなくても良い。例えば、配列aの要素が{1,3,4,7,9,11}の時に
//               aryrmv(a, 6, 2)と呼び出した後の配列aの要素は{1,3,7,9,11,11}となる。
//============================================================================

#include <iostream>
using namespace std;

int aryrmv(int iA[], int iNum, int iIdx); // 要素数iNumの配列iAから要素iA[iIdx]を削除する関数

int main() {
	const int iNumElem = 5; // 配列の要素数を定義
	int iArray[iNumElem] = {0}; // 配列を定義し、0で初期化
	int iIndex = 0; // 関数aryrmvで何番目の要素を削除するかの値を与える

	// 定義した配列要素数だけ値の代入を行う
	for (int i = 0; i < iNumElem; i++) {
		// i番目の要素の入力を促す
		cout << "iArray[" << i << "]: ";
		// キーボードから値を読み込み
		cin >> iArray[i];
	}

	// 現在の配列要素を表示し、どの値を削除するかを決定する
	cout << "\n現在の配列要素: " << endl;
	// 配列の要素数だけ繰り返す
	for (int i = 0; i < iNumElem; i++) {
		// 配列の要素を前から順に表示する
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	// 不正な値の入力を防止する
	do {
		// 何番目の要素を削除するかを尋ねる
		cout << "何番目の要素を削除しますか。: ";
		// キーボードから値を読みこむ
		cin >> iIndex;
	} while (iIndex < 0 || iIndex >= iNumElem); // 値が負の値で、要素数よりも大きくならないようにする

	// 配列から、指定した要素を削除する
	aryrmv(&iArray[0], iNumElem, iIndex);
	// 削除した要素をアナウンスする
	cout << iIndex + 1 << "番目の要素を削除しました。" << endl;

	// 削除を行なった後の配列要素を表示する
	cout << "現在の配列要素: " << endl;
	// 配列の要素数だけ繰り返す
	for (int i = 0; i < iNumElem -1; i++) {
		// 配列の要素を前から順に表示する
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	// 正常終了
	return 0;
}

// 要素数iNumの配列iAから要素iA[iIdx]を削除する関数
int aryrmv(int iA[], int iNum, int iIdx) {
	// 引数として配列の先頭要素を代入しており、iIdxの値により、値の入れ替えによる削除を制御する
	for (int i = 0; i < iNum - iIdx; i++) {
		// ポインタのオブジェクト同士を入れ替え
		*(iA + iIdx) = *(iA + iIdx + 1);
	}
	// アドレスに格納されたオブジェクトの入れ替えにより目的は果たされるため、0を返すこととする。
	return 0;
}
