/*
 * Date.cpp
 *
 *  Created on: Apr 21, 2018
 *      Author: naotobeppu
 */
// Description : 演習11-2
//               クラスDate第２版に抽出子を追加せよ。

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

Date::Date() {
	// 現在の時刻を取得
	time_t tCurrent = time(NULL);
	// 要素別の時刻に変換
	struct tm* local = localtime(&tCurrent);

	// tm_yearは1900からの増分で表されるため、1900を加算して西暦を表現する
	iYear = local->tm_year + 1900;
	// tm_monは0から11の値を取るため、1を加算して月を表現
	iMonth = local->tm_mon + 1;
	// 日付はそのまま出力して問題ない
	iDay = local->tm_mday;
}
// 任意で値を設定する
Date::Date(int iYear, int iMonth, int iDay) {
	// 入力値をメンバの値として設定
	this->iYear = iYear; // 年
	this->iMonth = iMonth; // 月
	this->iDay = iDay; // 日
}
// 前日の日付を設定する関数
Date Date::preceding_day() const {
	// 月ごとの最終日を設定
	int iDayMax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	// メンバの値を呼び出す
	Date temp = *this;

	// 設定された日付が月の始めで無ければ、同月内での減算が可能
	if (temp.iDay > 1) {
		// 減算して問題ない
		temp.iDay--;
	} else { // その月の1日の場合、前日は先月の最終日となるため、場合分け
		// 1月の場合、前月は、前年の12月となるため、場合分け
		if (--temp.iMonth < 1) {
			// 前年を設定
			temp.iYear--;
			// 月に12月を設定
			temp.iMonth = 12;
		}
		// 前月の最終日の日を設定
		temp.iDay = iDayMax[temp.iMonth - 1];
	}
	// 値を更新したクラスを返却
	return temp;
}
// 日付の値と文字を連結し、文字列として返却する関数
string Date::to_string() const {
	// 返却する文字列のストリーム。
	ostringstream s;
	// 返却する文字を連結して文字列を構成する
	s << iYear << "年" << iMonth << "月" << iDay << "日";
	// 文字列の値を返却
	return s.str();
}
// 日付の入力と値の設定を行うための抽出子
istream& operator>>(istream& s, Date& x) {
	int inputYear = 0; // 年の入力値
	int inputMonth = 0; // 月の入力値
	int inputDay = 0; // 日の入力値

	// 年の入力を促す
	cout << "年: ";
	// キーボードより値を読み込む
	s >> inputYear;

	cout << "月: ";
	// キーボードより値を読み込む
	s >> inputMonth;

	cout << "日: ";
	// キーボードより値を読み込む
	s >> inputDay;

	// 入力値をメンバの値として設定する
	x = Date(inputYear, inputMonth, inputDay);

	// 関数の終了
	return s;
}
// 日付の出力を行うための挿入子
ostream& operator<<(ostream& s, const Date& x) {
	// 出力値を文字列として返却
	return s << x.to_string();
}
