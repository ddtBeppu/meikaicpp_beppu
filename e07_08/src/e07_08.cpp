//============================================================================
// Name        : e07_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-8
//               要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数aryrmvを作成せよ。
//                  int aryrmv(int a[], int n, int idx, int k);
//               削除はa[idx]より後方の全要素をk個後方にずらすことによって行うこと。なお、移動されずに
//               余ってしまう要素の値は変更しなくて良い。
//============================================================================

#include <iostream>
using namespace std;

// 要素数iNumの配列iAから要素iA[iIdx]を削除する関数
int aryrmv(int iA[], int iNum, int iIdx, int iNumRmv);

int main() {
	const int iNumElem = 8; // 配列の要素数を定義
	int iArray[iNumElem] = {0}; // 配列を定義し、0で初期化
	int iIndex = 0; // 関数aryrmvで何番目の要素を削除するかの値を与える
	int iNumRmv = 0; // 削除する要素数を指定するための変数

	int iArrSize = 0; // 削除した後の配列要素数を格納する変数

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

	cout << "何個の値を削除しますか。: ";
	cin >> iNumRmv;

	// 配列から、指定した要素を削除する
	iArrSize = aryrmv(&iArray[0], iNumElem, iIndex, iNumRmv);

	// 削除を行なった後の配列要素を表示する
	cout << "現在の配列要素: " << endl;
	// 配列の要素数だけ繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 配列の要素を前から順に表示する
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	}

	// 正常終了
	return 0;
}

// 要素数iNumの配列iAから要素iA[iIdx]を削除する関数
int aryrmv(int iA[], int iNum, int iIdx, int iNumRmv) {
	// 配列要素を削除する際に、配列の外の値にアクセスしないようにする。
	if (iIdx + iNumRmv > iNum) { // 指定した要素番号から見て、削除回数を指定した際に配列からはみ出す場合
		// 配列の要素数に収まるように削除回数を調整
		iNumRmv = iNum - iIdx;
	}

	// 1つの値を削除することを基本とし、これを削除する要素数を回数として繰り返す
	for (int n = 0; n < iNumRmv; n++) {
		// 指定した要素から最後の要素まで参照
		for (int i = 0; i < iNum - iIdx; i++) {
			// ポインタのオブジェクト同士を入れ替え
			*(iA + iIdx + i) = *(iA + iIdx + i + 1);
		}
	}

	// 要素削除後の配列要素数を返す
	return iNum - iNumRmv;
}
