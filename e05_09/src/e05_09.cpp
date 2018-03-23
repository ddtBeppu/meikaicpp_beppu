//============================================================================
// Name        : e05_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-9
//               配列aの全要素を配列bに対して逆順にコピーするプログラムを作成せよ。
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 5; // 配列の要素数を定義

	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列
	int iArrayInv[sizeArray] = {0};

	bool bCheck = false; // 値の重複の有無を判定する変数
	int iRand = 0; // 乱数を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		do {
			// 重複を判定する変数を初期化
			bCheck = true;
			// 0 ~ 9の乱数を生成
			iRand = rand() % 10;

			// 現在、0以外の値が入っている大きさだけ繰り返し
			for (int n = 0; n < i; n++) {
				// 値が重複する場合
				if (iRand == iArray[n]) {
					// 判定をfalseとする
					bCheck = false;
				}
			}
		} while (bCheck == false); //重複があればやり直し

		// 生成した値を要素として代入
		iArray[i] = iRand;
	}

	// 乱数を格納した配列の値を表示
	for (int i = 0; i < sizeArray; i++) {
		// 配列の値を順に表示
		cout << "iArray[" << i << "] : " << iArray[i] << endl;
	}

	// 別の配列の要素として、配列の要素を逆順に代入する
	for (int i = 0 - 1; i < sizeArray; i++) {
		// 配列要素を逆順に代入
		iArrayInv[i] = iArray[sizeArray - i - 1];
	}

	// 元の配列の逆順を表示するループ
	for (int i = 0; i < sizeArray; i++) {
		// 配列の値を表示
		cout << "iArrayInv[" << i << "] : " << iArrayInv[i] << endl;
	}

	// 正常終了
	return 0;
}
