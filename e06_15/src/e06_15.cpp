//============================================================================
// Name        : e06_15.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-15
//               時刻x時y分のdy分後の時刻を求める関数spendを作成せよ。なお時刻の表現は24時間制であるものとする。
//               例えば、23時59分の2分後は0時1分となる。
//============================================================================

#include <iostream>
using namespace std;

void spend(int& iHour, int& iMinute, int& iPassed); // 指定した時間経過した後の時刻を求める関数

int main() {
	int iHour = 0; // 時間(時)を格納する変数
	int iMinute = 0; // 時間(分)を格納する変数
	int iPassed = 0; // 経過した時間(分)

	// 時刻の入力を促す
	cout << "時刻を入力してください。" << endl;

	// 24時間制の時間を入力する部分
	do {
		// 時間(時)を尋ねる
		cout << "?時: ";
		// キーボードから値を読み込み
		cin >> iHour;
	} while (iHour < 0 || iHour > 23); // 時間として以上な値が入力された時、やり直し

	//
	do {
		// 時間(分)の入力を促す
		cout<< "?分: ";
		// キーボードから値を読み込み
		cin >> iMinute;
	} while (iMinute < 0 || iMinute > 59); // 時間として以上な値が入力された時、やり直し

	// 経過時間の入力を求める
	cout << "何分後の時刻を求めますか。" << endl;
	// 時間(分)としての値の入力を促す
	cout << "?分後: ";
	// キーボードから値を読み込み
	cin >> iPassed;

	// 経過時間を加算した後の時刻を計算
	spend(iHour, iMinute, iPassed);

	// 計算後の時刻を表示
	cout << iPassed << "分後は" << iHour << "時" << iMinute << "分です。" << endl;

	// 正常終了
	return 0;
}

// 指定した時間経過した後の時刻を求める関数
void spend(int& iHour, int& iMinute, int& iPassed) {
	// 時間(分)の最大値
	const int iMLimit = 60;
	// 時間(時)の最大値
	const int iHLimit = 24;

	// 60分を何度オーバーしたかの値を格納する変数
	int iMOver = 0;

	// 時間(分)に経過時間を加算
	iMinute += iPassed;

	// 時間(分)が60分以上の場合
	if (iMinute >= iMLimit) {
		// 60分を何回オーバーしているかを算出
		iMOver = iMinute / iMLimit;
		// 余りが時間経過後の分となる
		iMinute = iMinute % iMLimit;
	}

	// 時間(時)に60分をオーバーした分だけ加算
	iHour += iMOver;
	// 時間(時)が23時を上回る場合
	if (iHour >= iHLimit) {
		// 24を引いた値が、時間経過後の時間(時)となる
		iHour -= iHLimit;
	}
}
