//============================================================================
// Name        : e03_20.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-20
// List3-14は左下側が直角の直角三角形を表示するプログラムであった。
// 直角が左上側、右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ。

#include <iostream>
using namespace std;

void top_left(int length); // 直角が左上側の直角三角形を表示する関数
void top_right(int length); // 直角が右上側の直角三角形を表示する関数
void bottom_right(int length); // 直角が右下側の直角三角形を表示する関数

const string blank = " "; // 1文字分のスペース

int main() {
	int i_pos = 0; // 直角の位置を表す整数値を格納する変数
	string shape[3] = {"左上", "右上", "右下"}; // 直角の位置を表す文字列を格納した配列

	int i_length = 0; // 段数を表す整数値を格納する変数
	string retry = "No"; // 続行の是非を示す変数

	bool first_q = true; // 直角の位置を尋ねるのが初めてならtrue。
	                     //それ以外falseとして使用する。

	do { // 続行の指示がある間繰り返すループ
		if (retry != "No"){ // retryがNoでない。すなわち２回目。
			// 処理が継続することを伝える
			cout << "--続行!!!--" << endl;
		}

		do { // 直角の位置が正しく入力されるまで繰り返すループ
			if (first_q == false) { // falseすなわち2回目以降
				// テキストを出力
				cout << "もう一度聞きます。";
			}

			// 直角の位置を尋ねる
			cout << "直角の位置は？ 左上側: 0、右上側: 1、右下側: 2  : ";
			// キーボードから直角の位置を判定する値を入力
			cin >> i_pos;
			// 1回目の質問が終了したため、falseを代入。
			first_q = false;
		} while (i_pos < 0 || i_pos > 2); // 入力値が0,1,2のどれでも無ければ繰り返し

		// 三角形の形状をアナウンス
		cout << shape[i_pos] << "直角の三角形を表示します。\n";
		// 三角形の段数を尋ねる
		cout << "段数は：";
		// キーボードから段数を入力
		cin >> i_length;

		switch (i_pos) { // 直角の位置に従い、以下の関数を使い分ける
		case 0: // 0が入力された時
			top_left(i_length); // 直角が左上側の直角三角形を表示
			break; // 処理終了
		case 1: // 1が入力された時
			top_right(i_length); // 直角が右上側の直角三角形を表示
			break; // 処理終了
		case 2: // 2が入力された時
			bottom_right(i_length); // 直角が右下側の直角三角形を表示
			break; // 処理終了
		}

		// 続行するか否かを尋ねる
		cout << "Retry?  Y/N: ";
		// キーボードから値を入力
		cin >> retry;
	} while (retry == "Y" || retry == "y"); // 続行するとした場合、繰り返し

	// ループを抜けたので、終了と伝える
	cout << "--終了!--" << endl;

	// 整数値を返す
	return 0;
}

// 直角が左上側の直角三角形を表示する関数
void top_left(int length) {
	for (int cols = 0; cols < length; cols++) {
		// 図形を縦方向に描画
		for (int rows = 0; rows < length-cols; rows++) {
			// 直角三角形のため。行の数だけ繰り返し
			// 記号を出力して、図形を形成
			cout << "*";
		}
		// 改行
		cout << "\n";
	}
}

// 直角が右上側の直角三角形を表示する関数
void top_right(int length) {
	for (int cols = 0; cols < length; cols++) {
		// 図形を縦方向に描画
		for (int rows = 0; rows < length; rows++) {
			// 直角三角形のため。行の数だけ繰り返し
			if (cols - rows > 0) { // 図形の下に行くにつれ、幅が小さくなる
				// スペースを出力
				cout << blank;
			} else {
				// 記号を出力して、図形を形成
				cout << "*";
			}
		}
		// 改行
		cout << "\n";
	}
}

// 直角が右下側の直角三角形を表示する関数
void bottom_right(int length) {
	for (int cols = 1; cols <= length; cols++) {
		// 図形を縦方向に描画
		for (int rows = 0; rows < length; rows++) {
			// 直角三角形のため。行の数だけ繰り返し
			if ((length - cols) - rows > 0) { // 図形の下に行くにつれ、幅を大きくしていく
				// スペースを出力
				cout << blank;
			} else {
				// 記号を出力して、図形を形成
				cout << "*";
			}
		}
		// 改行
		cout << "\n";
	}
}
