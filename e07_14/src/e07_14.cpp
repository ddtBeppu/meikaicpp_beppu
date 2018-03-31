//============================================================================
// Name        : e07_14.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-14
//               要素数nの配列a内のkeyと等しい全要素の添字を配列idxに格納する関数search_idxを作成せよ。
//               返却するのはkeyと等しい要素の個数とする。
//                    int search_idx(int* a, int* idx, int n, int key);
//               例えば、aに受け取った配列の要素が{1, 7, 5, 7, 2, 4, 7}でkeyが7であれば、idxに{1,3,6}
//               を格納した上で3を返却する。
//============================================================================

#include <iostream>
using namespace std;

// 配列iArrayからキーとなる値を探索し、インデックスをiArrIdxに格納する関数
int search_idx(int* iArray, int* iArrIdx, int iArrSize, int iKey);

int main() {
	const int iArrSize = 5; // 配列の要素数を定義
	int iArray[iArrSize] = {0}; // 配列を定義。この配列から要素を探索する
	int iArrIdx[] = {0}; // 配列Arrayの中で探索する値が見つかったインデックスの値を格納する配列
	int iKey = 0; // 配列iArrayの中で探索する値

	int iSizeIdxArray = 0; // インデックスを格納した配列の大きさを格納する変数

	// 元の配列の値を設定
	cout << "配列要素を入力してください。" << endl;
	// 配列要素だけ処理を繰り返す
	for (int i = 0; i < iArrSize; i++) {
		// 値を入力する場所を知らせる
		cout << "iArray[" << i << "]: ";
		// キーボードから値を読み込み、配列の要素とする
		cin >> iArray[i];
	}

	// 入力値を制限する
	do {
		// 配列iArrayから探索する値を入力する
		cout << "配列内でのインデックスを出力します。探す値を入力してください。(0 ~ 9)";
		// キーボードから値を入力
		cin >> iKey;
	} while (iKey < 0 || iKey > 9); // 範囲外の時、入力をやり直す

	// 配列iArrayからキーとなる値を探索し、インデックスをiArrIdxに格納
	iSizeIdxArray = search_idx(iArray, iArrIdx, iArrSize, iKey);

	// 探索した値が見つかったインデックスを表示
	cout << "\n入力した値は" << endl;
	// インデックスを格納した配列の要素数だけ繰り返し
	for (int i = 0; i < iSizeIdxArray; i++) {
		// インデックスの値を表示
		cout << iArrIdx[i] + 1 << "番目" << endl;
	}
	// テキストの出力
	cout << "にあります。" << endl;

	// 正常終了
	return 0;
}

// 配列iArrayからキーとなる値を探索し、インデックスをiArrIdxに格納する関数
int search_idx(int* iArray, int* iArrIdx, int iArrSize, int iKey) {
	// 配列iArrayの要素数回処理を繰り返し、探索
	for (int i = 0; i < iArrSize; i++) {
		// 参照するiArrayのアドレスに格納されているオブジェクトの値が探索値と等しい場合
		if (*iArray++ == iKey) {
			// インデックスを格納
			*iArrIdx++ = i;
		}
	}
	// 配列iArrIdxの要素数を返却
	return sizeof(iArrIdx) / sizeof(iArrIdx[0]);
}
