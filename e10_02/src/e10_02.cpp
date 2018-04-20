//============================================================================
// Name        : e10_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習10-2
//               自動車クラスCarにデータメンバやメンバ関数を自由に追加せよ。（ナンバーを表すデータメンバを追加する、
//               燃費を表すデータメンバを追加する、移動による燃費残量の計算に燃費を反映させる、タンク容量を表す
//               データメンバを追加する、給油のためのメンバ関数を追加する etc...）。
//============================================================================

#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	string sName = ""; // 車の名前の文字列を格納する変数
	int iWidth = 0; // 車幅の値を格納する変数
	int iLength = 0; // 車長の値を格納する変数
	int iHeight = 0; // 車高の値を格納する変数
	double dGas = 0.0; // ガソリン量の値を格納する変数
	double dMpg = 0.0; // 燃費の値を格納する変数

	int iMove = 0; // 移動するかの意思を表す変数
	double dDx = 0.0; // x方向の移動距離の値を格納する変数
	double dDy = 0.0; // y方向の移動距離の値を格納する変数
	int iDoCharge = 0; // 給油するかの意志を表す変数
	double dFuelCharge = 0.0; // 給油量の値を格納する変数
/*
	// 車のデータを入力し、コンストラクタに渡す
	cout << "車のデータを入力せよ。" << endl;
	// 名前
	cout << "名前は: ";
	// キーボードから読み込み
	cin >> sName;

	// 車幅
	cout << "車幅は: ";
	// キーボードから読み込み
	cin >> iWidth;

	// 車長
	cout << "車長は: ";
	// キーボードから読み込み
	cin >> iLength;

	// 車高
	cout << "車高は: ";
	// キーボードから読み込み
	cin >> iHeight;

	// ガソリン量
	cout << "ガソリン量は: ";
	// キーボードから読み込み
	cin >> dGas;

	// 燃費
	cout << "燃費は: ";
	cin >> dMpg

	// コンストラクタを呼び出し
	Car myCar(sName, iWidth, iLength, iHeight, dGas, dMpg);*/
	Car myCar("Dayz", 1475, 3395, 1620, 30, 17.8);

	// 車のスペックを出力
	myCar.print_spec();

	// 車の移動を表すブロック
	while (true) {
		/* パラメータを初期化する */
		iMove = 0; // 移動するかどうか
		dDx = 0.0; // x方向の移動距離
		dDy = 0.0; // y方向の移動距離
		iDoCharge = 0; // 給油するかどうか
		dFuelCharge = 0.0; // 給油量

		// 現在地の出力
		cout << "現在地(" << myCar.x() << ", " << myCar.y() << ")" << endl;
		// 残り燃料
		cout << "残り燃料: " << myCar.fuel() << endl;

		do {
			// 移動をするか否かを問う
			cout << "移動[0...No / 1...Yes]: ";
			// 意思表示を行う
			cin >> iMove;
		} while (iMove != 0 && iMove != 1);

		if (iMove == 0) { // 移動しない
			// 終了
			break;
		}
		// x方向の移動距離を入力
		cout << "X方向の移動距離: ";
		// キーボードから読みこみ
		cin >> dDx;

		cout << "Y方向の移動距離: ";
		// キーボードから読みこみ
		cin >> dDy;

		if (!myCar.move(dDx, dDy)) {
			cout << "燃料が足りません!" << endl;
			// 給油するかどうか
			cout << "給油しますか。[0...No / 1...Yes]: ";
			// 給油の意思表示
			cin >> iDoCharge;

			if (iDoCharge == 1) { // 給油する
				// 給油量を決める
				cout << "給油量: ";
				// 値を入力
				cin >> dFuelCharge;
				// ガソリンの残量を更新
				myCar.charge(dFuelCharge);
			}
		}
	}

	// 正常終了
	return 0;
}
