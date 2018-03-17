//============================================================================
// Name        : e04_09.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-9
//               三つの整数値を読み込んで、その合計と平均を表示するプログラムを作成せよ。
//               平均は実数値で表示すること。キャスト記法を用いるもの、関数的記法を用いるもの、
//               static_cast演算子を用いるものを作成すること。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int numInput = 3; // 入力する整数値の数を表す

	int iInputA = 0; // 入力値1つ目
	int iInputB = 0; // 入力値2つ目
	int iInputC = 0; // 入力値3つ目

	int iSum = 0; // 合計値を格納する変数
	double dMean = 0.0; // 平均値を格納する変数

	// 演算に用いる値の数をアナウンスする
	cout << numInput << "つの整数値を用いて演算を行います。" << endl;

	// 1つ目の値の入力を促す
	cout << "1つ目の整数値 : ";
	// キーボードから値を読み込む
	cin >> iInputA;

	// 2つ目の値の入力を促す
	cout << "2つ目の整数値 : ";
	// キーボードから値を読み込む
	cin >> iInputB;

	// 最後の値の入力を促す
	cout << numInput << "つ目の整数値 : ";
	// キーボードから値を読み込む
	cin >> iInputC;

	// 3つの整数値の合計を計算
	iSum = iInputA + iInputB + iInputC;
	// 合計値の表示
	cout << "合計値: " << iSum << endl;

	// 3つの整数値の平均を計算 : キャスト記法
	dMean = (double)iSum / numInput;
	// 平均値の表示
	cout << "平均値: " << dMean << endl;

	// 3つの整数値の平均を計算 : 関数的記法
	dMean = double(iSum) / numInput;
	// 平均値の表示
	cout << "平均値: " << dMean << endl;

	// 3つの整数値の平均を計算 : static_cast演算子
	dMean = static_cast<double>(iSum) / numInput;
	// 平均値の表示
	cout << "平均値: " << dMean << endl;

	// 整数値を返す
	return 0;
}
