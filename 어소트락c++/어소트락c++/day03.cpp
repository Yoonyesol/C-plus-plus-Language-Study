#include <iostream>
#include <time.h>

using namespace std;

/*
����ü: ���ӵ� ���ڿ� �̸��� �ο��ϴ� ���.
enum ����ü�� {}�� ���·� �����ȴ�.
����ü���� �̿��ؼ� ����ü Ÿ���� ���� ���� �����ϴ�.
��, ����ü ��ü�� ����� ���� ���� Ÿ���� �� �� �ִ�.
����ü�� ���ڿ� �̸��� �ٿ��ִ� ����̴�.
*/
enum NUM {
	NUM_0,  //�ƹ��͵� �ο����� ���� ��� 0���� 1�� ���ʴ�� ���� �ο��ȴ�.
	NUM_1,
	NUM_2,
	NUM_3,
	NUM_5 = 0x0010, //�߰��߰� ���� ���ϴ� ���� �ο��� �� �ִ�.
};

//NUM_4�� ���� 4�� �����Ѵ�.
#define NUM_4	4

enum SRP
{
	SRP_S = 1, 
	SRP_R,
	SRP_P,
	SRP_END
};

int main() {
	/*
	switch��: �б⹮�� �� ����. if���� ������ üũ�ϴ� �б⹮�̶��
	switch���� ���� ������ üũ�ϴ� �б⹮�̴�.
	����: switch(����) {} �� ���·� �����ȴ�. �ڵ�� �ȿ��� case break������
	����. case ���: �� ���·� ó���ǰ� �������� ���������� ���� case �ڿ� 
	���� ����� ���Ѵ�.
	*/

	int iNumber = 1;
	cout << "���ڸ� �Է��ϼ���: ";
	//cin >> iNumber;

	switch (iNumber)
	{
	case NUM_1: //iNumber���� ���������� ���� ����Ǵ� case������ �����ȴ�.
		cout << "�Է��� ���ڴ� 1�Դϴ�." << endl;
		break;  //break�� ������ switch���� ����������.
	case NUM_2:
		cout << "�Է��� ���ڴ� 2�Դϴ�." << endl;
		break;
		//break�� ���� ��� �Ʒ��� �ִ� case������ ��������ȴ�.
	case NUM_3:
		cout << "�Է��� ���ڴ� 3�Դϴ�." << endl;
		break;
	case NUM_4:
		cout << "�Է��� ���ڴ� 4�Դϴ�." << endl;
		break;
	default: //case�� �������� ���� ���ڰ� ���� ��� ����ȴ�.
		cout << "�� ���� �����Դϴ�." << endl;
		break;
	}

	//����ü Ÿ���� ���� ����. ����ü Ÿ�� ������ ������ 4byte�� �����Ѵ�.
	//����ü�� �̿��ؼ� ������ ������ ���� ǥ�� ������ ����ü�� ������ ����
	//�ȿ��� �����ؼ� ����Ѵ�.
	//NUM	eNum;
	//NUM	eNum = 10; -> �����߻�. �ʱ�ȭ ����. int�� NUM Ÿ������ ��ȯ�� �� ���ٴ� ����.
	NUM	eNum = (NUM)10; //���� Ÿ�� ĳ�������� �ϸ� �̷��� ���� �ο��� �� ����.
	

	//sizeof(Ÿ�� or ����)�� �ϸ� �ش� Ÿ�� Ȥ�� ������ �޸� ũ�⸦ �����ش�.
	cout << sizeof(NUM) << endl;
	//typeid(Ÿ�� or ����).name()�� �ϸ� typeid �ȿ� �� Ÿ�� Ȥ�� ���� Ÿ���� 
	//���ڿ��� ��ȯ���ش�.
	cout << typeid(eNum).name() << endl;
	cout << eNum << endl;

	/*
	�ݺ��� : Ư�� �۾��� �ݺ��ؼ� �������ִ� ���.
	���� : for, while, do while 3����
	while(���ǽ�) {} �� ���·� ����.
	while���� ���ǽ��� üũ�ؼ� true�� ��� �ڵ�� ���� �ڵ尡 ���۵ǰ� �ٽ�
	���ǽ��� üũ�Ѵ�. ���ǽ��� false�� �Ǹ� while���� ���������� �ȴ�.
	�ݺ��� �ȿ��� break�� ������ �ش� �ݺ����� �������´�.
	*/
	iNumber = 0; 
	while (iNumber < 10)
	{
		cout << iNumber << endl;
		++iNumber;

		if (iNumber == 4)
			break;
	}

	//cls��� ���� ��ɾ �ܼ�â�� �����ش�.
	system("cls");

	//���� ���̺� ����
	srand((unsigned int)time(0));

	int iPlayer, iAI;

	while (true) {
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "����" << endl;
		cout << "�޴��� �����ϼ���: " << endl;
		cin >> iPlayer;

		if (iPlayer < SRP_S || iPlayer > SRP_END) {
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			//�Ͻ�����
			system("pause");
			//continue: �ݺ����� ���������� �̵������ش�.
			continue;
		}

		else if (iPlayer == SRP_END)
			break;  //while�� Ż��

		//���� ������ �Ѵ�.
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI : ����" << endl;
			break;
		case SRP_R:
			cout << "AI : ����" << endl;
			break;
		case SRP_P:
			cout << "AI : ��" << endl;
			break;
		}

		int iWin = iPlayer - iAI;

		/*if (iWin == 1 || iWin == -2)
			cout << "Player �¸�" << endl;
		else if (iWin == 0)
			cout << "���" << endl;
		else
			cout << "AI �¸�" << endl;*/
		switch (iWin)
		{
		case 1:
		case -2:
			cout << "Player �¸�" << endl;
			break;
		case 0:
			cout << "���" << endl;
			break;
		default:
			cout << "AI �¸�" << endl;
			break;
		}

		system("pause");
	}

	return 0;
}