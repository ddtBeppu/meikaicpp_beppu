/*
 * Car.cpp
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  演習11-7
 *   演習10-2(p.377)で作成した自動車クラスCarに、購入年月日を格納するデータメンバと、
 *   その値を返却するメンバ関数を追加せよ。
 */
#include <iostream>
#include "Car.h"

using namespace std;

// Carクラスのコンストラクタを定義
// Date型の引数を追加
Car::Car (std::string name, int width, int length, int height, double fuelLevel, double mpg, const Date& date) {
	// 車の名前
	iName = name;
	// 車幅
	iWidth = width;
	// 車長
	iLength = length;
	// 車高
	iHeight = height;
	// ガソリン量
	dFuelLevel = fuelLevel;
	// 燃費
	dMpg = mpg;

	// タンク容量を設定
	dTankVol = fuelLevel;

	/* -- 以下、0で初期化 -- */
	// x方向に進んだ距離
	dXp = 0.0;
	// y方向に進んだ距離
	dYp = 0.0;

	// 購入年月日を設定
	purchaseDate = date;
}

// x方向に進んだ距離の値を返す
double Car::x() {
	// 値を返却
	return dXp;
}
// y方向に進んだ距離の値を返す
double Car::y() {
	// 値を返却
	return dYp;
}
// 燃料の残量の値を返却する関数
double Car::fuel() {
	// 値を返却
	return dFuelLevel;
}

// 車のスペックを表示する関数
void Car::print_spec() {
	// 車の名前
	cout << "名前：" << iName << endl;
	// 車幅(mm)
	cout << "車幅：" << iWidth << "mm" << endl;
	// 車長(mm)
	cout << "車長：" << iLength << "mm" << endl;
	// 車高(mm)
	cout << "車高：" << iHeight << "mm" << endl;
	// 燃費
	cout << "燃費: " << dMpg << std::endl;
}

// 車の移動を表す関数
bool Car::move(double dx, double dy) {
	// 車の移動距離を計算
	double dDist = sqrt(dx * dx + dy * dy);
	// 返却値をfalse(移動不能)に設定
	bool bRet = false;

	// ガソリン量が十分にある
	if (dFuelLevel > dDist) {
		// 走る分だけ、ガソリン量を減算
		dFuelLevel -= dDist / dMpg;

		/*  移動距離を更新 */
		// x方向の移動
		dXp += dx;
		// y方向の移動
		dYp += dy;

		// まだ走れる状態
		bRet = true;
	}
	// 走行の可否を示す値を返却
	return bRet;
}

// 給油を表す関数
void Car::charge(double fuel) {
	// 給油量である引数の値を、ガソリン量に加算
	dFuelLevel += fuel;
	if (dFuelLevel > dTankVol) { // 満タンの場合
		// 満タンであると伝える
		std::cout << "満タンです。" << std::endl;
		// タンク容量と等しい値とする
		dFuelLevel = dTankVol;
	}
}

// 燃費の値を返却する関数
double Car::mpg() {
	// 値を返却
	return dMpg;
}

// 車の購入年月日の値を返却する関数
Date Car::purchase_date() {
	// 値を返却
	return purchaseDate;
}
