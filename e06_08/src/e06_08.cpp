//============================================================================
// Name        : e06_08.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-8
//               List6-8の関数put_starsを、その内部でList6-9の関数put_ncharを呼び出すことによって
//               表示を行うように書き換えたプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void put_stars(int iNStars, int iCurStep); // 文字'*'をiNstars個表示する関数
void put_nchar(int iNchar, char cMark); // // 文字をiNchar個連続表示する関数

int main() {
	int iSteps = 0; // 三角形の段数を格納する変数

	// 三角形の表示を行うプログラムであることをアナウンスする。
	cout << "右下直角の三角形を表示します。" << endl;
	// 段数の入力を促す
	cout << "段数は: ";
	// キーボードから読み込まれた値を読み込み
	cin >> iSteps;

	// 三角形の段数分、'*'あるいは' 'の表示を行う
	for (int i = 1; i <= iSteps; i++) {
		// '*'をi個表示する
		put_stars(iSteps, i);
		// 改行して、次の段に移る
		cout << "\n";
	}

	// 正常終了
	return 0;
}

// '*'をiNstars個表示する関数
void put_stars(int iNStars, int iCurStep) {
	// '*'以外の部分を' 'で埋める
	put_nchar(iNStars - iCurStep, ' ');
	// '*'をiCurStep個出力
	put_nchar(iCurStep, '*');
}

// 文字をiNchar個連続表示する関数
void put_nchar(int iNchar, char cMark) {
	// iNcharから1減算しながら、0になるまで繰り返す
	while (iNchar-- > 0) {
		// 文字を出力
		cout << cMark;
	}
}
