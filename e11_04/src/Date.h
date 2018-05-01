/*
 * Date.h
 *
 *  Created on: Apr 21, 2018
 *      Author: naotobeppu
 */
// Description : 演習11-2
//               クラスDate第２版に抽出子を追加せよ。

#include <string>
#include <iostream>

// クラスDateの定義
class Date {
	// 年月日の値をそれぞれ設定
	int iYear; // 年
	int iMonth; // 月
	int iDay; //日
public:
	// デフォルトコンストラクタ
	Date();
	// 初期値を任意で設定するためのコンストラクタ
	Date(int year, int month = 1, int day = 1);

	// クラスの外から年の値を参照する関数
	int year() const {
		// 値を返却
		return iYear;
	}
	// クラスの外から月の値を参照する関数
	int month() const {
		// 値を返却
		return iMonth;
	}
	// クラスの外から日の値を参照する関数
	int day() const {
		// 値を返却
		return iDay;
	}

	// 前日の日付の値を返却する関数
	Date preceding_day() const;
	// 日付の値と文字を連結し、文字列として返却する関数
	std::string to_string() const;
};
// 日付の入力を行うための抽出子
std::istream& operator>>(std::istream& s, Date& x);
// 日付の出力を行うための挿入子
std::ostream& operator<<(std::ostream& s, const Date& x);
