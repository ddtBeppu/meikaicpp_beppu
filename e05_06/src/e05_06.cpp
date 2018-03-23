//============================================================================
// Name        : e05_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-6
//               要素型がint型で要素数が15の配列の全要素に0 ~ 10の乱数を代入して、棒グラフで値を表示する
//               プログラムを作成せよ。棒グラフは記号文字'*'を横方向に並べたものとする。
//============================================================================

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 15; // 配列の要素数を定義
	int iArray[sizeArray] = {}; // 要素数がsizeArrayの配列
	int iRand = 0; // 乱数を格納する変数

	// 乱数の種を生成
	srand(time(NULL));

	// 配列に乱数を代入するループ
	for (int i = 0; i < sizeArray; i++) {
		// 0 ~ 10の乱数を生成
		iRand = rand() % 11;
		// 乱数を配列に格納
		iArray[i] = iRand;
	}

	// 棒グラフを表示するループ
	for (int i = 0; i < sizeArray; i++) {
		// 配列に代入された値の数だけ繰り返す
		for (int n = 0; n < iArray[i]; n++) {
			// 棒グラフを構築
			cout << "*";
		}
		// 改行して、次の棒グラフを生成する
		cout << "\n";
	}

	// 整数値を返す
	return 0;
}
