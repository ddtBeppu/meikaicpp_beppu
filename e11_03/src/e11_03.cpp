//============================================================================
// Name        : e11_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習11-3
//               演習11-1(p.389)で作成した時刻クラスに挿入子と抽出子を追加せよ。
//============================================================================

#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	// コンストラクタを呼び出して値を初期化
	Time thisTime;

	// 時刻を設定する
	cout << "時刻を設定してください。" << endl;
	// キーボードから値を入力してメンバ変数を設定
	cin >> thisTime;

	// 時刻を表示
	thisTime.call_time();

	// 挿入子を用いて時刻の表示を行う
	cout << "時刻は" << thisTime << "です。" << endl;

	// 正常終了
	return 0;
}
