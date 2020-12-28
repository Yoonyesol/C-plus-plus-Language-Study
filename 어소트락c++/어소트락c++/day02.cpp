#include <iostream>

using namespace std;

int main() {

	// 상수: 변하지 않는 수, 값을 한 번 지정하면 바꿀 수 없다
	// 상수는 선언과 동시에 값을 지정해두어야 한다.
	const int iAttack = 0x00000001;		//1(이진수)
	const int iArmor = 0x00000002;		//10
	const int iHP = 0x00000004;			//100
	const int iMP = 0x00000008;			//1000
	const int iCritical = 0x00000010;	//10000

	// 001 | 100 = 00101 | 10000 = 10101
	int iBuf = iAttack | iHP | iCritical;

	//연산자 축약형: 연산자를 줄여서 사용할 수 있다
	//아래를 풀어서 쓰면 iBuf = iBuf ^ iHP;
	//10101  ^ 00100 = 10001, HP가 사라짐
	iBuf ^= iHP;

	//10001 ^ 00100 = 10101, HP가 다시 생김
	iBuf ^= iHP;
	//XOR로 껐다 켰다 하는 스위치 기능을 만들어 낼 수 있다


	//각 비트들이 현재 켜져있는지 꺼져 있는지 확인 가능
	// 10101 & 00001 = 1 -> Attack이 있다(위 iBuf에 Attack 존재)
	cout << "Attack: " << (iBuf & iAttack) << endl;
	// 10101 & 00010 = 0 -> Armor가 없다(위 iBuf에 Attack 존재x)
	cout << "Armor: " << (iBuf & iArmor) << endl;
	cout << "HP: " << (iBuf & iHP) << endl;
	cout << "MP: " << (iBuf & iMP) << endl;
	cout << "Critical: " << (iBuf & iCritical) << endl;

	/*
	쉬프트 연산자: <<, >> 값 대 값을 연산하여 값으로 나오게 된다.
	이 연산자 또한 이진수 단위의 연산을 하게 된다.
	일반적인 연산보다 속도가 빠르다. 2의 n승 연산시 최적화 가능
	20 << 2 = 1010000(2) = 80(10) -> 20 * 2의 2승
	20 << 3 = 10100000(2) = 160(10) -> 20 * 2의 3승
	20 << 4 = 101000000(2) = 320(10) -> 20 * 2의 4승

	20 >> 2 = 101(2) = 5(10) ->20 * 1/(2의 2승) => 나눗셈
	20 >> 3 = 10(2) = 2(10) ->20 * 1/(2의 3승)
	
	*/

	int iHight = 187;
	int iLow = 13560;

	int iNumber = iHight;

	//iNumber에는 187이 들어가 있다. 이 값을 <- 이 방향으로 16비트 이동시키면
	//상위 16비트에 값이 들어가게 된다.
	iNumber <<= 16;

	//하위 16비트를 채운다.
	iNumber |= iLow;

	//High 값을 출력한다.
	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	//증감연산자 : ++, --
	iNumber = 10;

	//전치
	++iNumber;

	//후치
	iNumber++;

	cout << ++iNumber << endl;	//13
	cout << iNumber++ << endl;	//13, 출력 먼저 해놓고 증가시키기
	cout << iNumber << endl;	//14

	return 0;
}