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
	int diff = 0; // 表示する身長の増分
	double d_weight = 0; // 標準体重

	cout << "何cmから："; // 開始値の入力を促す
	cin >> i_height_min; // キーボードから値を読み込む

	cout << "何cmまで："; // 終了値の入力を促す
	cin >> i_height_max; // キーボードから値を読み込む

	cout << "何cmごと："; // 増分の入力を促す
	cin >> diff; // キーボードから値を読み込む

	for (int height = i_height_min; // 開始値を変数height(出力値)に代入
			height <= i_height_max; // 変数heightが終了値と等しくなるまで
			height += diff /* 変数heightに増分を足し合わせていく*/) {
		// 標準体重を算出
		d_weight = (height - 100) * 0.9;

		// 身長と標準体重を横に並べて表示する
		cout << "身長" << "  " << "標準体重" << endl;
		// ラベルと位置が合うように表示する
		cout << height << "    " << d_weight << endl;
	}

	// 整数値を返す
	return 0;
}
