//============================================================================
// Name        : e09_07.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
//               演習9-7
//               名前空間Japaneseの中に大阪弁を表す名前空間OsakaをList9-15(p.339)に追加したプログラムを作成せよ。
//               追加した名前空間の中に、「変数xの値は1でっせ。」と表示する関数print_xと、「もうかってまっか？」と表示する関数hello
//               を定義すること（変数xは定義しない）。
//============================================================================

#include <iostream>
using namespace std;

// 英語で表示を行う名前空間
namespace English {
	int iX = 1; // xの値を定義

	// xの値を表示する関数
	void print_x() {
		// xの値を表示
		cout << "The value of x is " << iX << "." << endl;
	}
	// 挨拶を表示する関数
	void hello() {
		// 挨拶の表示
		cout << "Hello!" << endl;
	}
}

// 日本語で表示を行う名前空間
namespace Japanese {
	int iX = 2; // xの値を定義

	// xの値を表示する関数
	void print_x() {
		// xの値を表示
		cout << "変数xの値は" << iX << "です。" << endl;
	}
	// 挨拶を表示する関数
	void hello() {
		// 挨拶を表示
		cout << "こんにちは。" << endl;
	}

	// 大阪弁で表示を行う名前空間
	namespace Osaka {
		// xの値を表示する関数
		void print_x() {
			// xの値を表示
			cout << "変数xの値は" << iX << "でっせ。" << endl;
		}
		// 挨拶を表示する関数
		void hello() {
			// 挨拶を表示
			cout << "もうかってまっか？" << endl;
		}
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
