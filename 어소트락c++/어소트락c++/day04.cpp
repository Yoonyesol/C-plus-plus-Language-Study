#include<iostream>

using namespace std;

int main() {
	//���� 1. �������� 2��~9�ܱ��� ����ϴ� ��ø for��
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j;
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;

	/*
	2�� 3�� 4��
	5�� 6�� 7��
	8�� 9�� 10��
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

	/*����2. 2.���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
		*
		**
		***
		****
		*****
	*/
	for (int i = 1; i <= 5; i++) { //�� ��ȣ: i, 5��
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	//���
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	/*����3.���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
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

	//���
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5 - i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	/*����3.���� �Ʒ��� ���·� ��µǰ� �Ѵ�.
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

	/*���
		  *
		 ***
		*****
	   *******
	   ����: 3, 2, 1, 0	 ��: 1, 3, 5, 7
	*/
	for (int i = 0; i < 4; ++i) { //���μ�(4��)
		//������ ����ϱ� ���� for��
		for (int j = 0; j < 3 - i; ++j) {
			cout << " ";
		}
		// *�� ����ϱ� ���� for��
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
	   ����: 3, 2, 1, 0	 ��: 1, 3, 5, 7
	*/

	
	return 0;
}