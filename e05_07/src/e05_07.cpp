//============================================================================
// Name        : e05_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-7
//               前問を置き換えて、縦方向の棒グラフによって値を表示するプログラムを作成せよ。
//               添字を10で割った剰余を最下段に表示すること。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int sizeArray = 15; // 配列の要素数を定義
	const int iMax = 10; // 生成する乱数の上限値

	int iArray[sizeArray] = {0}; // 要素数がsizeArrayの配列
	int iRand = 0; // 乱数を格納する変数

	int iHeight = iMax; // 棒グラフの高さを設定

	// 乱数の種を生成
	srand(time(NULL));

	// 配列に乱数を代入するループ
	for (int i = 0; i < sizeArray; i++) {
		// 0 ~ 10の乱数を生成
		iRand = rand() % 11;
		// 乱数を配列に格納
		iArray[i] = iRand;
	}

	// 縦方向の表示
	for (int i = 0; i < iMax; i++) {
		// 配列の大きさだけ繰り返し
		for (int j = 0; j < sizeArray; j++) {
			// 配列の値が、棒グラフの高さの最大値より小さい時
			if (iArray[j] < iHeight) {
				// 空白を表示
				cout << "  ";
			} else { // 棒グラフの高さの最大値と、配列の値が一致するとき
				// 記号を出力
				cout << " *";
			}
		}
		// 棒グラフの高さを1減らす。表示を下に移す
		iHeight--;
		// 改行し、次の段へ
		cout << "\n";
	}

	// 配列の大きさだけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 枠線を表示
		cout << "--";
	}

	// 改行し、最下段の表示
	cout << "\n";
	// 配列の大きさだけ繰り返し
	for (int i = 0; i < sizeArray; i++) {
		// 添字を10で割った剰余を表示
		cout << " " << i % 10;
	}

	// 整数値を返す
	return 0;
}
