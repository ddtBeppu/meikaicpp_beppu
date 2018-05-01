/*
 * Human.h
 *
 *  Created on: Apr 19, 2018
 *      Author: naotobeppu
 *  演習11-6
 *   演習10-1(p.377)で作成した人間クラスに誕生日を格納するデータメンバ、それを返却するメンバ関数を追加せよ。
 */

#include <string>
#include <iostream>

#include "Date.h"

class Human {
private:
	std::string sName; // 名前
	double dHeight; // 身長
	double dWeight; // 体重
	Date birthDay; // 誕生日を格納するデータメンバ

public:
	// コンストラクタに値を設定
	// コンストラクタ初期化子により、誕生日を設定
	Human(std::string name, double height, double weight) : birthDay(1993, 2, 14) {
		// 名前を設定
		sName = name;
		// 身長を設定
		dHeight = height;
		// 体重を設定
		dWeight = weight;
	}

	// 以下、privateの値に外部から参照するための関数
	// 名前を返却する関数
	std::string name() {
		// 名前の値を返却
		return sName;
	}
	// 身長を返却する関数
	double height() {
		// 身長の値を返却
		return dHeight;
	}
	// 体重を返却する関数
	double weight() {
		// 体重の値を返却
		return dWeight;
	}
	// 誕生日の値を返却する関数
	Date birth_day() const {
		// 値の返却
		return birthDay;
	}
};
