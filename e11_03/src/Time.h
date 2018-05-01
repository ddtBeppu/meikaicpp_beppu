/*
 * Time.h
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  Description : 演習11-3
 *  				  演習11-1(p.389)で作成した時刻クラスに挿入子と抽出子を追加せよ。
 */

#include <string>
#include <iostream>

class Time {
	int iHour; // 時
	int iMinute; // 分
	int iSecond; // 秒
public:
	Time();
	// コンストラクタの定義
	Time(int hour, int min, int sec);
	void adjust_time(int hour, int min, int sec);
	// 時刻の表示を行う関数
	void call_time();
	// 入力値と文字を連結し、文字列として返却する関数
	std::string to_string() const;
};

// 時刻の入力を行うための抽出子
std::istream& operator>>(std::istream& s, Time& x);
// 時刻の出力を行うための挿入子
std::ostream& operator<<(std::ostream& s, const Time& x);
