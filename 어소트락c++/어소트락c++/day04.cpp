#include<iostream>

using namespace std;

int main() {
	//숙제 1. 구구단을 2단~9단까지 출력하는 중첩 for문
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j;
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;

	/*
	2단 3단 4단
	5단 6단 7단
	8단 9단 10단
	*/
	for (int i = 2; i < 11; i += 3) {
		for (int j = 1; j <= 9; ++j) {
			cout << i << "*" << j << "=" << i * j << "\t";
			cout << i + 1 << "*" << j << "=" << (i + 1) * j << "\t";
			cout << i + 2 << "*" << j << "=" << (i + 2) * j << endl;
		}
		cout << endl;
	}
	cout << endl;

	/*숙제2. 2.별을 아래의 형태로 출력되게 한다.
		*
		**
		***
		****
		*****
	*/
	for (int i = 1; i <= 5; i++) { //줄 번호: i, 5줄
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	//답안
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	/*숙제3.별을 아래의 형태로 출력되게 한다.
		*****
		****
		***
		**
		*
	*/
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j > i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	//답안
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5 - i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	/*숙제3.별을 아래의 형태로 출력되게 한다.
		  *
		 ***
		*****
	   *******
	*/
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j > i; j--) {
			cout << " ";
			for (int k = 1; k <= i; k += 2) {
				cout << "*";
			}

		}
		cout << endl;
	}
	cout << endl;

	/*답안
		  *
		 ***
		*****
	   *******
	   공백: 3, 2, 1, 0	 별: 1, 3, 5, 7
	*/
	for (int i = 0; i < 4; ++i) { //라인수(4줄)
		//공백을 출력하기 위한 for문
		for (int j = 0; j < 3 - i; ++j) {
			cout << " ";
		}
		// *을 출력하기 위한 for문
		for (int j = 0; j < i * 2 + 1; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	/*
		  *
		 ***
		*****
	   *******
	    *****
		 ***
		  * 
	   공백: 3, 2, 1, 0	 별: 1, 3, 5, 7
	*/

	
	return 0;
}