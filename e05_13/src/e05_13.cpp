//============================================================================
// Name        : e05_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-13
//               本文で解説した２次元配列の初期化を、実際にプログラムを作成して確認せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int iWidth = 3; // 配列の行数を表す
	const int iHeight = 3; // 配列の列数を表す

	// コンマ文字を余分につけた場合の初期化結果を確認する
	int iArrayCase1[iWidth][iHeight] = {
			{1,2,3},
			{4,5,6},
			{7,8,9},
	};

	// {}内に初期化子が与えれられていない要素が0で初期化されることの確認を行う
	int iArrayCase2[iWidth][iHeight] = {
			{0},
			{2, 3},
			{4},
	};

	// 入れ子にしない場合の2次元配列の初期化結果を確認する
	int iArrayCase3[iWidth][iHeight] = {0, 1, 2};

	// 初期化についての1つ目の確認のため、配列要素を表示
	cout << "iArrayCase1 = " << endl;
	for (int i = 0; i < iWidth; i++) { // 配列の行数分繰り返し
		for (int j = 0; j < iHeight; j++) { // 配列の列数分繰り返し
			// 配列要素を順に表示
			cout << setw(3) << iArrayCase1[i][j];
		}
		// 改行して、次の行を表示
		cout << "\n";
	}
	// 次の配列表示の前に１行あける
	cout << "\n";

	// 初期化についての2つ目の確認のため、配列要素を表示
	cout << "iArrayCase2 = " << endl;
	for (int i = 0; i < iWidth; i++) { // 配列の行数分繰り返し
		for (int j = 0; j < iHeight; j++) { // 配列の列数分繰り返し
			// 配列要素を順に表示
			cout << setw(3) << iArrayCase2[i][j];
		}
		// 改行して、次の行を表示
		cout << "\n";
	}
	// 次の配列表示の前に１行あける
	cout << "\n";

	// 初期化についての3つ目の確認のため、配列要素を表示
	cout << "iArrayCase3 = " << endl;
	for (int i = 0; i < iWidth; i++) { // 配列の行数分繰り返し
		for (int j = 0; j < iHeight; j++) { // 配列の列数分繰り返し
			// 配列要素を順に表示
			cout << setw(3) << iArrayCase3[i][j];
		}
		// 改行して、次の行を表示
		cout << "\n";
	}

	// 正常終了
	return 0;
}
