//============================================================================
// Name        : e11_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-7
//               演習10-2(p.377)で作成した自動車クラスCarに、購入年月日を格納するデータメンバと、
//               その値を返却するメンバ関数を追加せよ。
//============================================================================

#include <iostream>
#include "Date.h"
#include "Car.h"

using namespace std;

int main() {
	// 車の情報を設定
	Car myCar("Dayz", 1475, 3395, 1620, 30, 17.8, Date(2017, 4, 3));

	// 車のスペックを表示
	myCar.print_spec();

	// 購入年月日を表示
	cout << "購入年月日は" << myCar.purchase_date() << "です。" << endl;

	// 正常終了
	return 0;
}
