//============================================================================
// Name        : e05_04.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-4
//               連続する要素が同じ値とならないように、演習5-3のプログラムを改変したプログラムを作成せよ。
//               例えば、{1,3,5,5,3,2}とならないようにすること。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 6; // 配列の要素数を定義
	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列
	int iRand = 0; // 乱数を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		do { // 以下を実行
			// 1 ~ 10の乱数を生成
			iRand = rand() % 10 + 1;
			//cout << iRand << endl;
		} while (i != 0 && iRand == iArray[i-1]);
		// 最初を除き、生成した乱数が一回前に配列に代入した値と等しい場合、繰り返し

		// 生成した値を要素として代入
		iArray[i] = iRand;
	}

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 配列の要素を出力
		cout << "iArray[" << i << "]" << " = " << iArray[i] << endl;
	}

	// 整数値を返す
	return 0;
}
