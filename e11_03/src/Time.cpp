/*
 * Time.cpp
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  Description : 演習11-3
 *  				  演習11-1(p.389)で作成した時刻クラスに挿入子と抽出子を追加せよ。
 */

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Time.h"

using namespace std;

const int mMax = 60; // 分の最大値を定義
const int sMax = 60; // 秒の最大値を定義

// 時刻の初期値を設定
Time::Time() {
	this->iHour = 0; // 時を0で初期化
	this->iMinute = 0; // 分を0で初期化
	this->iSecond = 0; // 秒を0で初期化
}

// コンストラクタの定義
Time::Time(int hour, int min, int sec) {
	int mCount = 0; // 秒数が60を超えた回数だけ分を繰り上げ
	int sCount = 0; // 分数が60を超えた回数だけ時を繰り上げ

	/* パラメータの初期化 */
	while (sec >= sMax) { // 秒数が60以上の場合
		// 秒数から60を引く
		sec -= sMax;
		// 分数を繰り上げる
		sCount++;
	}
	// 秒数を更新
	this->iSecond = sec;

	// 分を繰り上げ
	min += sCount;
	while (min >= mMax) { // 分が60以上の場合
		// 分数から60を引く
		min -= mMax;
		// 時を繰り上げる
		mCount++;
	}
	// 分数を更新
	this->iMinute = min;
	// 時を繰り上げて更新
	this->iHour = hour + mCount;
}

// 時刻の表示を行う関数
void Time::call_time() {
	// 桁数を揃えるため、１桁の場合には先頭に0をつける
	cout << setfill('0');

	// 時刻表示
	// それぞれ2桁ずつで表示
	cout << "時刻は"
		<< iHour << "時"
		<< iMinute << "分"
		<< iSecond << "秒です。" << endl;
}

// 入力値と文字を連結し、文字列として返却する関数
string Time::to_string() const {
	// 返却する文字列のストリーム。
	ostringstream s;
	// 返却する文字を連結して文字列を構成する
	s << iHour << "時" << iMinute << "分" << iSecond << "秒";

	// 文字列の値を返却
	return s.str();
}

// 日付の入力を行うための抽出子
istream& operator>>(std::istream& s, Time& x) {
	int inputHour = 0; // 入力される時の値
	int inputMinute = 0; // 入力される分の値
	int inputSecond = 0; // 入力される秒の値

	// 時が負の値を取らないようにする
	do {
		// 時間を尋ねる
		cout << "何時？: ";
		// キーボードから値を読み込み
		s >> inputHour;
	} while (inputHour < 0); // 入力値が0以下の場合、入力をやり直す

	// 分が負の値を取らないようにする
	do {
		// 分を尋ねる
		cout << "何分？: ";
		// キーボードから値を読み込み
		s >> inputMinute;
	} while (inputMinute < 0); // 入力値が0以下の場合、入力をやり直す

	// 秒が負の値を取らないようにする
	do {
		// 秒を尋ねる
		cout << "何秒？: ";
		// キーボードから値を読み込み
		s >> inputSecond;
	} while (inputSecond < 0); // 入力値が0以下の場合、入力をやり直す

	// 値をメンバに設定
	x = Time(inputHour, inputMinute, inputSecond);

	// 関数の終了
	return s;
}

// 日付の出力を行うための挿入子
ostream& operator<<(std::ostream& s, const Time& x) {
	// 出力値を文字列として返却
	return s << x.to_string();
}

