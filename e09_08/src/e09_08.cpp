//============================================================================
// Name        : e09_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習9-8
//               前問を、名前空間メンバの宣言と定義を分離したプログラムとして作成せよ。
//============================================================================

#include <iostream>
using namespace std;

// 英語で表示を行う名前空間メンバの宣言
namespace English {
	extern int iX; // xの値を定義
	// xの値を表示する関数
	void print_x();
	// 挨拶を表示する関数
	void hello();
}

// 日本語で表示を行う名前空間メンバの宣言
namespace Japanese {
	extern int iX; // xの値を定義
	// xの値を表示する関数
	void print_x();
	// 挨拶を表示する関数
	void hello();

	// 大阪弁で表示を行う名前空間メンバの宣言
	namespace Osaka {
		// xの値を表示する関数
		void print_x();
		// 挨拶を表示する関数
		void hello();
	}
}

int main() {
	// xの値を表示
	cout << "English::iX = " << English::iX << endl;
	// xの値を表示する関数により、値を表示
	English::print_x();
	// 挨拶を表示
	English::hello();

	// xの値を表示
	cout << "Japanese::iX = " << Japanese::iX << endl;
	// xの値を表示する関数により、値を表示
	Japanese::print_x();
	// 挨拶を表示
	Japanese::hello();

	//大阪弁で、xの値をお知らせ
	Japanese::Osaka::print_x();
	// 大阪弁で挨拶
	Japanese::Osaka::hello();

	// 正常終了
	return 0;
}

/** 英語の名前空間メンバの定義 */
int English::iX = 1; // xの値を定義
// xの値を表示する関数
void English::print_x() {
	// xの値を表示
	cout << "The value of x is " << iX << "." << endl;
}
// 挨拶を表示する関数
void English::hello() {
	// 挨拶の表示
	cout << "Hello!" << endl;
}

/** 日本語の名前空間メンバの定義 */
int Japanese::iX = 2; // xの値を定義
// xの値を表示する関数
void Japanese::print_x() {
	// xの値を表示
	cout << "変数xの値は" << iX << "です。" << endl;
}
// 挨拶を表示する関数
void Japanese::hello() {
	// 挨拶を表示
	cout << "こんにちは。" << endl;
}

/** 大阪弁の名前空間メンバの定義 */
// xの値を表示する関数
void Japanese::Osaka::print_x() {
	// xの値を表示
	cout << "変数xの値は" << iX << "でっせ。" << endl;
}
// 挨拶を表示する関数
void Japanese::Osaka::hello() {
	// 挨拶を表示
	cout << "もうかってまっか？" << endl;
}
