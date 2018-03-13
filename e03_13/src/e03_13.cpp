//============================================================================
// Name        : e03_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-13
// 身長と標準体重の対応表を表示するプログラムを作成せよ。
// 表示する身長の範囲（開始値/終了値/増分）は、整数値として読み込むこと。
// ※標準体重は（身長 - 100）× 0.9によって求める。

#include <iostream>
using namespace std;

int main() {
	int i_height_min = 0; // 入力する身長の下限
	int i_height_max = 0; // 入力する身長の上限
	int i_diff = 0; // 表示する身長の増分

	int i_height = 0; // 身長（出力値）
	double d_weight = 0; // 標準体重

	do { // 以下、実行
		// 開始値の入力を促す
		cout << "何cmから：";
		// キーボードから値を読み込む
		cin >> i_height_min;
	} while (i_height_min <= 0); // 身長が0以下の間、入力に戻る

	do { // 以下、実行
		// 終了値の入力を促す
		cout << "何cmまで：";
		// キーボードから値を読み込む
		cin >> i_height_max;
	} while (i_height_max > 200); // 身長が200cmを超えた時を、入力に戻る

	do { // 以下、実行
		// 増分の入力を促す
		cout << "何cmごと：";
		// キーボードから値を読み込む
		cin >> i_diff;
	} while (i_diff > i_height_max - i_height_min); // 増分が終了値と開始値の差を上回った場合、入力に戻る

	for (i_height = i_height_min; // 開始値を変数i_height(出力値)に代入
			i_height <= i_height_max; // 変数i_heightが終了値と等しくなるまで
			i_height += i_diff /* 変数i_heightに増分を足し合わせていく*/) {
		// 標準体重を算出
		d_weight = (i_height - 100) * 0.9;

		// 身長と標準体重を横に並べて表示する
		cout << "身長" << "  " << "標準体重" << endl;
		// ラベルと位置が合うように表示する
		cout << i_height << "    " << d_weight << endl;
	}

	// 整数値を返す
	return 0;
}
