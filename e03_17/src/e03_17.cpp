//============================================================================
// Name        : e03_17.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-17
// 季節を求めるList3-1(p.87)のプログラムにおいて、
// 1~12以外の値が入力された場合は再入力させるように変更したプログラムを作成せよ。

#include <iostream>
using namespace std;

int main() {
	string retry = ""; // 処理の続行/中断を判定する変数
	do { // 以下、実行
		int month = 0; // 月を表す変数

		do { // 以下、実行
			// 月の入力を促す
			cout << "季節を求めます。\n何月ですか：";
			// キーボードから値を読み込む
			cin >> month;

			if (month >= 3 && month <= 5) { // 3~5月
				// 季節が春であると出力
				cout << "それは春です。" << endl;
			} else if (month >= 6 && month <= 8) { // 6~8月
				// 季節が夏であると出力
				cout << "それは夏です。" << endl;
			} else if (month >= 9 && month <= 11) { // 9~11月
				// 季節が秋であると出力
				cout << "それは秋です。" << endl;
			} else if (month == 12 || month == 1 || month == 2) {
				// 12~2月
				// 季節が冬であると出力
				cout << "それは冬です。" << endl;
			}
		} while(month < 1 || month > 12); // 入力値が1~12以外の場合、do以下の処理に戻る

		// 継続/中断の判断を求める
		cout << "もう一度？ Y...Yes/N...No";
		// 継続/中断を決定する値を入力
		cin >> retry;
	} while (retry == "Y" || retry == "y"); // キーボードからの入力値がY or yの場合、do以下の処理を続行

	// 整数値を返す
	return 0;
}
