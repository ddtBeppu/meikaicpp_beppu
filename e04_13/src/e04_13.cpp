//============================================================================
// Name        : e04_13.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-13
//               性別、季節、曜日などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。
//               => 月を入力し、対応する季節をテキストで出力するプログラム
//============================================================================

#include <iostream>
using namespace std;

// 季節を表す列挙体
enum season {
	Spring, // 春
	Summer, // 夏
	Autumn, // 秋
	Winter // 冬
};

// 月を表す列挙体
enum month {
	January = 1, // 1月
	February, // 2月
	March, // 3月
	April, // 4月
	May, // 5月
	June, // 6月
	July, // 7月
	August, // 8月
	September, // 9月
	October, // 10月
	Novenber, // 11月
	Decenber // 12月
};

// 季節を出力する関数
void callSeason(int numSeason);

int main() {
	// 月を表す入力値を格納する変数
	int iInput = 0;

	// 月を入力するよう促す
	cout << "季節を求めます。何月ですか。" << endl;
	// キーボードから入力
	cin >> iInput;

	// 入力値を月を表すmonth型にキャストして代入
	month thisMonth = static_cast<month> (iInput);

	// 月により、場合分け
	switch (thisMonth) {
		case March: // 3月
		case April: // 4月
		case May: // 5月
			// 季節を出力
			callSeason(Spring);
			// switch文を抜ける
			break;
		case June: // 6月
		case July: // 7月
		case August: // 8月
			// 季節を出力
			callSeason(Summer);
			// switch文を抜ける
			break;
		case September: // 9月
		case October: // 10月
		case Novenber: // 11月
			// 季節を出力
			callSeason(Autumn);
			// switch文を抜ける
			break;
		case Decenber: // 12月
		case January: // 1月
		case February: // 2月
			// 季節を出力
			callSeason(Winter);
			// switch文を抜ける
			break;
	}

	// 整数値を返す
	return 0;
}

// 季節を出力する関数
void callSeason(month numSeason) {
	// 入力された値に応じてコメント
	switch (numSeason) {
		case Spring: // 春
			// テキストの出力
			cout << "春です。" << endl;
			// switch文を抜ける
			break;
		case Summer: // 夏
			// テキストの出力
			cout << "夏です。" << endl;
			// switch文を抜ける
			break;
		case Autumn: // 秋
			// テキストの出力
			cout << "秋です。" << endl;
			// switch文を抜ける
			break;
		case Winter: // 冬
			// テキストの出力
			cout << "冬です。" << endl;
			// switch文を抜ける
			break;
	}
}
