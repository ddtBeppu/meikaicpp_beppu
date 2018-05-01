//============================================================================
// Name        : e11_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-6
//               演習10-1(p.377)で作成した人間クラスに誕生日を格納するデータメンバ、
//               それを返却するメンバ関数を追加せよ。
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
	// 誕生日
	cout << "誕生日は" << human1.birth_day() << "です。" << endl;

	// 正常終了
	return 0;
}
