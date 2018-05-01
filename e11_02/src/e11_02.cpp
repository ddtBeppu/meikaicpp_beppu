//============================================================================
// Name        : e11_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-2
//               クラスDate第２版に抽出子を追加せよ。
//============================================================================

#include <iostream>
#include "Date.h"

using namespace std;

int main() {
	// コンストラクタを呼び出し、値を初期化する
	Date today;

	cout << "年月日を入力してください。" << endl;
	// 多重定義した抽出子により、値の設定が行われる
	cin >> today;

	// 多重定義した挿入子により、文字列に値を設定し、表示する
	cout << "今日は" << today << "です。" << endl;
	// 設定した日付の前日の日付を表示する
	cout << "昨日は" << today.preceding_day() << "です。" << endl;

	// 正常終了
	return 0;
}
