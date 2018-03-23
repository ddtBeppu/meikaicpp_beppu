//============================================================================
// Name        : e05_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-8
//               配列の要素の並びをシャッフルする（要素の並びがランダムになるようにかき混ぜる）プログラムを作成せよ。
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 10; // 配列の要素数を定義

	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列
	int iSwap = 0; // 値の入れ替えの際、片方の値を一時的に格納する変数

	int iRandArray[sizeArray] = {}; // 配列要素の入れ替え先を値としてもつ配列
	bool bCheck = false; // 値の重複の有無を判定する変数

	int iRand = 0; // 乱数を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列要素を表示するループ
	for (int i = 0; i < sizeArray; i++) {
		// 乱数を生成
		iArray[i] = rand() % 100;
		// 配列要素を順に表示
		cout << "a[" << i << "] = " << iArray[i] << endl;
	}

	// 配列を入れ替えた際に重複しないように、入れ替える要素を指示する配列を生成

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
				if (iRand == iRandArray[n]) {
					// 判定をfalseとする
					bCheck = false;
				}
			}
		} while (bCheck == false); //重複があればやり直し

		// 生成した値を要素として代入
		iRandArray[i] = iRand;
	}

	// 配列をシャッフルする
	for (int i = 0; i < sizeArray; i++) {
		// 配列の値を退避
		iSwap = iArray[i];
		// 入れ替え先の値を現在の要素に格納
		iArray[i] = iArray[iRandArray[i]];
		// 退避した値を入れ替え先に代入
		iArray[iRandArray[i]] = iSwap;
	}

	// 要素を並び替えたことをアナウンス
	cout << "要素の並びをシャッフルしました。" << endl;

	// シャッフル後の配列の値を出力
	for (int i = 0; i < sizeArray; i++) {
		// 配列の値を順に表示
		cout << "a[" << i << "] = " << iArray[i] << endl;
	}

	// 正常終了
	return 0;
}
