//============================================================================
// Name        : e05_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-3
//               要素型がint型で要素数が6の配列の全要素を1 ~ 10の乱数で埋め尽くす
//               (1以上10以下のランダムな値を代入する)プログラムを作成せよ。
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 6; // 配列の要素数を定義
	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 1 ~ 10の乱数を生成
		int iRand = rand() % 10 + 1;
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
