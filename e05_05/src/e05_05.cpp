//============================================================================
// Name        : e05_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-5
//               異なる要素が同じ値とならないように、演習5-3のプログラムを改変したプログラムを作成せよ。
//               例えば、{1,3,5,6,1,2}とならないようにすること。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int iSizeArray = 6; // 配列の要素数を定義
	int iArray[iSizeArray] = {0}; // 要素数がsizeArrayの配列
	int iRand = 0; // 乱数を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の最初の要素は先に入れておき、値の重複の確認がやりやすいようにする。
	iArray[0] = rand() % 10 + 1;

	// 配列の要素数だけ繰り返し
	for (int i = 1; i < iSizeArray; i++) {
		// 1 ~ 10の乱数を生成
		iRand = rand() % 10 + 1;

		// n(=i-1)回ループを回し、重複した値がないかを調べる
		for (int n = 0; n < i; n++) {
			// 重複した値があった場合には、乱数を再度生成する。
			if (iRand == iArray[n]) {
				// 1 ~ 10の乱数を生成
				iRand = rand() % 10 + 1;
			}
		}

		// 生成した値を要素として代入
		iArray[i] = iRand;
	}

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < iSizeArray; i++) {
		// 配列の要素を出力
		cout << "iArray[" << i << "]" << " = " << iArray[i] << endl;
	}

	// 整数値を返す

	return 0;
}
