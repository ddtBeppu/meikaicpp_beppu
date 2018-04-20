//============================================================================
// Name        : e11_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-1
//               時・分・秒のデータメンバで構成される時刻クラスを作成せよ。コンストラクタやメンバ関数については、
//               自由に設計すること。
//============================================================================

#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	int iHour = 0; // 時の値を格納する変数
	int iMinute = 0; // 分の値を格納する変数
	int iSecond = 0; // 秒の値を格納する変数

	// 時刻を設定する
	cout << "時刻を設定してください。" << endl;
	// 時を尋ねる
	cout << "何時？: ";
	// キーボードから読み込み
	cin >> iHour;

	// 分を尋ねる
	cout << "何分？: ";
	// キーボードから読み込み
	cin >> iMinute;

	// 秒を尋ねる
	cout << "何秒？: ";
	// キーボードから読み込み
	cin >> iSecond;

	// コンストラクタを呼び出し、メンバの値を初期化
	Time thisTime(iHour, iMinute, iSecond);

	// 時刻を表示
	thisTime.call_time();

	// 正常終了
	return 0;
}
