//============================================================================
// Name        : e08_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-2
//               以下のように初期化された文字列sを空文字列にするコードを示せ。
//                    char s[] = "ABC";
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char cString[] = "ABC"; // 文字列を定義

	int i = 0; // whileループの繰り返し回数を初期化
	while (cString[i] != '\0') { // ナル文字が見つかる、文字列の最後まで処理を繰り返す
		// 要素にナル文字を代入
		cString[i] = '\0';
	}

	// 文字列が空文字列になっていることを確認。
	cout << "空文字列: " << cString << endl;
	// 文字列の大きさを出力し、文字列がナル文字で構成されていることを確認する。
	cout << "文字列の大きさ: " << sizeof(cString) << endl;

	//　正常終了
	return 0;
}
