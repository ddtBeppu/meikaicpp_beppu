/*
 * Car.h
 *
 *  Created on: Apr 19, 2018
 *      Author: naotobeppu
 */
// Description : 演習10-2
//               自動車クラスCarにデータメンバやメンバ関数を自由に追加せよ。（ナンバーを表すデータメンバを追加する、
//               燃費を表すデータメンバを追加する、移動による燃費残量の計算に燃費を反映させる、タンク容量を表す
//               データメンバを追加する、給油のためのメンバ関数を追加する etc...）。

#include <cmath>
#include <string>
#include <iostream>

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
public:
	// Carクラスのコンストラクタを定義
	Car (std::string name, int width, int length, int height, double fuelLevel, double mpg) {
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
	}

	// x方向に進んだ距離の値を返す
	double x() {
		// 値を返却
		return dXp;
	}
	double y() {
		// 値を返却
		return dYp;
	}
	double fuel() {
		// 値を返却
		return dFuelLevel;
	}

	// 車のスペックを表示する関数
	void print_spec() {
		// 車の名前
		std::cout << "名前：" << iName << std::endl;
		// 車幅(mm)
		std::cout << "車幅：" << iWidth << "mm" << std::endl;
		// 車長(mm)
		std::cout << "車長：" << iLength << "mm" << std::endl;
		// 車高(mm)
		std::cout << "車高：" << iHeight << "mm" << std::endl;
		// 燃費
		std::cout << "燃費: " << dMpg << std::endl;
	}

	// 車の移動を表す関数
	bool move(double dx, double dy) {
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
	void charge(double fuel) {
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
	double mpg() {
		// 値を返却
		return dMpg;
	}
};
