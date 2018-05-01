/*
 * Car.h
 *
 *  Created on: Apr 19, 2018
 *      Author: naotobeppu
 *
 *  演習11-7
 *   演習10-2(p.377)で作成した自動車クラスCarに、購入年月日を格納するデータメンバと、
 *   その値を返却するメンバ関数を追加せよ。
 */

#include <cmath>
#include <string>
#include <iostream>

#include "Date.h"

class Car {
	std::string iName; // 車の名前
	int iWidth; // 車幅
	int iLength; // 車長
	int iHeight; // 車高

	double dXp; // x方向の移動距離
	double dYp; // y方向の移動距離
	double dFuelLevel; // ガソリン量
	double dTankVol; // タンク容量

	double dMpg; // 燃費

	Date purchaseDate; // 購入年月日
public:
	// Carクラスのコンストラクタを定義
	Car(std::string name, // 車の名前
			int width, // 車幅
			int length, // 車長
			int height, // 車高
			double fuelLevel, // ガソリン量
			double mpg, // 燃費
			const Date& date // 購入年月日
			);

	// x方向に進んだ距離の値を返す
	double x();
	// y方向に進んだ距離の値を返す
	double y();
	// 燃料の残量の値を返却する関数
	double fuel();

	// 車のスペックを表示する関数
	void print_spec();

	// 車の移動を表す関数
	bool move(double dx, double dy);

	// 給油を表す関数
	void charge(double fuel);

	// 燃費の値を返却する関数
	double mpg();

	// 車の購入年月日の値を返却する関数
	Date purchase_date();
};
