//============================================================================
// Name        : e06_21.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-21
//               short型整数xの絶対値、int型整数xの絶対値、....を求める、多重定義された
//               関数群を作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>

using namespace std;

short int absolute(short int sX); // short int型整数の絶対値を求める関数
int absolute(int iX); // int型整数の絶対値を求める関数
long int absolute(long int lX); // long int型整数の絶対値を求める関数
float absolute(float fX); // float型の値の絶対値を求める関数
double absolute(double dX); // double型の値の絶対値を求める関数
long double absolute(long double ldX); // long double型の値の絶対値を求める関数

int main() {
	short int sX = 0; // short int型の値を格納する変数
	int iX = 0; // int型の値を格納する変数
	long int lX = 0; // long int型の値を格納する変数
	float fX = 0.0; // float型の値を格納する変数
	double dX = 0.0; // double型の値を格納する変数
	long double ldX = 0.0; // long double型の値を格納する変数

	// short int型整数の値の入力を促す
	cout << "short int型整数を入力してください。:";
	// キーボードから値を読み込み
	cin >> sX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << absolute(sX) << endl;

	// int型の値の入力を促す
	cout << "int型整数を入力してください。:";
	// キーボードから値を読み込み
	cin >> iX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << absolute(iX) << endl;

	// long int型の値の入力を促す
	cout << "long int型整数を入力してください。:";
	// キーボードから値を読み込み
	cin >> lX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << absolute(lX) << endl;

	// float型の値の入力を促す
	cout << "float型の値を入力してください。:";
	// キーボードから値を読み込み
	cin >> fX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << setprecision(30) << absolute(fX) << endl;

	// double型の値の入力を促す
	cout << "double型の値を入力してください。:";
	// キーボードから値を読み込み
	cin >> dX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << setprecision(30) << absolute(dX) << endl;

	// long double型の値の入力を促す
	cout << "long double型の値を入力してください。:";
	// キーボードから値を読み込み
	cin >> ldX;
	// 関数から返された絶対値を表示
	cout << "絶対値 = " << setprecision(30) << absolute(ldX) << endl;

	// 正常終了
	return 0;
}

// short int型整数の絶対値を求める関数
short int absolute(short int sX) {
	if (sX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		sX *= -1;
	}
	// 正の値として引数を返却
	return sX;
}

// int型整数の絶対値を求める関数
int absolute(int iX) {
	if (iX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		iX *= -1;
	}
	// 正の値として引数を返却
	return iX;
}

// long int型整数の絶対値を求める関数
long int absolute(long int lX) {
	if (lX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		lX *= -1.0;
	}
	// 正の値として引数を返却
	return lX;
}

// float型整数の絶対値を求める関数
float absolute(float fX) {
	if (fX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		fX *= -1;
	}
	// 正の値として引数を返却
	return fX;
}

// double型整数の絶対値を求める関数
double absolute(double dX) {
	if (dX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		dX *= -1;
	}
	// 正の値として引数を返却
	return dX;
}

// long double型整数の絶対値を求める関数
long double absolute(long double ldX) {
	if (ldX < 0) { // 引数が負の値であった場合
		// 正の値に直し、絶対値とする
		ldX *= -1;
	}
	// 正の値として引数を返却
	return ldX;
}
