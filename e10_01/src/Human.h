/*
 * Human.h
 *
 *  Created on: Apr 19, 2018
 *      Author: naotobeppu
 */

// Description : 演習10-1
//               名前・身長・体重などを《人間クラス》を自由に定義せよ。

#include <string>
#include <iostream>

class Human {
private:
	std::string sName; // 名前
	double dHeight; // 身長
	double dWeight; // 体重

public:
	// コンストラクタに値を設定
	Human(std::string name, double height, double weight) {
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
};
