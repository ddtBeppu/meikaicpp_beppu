//============================================================================
// Name        : e10_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習10-1
//               名前・身長・体重などを《人間クラス》を自由に定義せよ。
//============================================================================

#include <iostream>
#include "Human.h"

using namespace std;

int main() {
	// コンストラクタを呼び出して値を設定
	// Human(std::string name, double height, double weight)
	Human human1 = Human("田中太郎", 171.5, 60.5);

	// 名前
	cout << "名前は" << human1.name() << "です。" << endl;
	// 身長
	cout << "身長は" << human1.height() << "です。" << endl;
	// 体重
	cout << "体重は" << human1.weight() << "です。" << endl;

	// 正常終了
	return 0;
}
