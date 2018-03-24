//============================================================================
// Name        : e05_11.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習5-11
//               ６人の２科目（国語・数学）の点数を読み込んで、科目ごとの合計点と平均点、
//               学生ごとの合計点と平均点を求めるプログラムを作成せよ。
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int iStudents = 6; // 学生の人数
	const int iSubjects = 2; // 教科の数

	string sSubjects[iSubjects] = {"国語", "数学"}; // 科目名出力用の配列

	int iScores[iStudents][iSubjects] = {0}; // 生徒・科目ごとの点数

	int iSumSubjects[iSubjects] = {0}; // 科目ごとの合計点
	double dAveSubjects[iSubjects] = {0.0}; // 科目ごとの平均点

	int iSumPersonal[iStudents] = {0}; // 学生ごとの合計点
	double dAvePersonal[iStudents] = {0.0}; //

	// 平均値をdouble型とするため、小数点以下の表示を可能にする
	cout << fixed << setprecision(1);

	// 生徒の人数分の値を入力し、合計値、平均値を計算する。
	// 生徒一人当たり、2教科の値を入力していく。
	for (int i = 0; i < iStudents; i++) {
		// 何番目の生徒であるかを表示する
		cout << "生徒" << i + 1 << ": ";

		// 生徒一人あたりの、教科ごとの点数を入力
		for (int j = 0; j < iSubjects; j++) {
			// 入力する教科名を表示
			cout << sSubjects[j] << endl;

			do { // 点数は0点~ 100点の間であるためそれ以外の値が入力されてもやり直しを行うようにする。
				// 点数の入力を開始するように指示
				cout << "点数を入力してください。" << endl;
				// キーボードから入力。教科ごとの点数となる。
				cin >> iScores[i][j];
			} while (iScores[i][j] < 0 || iScores[i][j] > 100); // 継続条件に該当すれば、再び点数の入力を求める

			// 教科ごとに点数を加算していく
			iSumSubjects[j] += iScores[i][j];
			// 生徒ごとに点数を加算していく
			iSumPersonal[i] += iScores[i][j];
		}
		// 国語の合計点を生徒数でわり、国語の平均点を求める
		dAveSubjects[0] = iSumSubjects[0] / iStudents;
		// 数学の合計点を生徒数でわり、数学の平均点を求める
		dAveSubjects[1] = iSumSubjects[1] / iStudents;

		// 生徒ごとの平均点なので、2教科の平均をとる
		dAvePersonal[i] = iSumPersonal[i] / iSubjects;

		// 次の生徒に処理を移す
		cout << "\n";
	}

	// 教科ごとの合計点、平均点を表示する
	for (int i = 0; i < iSubjects; i++) {
		// 教科名を表示する
		cout << sSubjects[i] << endl;
		// 合計点
		cout << " 合計: " << iSumSubjects[i] << endl;
		// 平均点
		cout << " 平均: " << dAveSubjects[i] << endl;
		// 次の教科の表示との間を1行開ける
		cout << "\n";
	}

	// 生徒ごとの合計値、平均値を計算
	for (int i = 0; i < iStudents; i++) {
		// 何番目の生徒かを表示する
		cout << "生徒" << i + 1 << endl;
		// 合計点
		cout << " 合計: " << iSumPersonal[i] << endl;
		// 平均点
		cout << " 平均: " << dAvePersonal[i] << endl;
	}

	// 正常終了
	return 0;
}
