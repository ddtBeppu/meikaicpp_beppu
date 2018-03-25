//============================================================================
// Name        : e06_04.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-4
//               半径rの円の面積を求めて返却する関数circ_areaを作成せよ。円周率は3.14とする。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

double circ_area(double dRad); // 半径を引数とし、円の面積を求める関数

int main() {
	double dRadius = 0.0; // 円の半径を格納する変数

	// 半径の値の入力を促す
	cout << "半径rを入力してください。: ";
	// キーボードから半径の値を読み込み
	cin >> dRadius;

	// 小数点第二位まで表示する
	cout << fixed << setprecision(2) << endl;

	// 円の面積を表示する
	cout << "円の面積は" << circ_area(dRadius) << "です。" << endl;

	// 正常終了
	return 0;
}

// 半径を引数とし、円の面積を求める関数
double circ_area(double dRad) {
	double dArea = 0.0; // 円の面積を格納する変数
	const double dRatioCirc = 3.14; // 円周率

	// 円の面積を求める
	dArea = dRad * dRad * dRatioCirc;

	// 円の面積の値を返却する
	return dArea;
}
