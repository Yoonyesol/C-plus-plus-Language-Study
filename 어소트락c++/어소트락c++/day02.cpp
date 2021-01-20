#include <iostream>
#include <time.h>

using namespace std;

int main() {

	// ���: ������ �ʴ� ��, ���� �� �� �����ϸ� �ٲ� �� ����
	// ����� ����� ���ÿ� ���� �����صξ�� �Ѵ�.
	const int iAttack = 0x00000001;		//1(������)
	const int iArmor = 0x00000002;		//10
	const int iHP = 0x00000004;			//100
	const int iMP = 0x00000008;			//1000
	const int iCritical = 0x00000010;	//10000

	// 001 | 100 = 00101 | 10000 = 10101
	int iBuf = iAttack | iHP | iCritical;

	//������ �����: �����ڸ� �ٿ��� ����� �� �ִ�
	//�Ʒ��� Ǯ� ���� iBuf = iBuf ^ iHP;
	//10101  ^ 00100 = 10001, HP�� �����
	iBuf ^= iHP;

	//10001 ^ 00100 = 10101, HP�� �ٽ� ����
	iBuf ^= iHP;
	//XOR�� ���� �״� �ϴ� ����ġ ����� ����� �� �� �ִ�


	//�� ��Ʈ���� ���� �����ִ��� ���� �ִ��� Ȯ�� ����
	// 10101 & 00001 = 1 -> Attack�� �ִ�(�� iBuf�� Attack ����)
	cout << "Attack: " << (iBuf & iAttack) << endl;
	// 10101 & 00010 = 0 -> Armor�� ����(�� iBuf�� Attack ����x)
	cout << "Armor: " << (iBuf & iArmor) << endl;
	cout << "HP: " << (iBuf & iHP) << endl;
	cout << "MP: " << (iBuf & iMP) << endl;
	cout << "Critical: " << (iBuf & iCritical) << endl;

	/*
	����Ʈ ������: <<, >> �� �� ���� �����Ͽ� ������ ������ �ȴ�.
	�� ������ ���� ������ ������ ������ �ϰ� �ȴ�.
	�Ϲ����� ���꺸�� �ӵ��� ������. 2�� n�� ����� ����ȭ ����
	20 << 2 = 1010000(2) = 80(10) -> 20 * 2�� 2��
	20 << 3 = 10100000(2) = 160(10) -> 20 * 2�� 3��
	20 << 4 = 101000000(2) = 320(10) -> 20 * 2�� 4��

	20 >> 2 = 101(2) = 5(10) ->20 * 1/(2�� 2��) => ������
	20 >> 3 = 10(2) = 2(10) ->20 * 1/(2�� 3��)
	
	*/

	int iHight = 187;
	int iLow = 13560;

	int iNumber = iHight;

	//iNumber���� 187�� �� �ִ�. �� ���� <- �� �������� 16��Ʈ �̵���Ű��
	//���� 16��Ʈ�� ���� ���� �ȴ�.
	iNumber <<= 16;

	//���� 16��Ʈ�� ä���.
	iNumber |= iLow;

	//High ���� ����Ѵ�.
	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	//���������� : ++, --
	iNumber = 10;

	//��ġ
	++iNumber;

	//��ġ
	iNumber++;

	cout << ++iNumber << endl;	//13
	cout << iNumber++ << endl;	//13, ��� ���� �س��� ������Ű��
	cout << iNumber << endl;	//14

	/*
	�б⹮���� ũ�� 2���� ������ �ִ�. 
	if��: ������ üũ���ִ� ���.
	����: if(���ǽ�) {}(�ڵ��)
	if���� ���ǽ��� true�� �� ��� �ڵ�� ���� �ڵ尡 ����.
	false�� ��쿡�� �������� ����. 
	*/
	if (true) {
		cout << "if�� ���ǽ��� true�Դϴ�." << endl;
	}

	//������ �ִ��� Ȯ��
	if ((iBuf & iAttack) != 0) {
		cout << "Attack ������ �ֽ��ϴ�." << endl;
	}

	//if�� �Ʒ��� �� �ڵ尡 1���� ��� {}(�ڵ��)�� ������ �� �ִ�.
	if ((iBuf & iArmor) != 0)
		cout << "iArmor ������ �ֽ��ϴ�." << endl;

	if ((iBuf & iHP) != 0) 
		cout << "HP ������ �ֽ��ϴ�." << endl;
	
	if ((iBuf & iMP) != 0) 
		cout << "iMP ������ �ֽ��ϴ�." << endl;
	
	if ((iBuf & iCritical) != 0) 
		cout << "iCritical ������ �ֽ��ϴ�." << endl;

	/*
	else: if���� �ݵ�� ���� ����ؾ� �Ѵ�.
	if�� ������ false�� ��� else�� �ִٸ� else ���� ���� �ڵ尡 ���۵ȴ�.
	
	else if : if���� �ݵ�� ���� ����ؾ� �Ѵ�.
	if�� �Ʒ� �;� �ϰ� else���ٴ� ���� �־�� �Ѵ�.
	else if�� �ڽ��� ���� �ִ� ���ǽ��� false�� ��� ���� else if�� ���ǽ��� üũ�Ѵ�.
	else if�� ��� ����� �����ϴ�.
	*/
	if (false)
		cout << "if�� ������ true�Դϴ�." << endl;
	else
		cout << "if�� ������ false�Դϴ�." << endl;

	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> iNumber;

	if (10 <= iNumber && iNumber <= 20)
		cout << "10 ~ 20 ������ �����Դϴ�." << endl;
	else if (21 <= iNumber && iNumber <= 30)
		cout << "21 ~ 30 ������ �����Դϴ�." << endl;
	else if (31 <= iNumber && iNumber <= 40)
		cout << "31 ~ 40 ������ �����Դϴ�." << endl;
	else
		cout << "�� ���� �����Դϴ�." << endl;

	//���� �߻�
	srand((unsigned int)time(0));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	//0 ~ 99���ϱ�. � ���� 100���� �������� �� ���� �� �ִ� ���� ������ 0~99��
	cout << (rand() % 100) << endl;  
	//100 ~ 200���ϱ�
	cout << (rand() % 101 + 100) << endl;
	//0 ~ 99.99����. �ۼ������� ���ϱ�. �Ҽ��� �� �ڸ����� ���� ����, rand�� 10000���������ۿ� �� ����->�Ҽ��� �� �ڸ� �̻� �Ұ�
	cout << (rand() % 10000 / 100.f) << endl;

	int iUpgrade = 0;
	cout << "Upgrade �⺻ ��ġ�� �Է��ϼ���: ";
	cin >> iUpgrade;

	//��ȭ Ȯ���� ���Ѵ�.
	float fPercent = rand() % 10000 / 100.f;

	//��ȭ Ȯ��: ���׷��̵尡 0 ~ 3 : 100% ���� 4 ~ 6 : 40% 7 ~ 9 : 10%
	//10 ~ 13 : 1% 14 ~ 15 : 0.01%
	cout << "Upgrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "��ȭ ����" << endl;

	else if (4 <= iUpgrade && iUpgrade <= 6) {
		if (fPercent < 40.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (4 <= iUpgrade && iUpgrade <= 9) {
		if (fPercent < 10.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (10 <= iUpgrade && iUpgrade <= 13) {
		if (fPercent < 1.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (14 <= iUpgrade && iUpgrade <= 15) {
		if (fPercent < 0.01f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	return 0;
}