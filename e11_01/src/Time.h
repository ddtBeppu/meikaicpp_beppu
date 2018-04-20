/*
 * Time.h
 *
 *  Created on: Apr 20, 2018
 *      Author: naotobeppu
 */
// Description : 演習11-1
//               時・分・秒のデータメンバで構成される時刻クラスを作成せよ。コンストラクタやメンバ関数については、
//               自由に設計すること。
#include <iostream>
#include <iomanip>

class Time {
	int iHour; // 時
	int iMinute; // 分
	int iSecond; // 秒
public:
	// コンストラクタの定義
	Time(int hour, int min, int sec) {
		/* パラメータの初期化 */
		// 時
		iHour = hour;
		// 分
		iMinute = min;
		// 秒
		iSecond = sec;
	}

	// 時刻の表示を行う関数
	void call_time() {
		// 桁数を揃えるため、１桁の場合には先頭に0をつける
		std::cout << std::setfill('0');

		// 時刻表示
		// それぞれ2桁ずつで表示
		std::cout << "時刻は"
				<< std::setw(2) << iHour << "時"
				<< std::setw(2) << iMinute << "分"
				<< std::setw(2) << iSecond << "秒です。"
				<< std::endl;
	}
};
