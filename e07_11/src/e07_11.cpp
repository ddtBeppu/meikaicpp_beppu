//============================================================================
// Name        : e07_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-11
//               n行5列のint型配列aの全構成要素の値を縦横に並べて表示する関数print2dを表示せよ。
//                   void print2d(int a[][5], int n);
//               各構成要素がどのような値であっても、各列の数値の先頭（先端）が揃うように、最低限の
//               スペースを空けること。
//============================================================================

#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void print2d(int iArr2d[][5], int iCol); // ２次元配列の要素を並べて表示する関数

int main() {
	const int iCol = 3; // 2次元配列の行数を定義
	const int iRow = 5; // 2次元配列の列数を定義

	int iArray2d[iCol][iRow] = {0}; // 2次元配列を定義

	// 乱数の種を生成
	srand(time(NULL));

	// 2次元配列の行を参照
	for (int i = 0; i < iCol; i++) {
		// 各行の要素を参照
		for (int j = 0; j < iRow; j++) {
			// 乱数を要素して代入
			iArray2d[i][j] = rand() - rand();
		}
	}

	// 2次元配列の要素の値を表示する
	print2d(iArray2d, iCol);

	// 正常終了
	return 0;
}

// ２次元配列の要素を並べて表示する関数
void print2d(int iArr2d[][5], int iCol) {
	// 空白を埋めて、表示する要素の位置を合わせる
	cout << setfill(' ');

	// 2次元配列の列を順に見ていく
	for (int i = 0; i < iCol; i++) {
		// 行の中の要素を横に表示する
		for (int j = 0; j < 5; j++) {
			// 要素を表示する
			cout << setw(10) << left << iArr2d[i][j] << ' ';
		}
		// 改行して、次の行の要素を表示する
		cout << '\n';
	}
}
