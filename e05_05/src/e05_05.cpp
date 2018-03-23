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
	const int sizeArray = 6; // 配列の要素数を定義
	int iArray[sizeArray] = {0}; // 要素数がsizeArrayの配列
	int iRand = 0; // 乱数を格納する変数
	bool bCheck = true; // 重複する値が存在するかどうかを判定する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		do {
			// 重複を判定する変数を初期化
			bCheck = true;
			// 1 ~ 10の乱数を生成
			iRand = rand() % 10 + 1;

			// 現在、0以外の値が入っている大きさだけ繰り返し
			for (int n = 0; n <= i; n++) {
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

	// 配列の要素数だけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 配列の要素を出力
		cout << "iArray[" << i << "]" << " = " << iArray[i] << endl;
	}

	// 整数値を返す

	return 0;
}
