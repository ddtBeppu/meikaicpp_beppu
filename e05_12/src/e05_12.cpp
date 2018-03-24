//============================================================================
// Name        : e05_12.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-12
//               ３次元配列の要素数を求める式を示せ。プログラムを作成して確認を行うこと。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int iWidth = 4; // 配列の幅
	const int iHeight = 5; // 配列の高さ
	const int iDepth = 3; // 配列の奥行き

	int iArray3D[iWidth][iHeight][iDepth] = {}; // 3次元配列を定義
	int iNumEntries = 0; // 3次元配列の要素数を格納する変数

	// 問題への解答
	// 3次元配列の要素数を求める式
	iNumEntries = sizeof(iArray3D) / sizeof(iArray3D[0][0][0]);

	// 要素数の計算結果を表示
	cout << "３次元配列の要素数は" << iNumEntries << "個です。" << endl;

	// 正常終了
	return 0;
}
