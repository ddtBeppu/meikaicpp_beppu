//============================================================================
// Name        : e06_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-7
//               引数mで指定された月の季節を表示する関数print_seasonを作成せよ。mが3, 4, 5であれば「春」、
//               6, 7, 8であれば「夏」、9, 10 ,11であれば「秋」、12, 1, 2であれば「冬」と表示し、それ以外の
//               値であれば何も表示しないこと。
//============================================================================

#include <iostream>
using namespace std;

void print_season(int iMonth); // 引数の値に応じて、季節を表示する関数

int main() {
	int iInput = 0; // 入力値を格納する変数

	// 月を入力するよう促す
	cout << "月を入力してください。: ";
	// キーボードから値を読み込む
	cin >> iInput;

	// 入力した値に応じて、季節を表示
	print_season(iInput);

	// 正常終了
	return 0;
}

// 引数の値に応じて、季節を表示する関数
void print_season(int iMonth) {
	switch (iMonth) { // 入力された月に応じて、季節を表示
	case 3: // 3月
	case 4: // 4月
	case 5: // 5月
		// テキストの出力
		cout << "春";
		// switch文を抜ける
		break;
	case 6: // 6月
	case 7: // 7月
	case 8: // 8月
		// テキストの出力
		cout << "夏";
		// switch文を抜ける
		break;
	case 9: // 9月
	case 10: // 10月
	case 11: // 11月
		// テキストの出力
		cout << "秋";
		// switch文を抜ける
		break;
	case 12: // 12月
	case 1: // 1月
	case 2: // 2月
		// テキストの出力
		cout << "冬";
		// switch文を抜ける
		break;
	default:
		// 強制的に関数を抜ける
		return;
	}
	// テキストの表示
	cout << "です。" << endl;
}
