//============================================================================
// Name        : e07_10.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-10
//               n行5列のint型２次元配列aの各行の最大値を、要素数nの1次元配列mに格納する関数maxlineを作成せよ。
//                     void maxline(int a[][5], int m[], int n);
//               例えば、aに受け取った3行5列の配列の構成要素が{{1,2,5,4,8},{6,7,4,2,3},{3,0,5,9,1}}
//               であれば、mに{8,7,9}を格納すること。
//============================================================================

#include <iostream>
using namespace std;

void maxline(int iArr[][5], int iArrMax[], int iRow);

int main() {
	const int iCol = 3; // 2次元配列の行数を定義
	const int iRow = 5; // 2次元配列の列数を定義

	// 2次元配列を定義
	int iArray[iCol][iRow] = {
			{1, 2, 5, 4, 8},
			{6, 7, 4, 2, 3},
			{3, 0, 5, 9, 1}
	};

	// 2次元配列の要素を表示
	cout << "配列の要素は" << endl;
	// 2次元配列の行を移動
	for (int i = 0; i < iCol; i++) {
		// 2次元配列の列を移動
		for (int j = 0; j < iRow; j++) {
			// 配列要素を表示
			cout << iArray[i][j] << ' ';
		}
		// 改行して、次の行を表示
		cout << '\n';
	}

	// 2次元配列の各行の最大値を格納する配列。0で初期化
	int iArrMax[iCol] = {0};

	// 2次元配列の各行の要素を配列iArrMaxに格納
	maxline(iArray, iArrMax, iCol);

	// 実行結果を見やすくするため、改行
	cout << '\n';

	// iArrMaxの要素の値を表示する
	for (int i = 0; i < iCol; i++) {
		// 順番に要素を表示
		cout << "iArrMax[" << i << "] = " << iArrMax[i] << endl;
	}

	// 正常終了
	return 0;
}

// 2次元配列の各行の要素を配列iArrMaxに格納する関数
void maxline(int iArr[][5], int iArrMax[], int iCol) {
	// 2次元配列の行、iArrMaxの要素を参照しながら処理
	for (int i = 0; i < iCol; i++) {
		// 最大値の比較のため、各行の先頭要素を最大値として格納しておく
		iArrMax[i] = iArr[i][0];
		// 各行の要素の比較を行う
		for (int j = 0; j < 5; j++) {
			// 現在の値が最大値を上回った場合
			if (iArrMax[i] < iArr[i][j]) {
				// 最大値を更新
				iArrMax[i] = iArr[i][j];
			}
		}
	}
}
