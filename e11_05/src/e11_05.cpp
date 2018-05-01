//============================================================================
// Name        : e11_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-5
//               日付（年・月・日）を読み込んで、その曜日を求めて表示するプログラムを作成せよ。
//               クラスDate第3版を利用すること。
//============================================================================

#include <iostream>
#include "Date.h"

using namespace std;

int main() {
	string sWeek[7] = {"日", "月", "火", "水", "木", "金", "土"}; // 曜日を値として持つ配列

	// コンストラクタを呼び出してメンバ変数を初期化
	Date today;

	// 日付の入力を促す
	cout << "日付を入力してください。" << endl;
	// メンバ変数を更新
	cin >> today;

	// 日付、曜日を順に表示。
	cout << "今日は" << today << sWeek[today.day_of_week()] << "曜日です。" << endl;

	// 正常終了
	return 0;
}
