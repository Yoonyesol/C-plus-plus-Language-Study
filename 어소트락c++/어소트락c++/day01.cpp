/*

#: 전처리기
include : 포함
#include: 헤더파일을 여기에 포함시키는 기능이다.

*/

#include <iostream>

using namespace std;

//실행 과정: 컴파일 -> 빌드 -> 실행
//컴파일: 번역작업
//ctrl + shift + B를 이용해서 컴파일 및 빌드 가능
//ctrl + f5 : 실행

//c++의 시작점은 main함수이다.main함수는 반드시 있어야 한다. 
int main() {

	//C++표준 기능의 대부분은 std라는 namespace 안에 존재하고 있다.
	//이름이 겹치는 것을 방지해 주기 위해서이다.
	std::cout << "Test Output" << std::endl;
	std::cout << "가나다라" << std::endl;
	
	cout << "std namespace사용" << endl;

	/*
	
	변수 : 변하는 수, 값이 바뀔 수 있다.
	용량의 최소단위 : 1BIT
	1byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1tbyte = 1024gbyte

	문자를 표현하는 방법: 아스키 코드 표를 가지고 있다.
	false : 0
	true : 0이 아닌 모든 수

	종류	|	용량	|	데이터	|	표현범위		|	unsigned		|
	char	|	1byte	|	문자	|	-128 ~ 127		|	0 ~ 255			|
	bool	|	1byte	|	참/거짓	|	trute / false	|	true / false	|
	short	|	2byte	|	정수	|	-32768 ~ 32767	|	0 ~ 65535		|
	int		|	4byte	|	정수	|	약 -22억 ~ 21억	|	0 ~ 약 43억		|
	float	|	4byte	|	실수	|
	double	|	8byte	|	실수	|
	
	*/
	int Number = 10;
	Number = 20;

	cout << Number << endl;

	//영문이나 숫자는 1byte를 차지한다. 하지만 한글이나 한문 등의 문자들은 2byte를
	//차지하기 때문에 char 변수 하나에 저장하기 힘들다.
	char cTest = 't';

	cout << cTest << endl;

	float fNumber = 3.14f;
	cout << fNumber << endl;

	/*
	논리 연산자: AND(&&), OR(||), NOT(!). 관계 연산자와 연계하여 많이 사용

	진수 : 2진수, 8진수, 10진수, 16진수
	2진수: 0 ~ 1
	8진수: 0 ~ 7
	10진수: 0 ~ 9
	16진수: 0 ~ 15 : 0 ~ 9 10 ~ 15 : a ~ f
	진수들은 서로 다른 진수로 변환 가능

	87을 2진수, 16진수로 변환해보자.
	
	1. 2진수 변환
	87 / 2 ....반복 => 1010111
	
	2. 16진수 변환(10진수를 바로 16진수로 변환하는 것보다 2진수로 변환한 후에
	16진수로 변환하는 것이 쉽다.)
	1010111을 오른쪽으로부터 4자리씩 끊어 계산한다. 16진수 1자리는 2진수 4자리이다.
	0101 0111
	8421 8421
	따라서 16진수 => 57

	비트단위 논리연산자: 2진수 단위의 연산을 한다. 값 대 값을 연산하여 값으로 나온다.
	종류: AND(&), OR(|), NOT(~), XOR(^)
	A B XOR
	0 0  0
	1 0  1
	0 1  1
	1 1  0

	87 & 53
	87: 1010111
	53: 11010

	2진수로 바꾼 후에 2진수 각 자리별로 논리연산 실행
		1010111
	  & 0011010
	  -----------
		  10101 => 21

	*/

	cout << "숫자를 입력하세요: ";
	cin >> Number;

	cout << "10 ~ 20 = " << (10 <= Number && Number <= 20) << endl;

	cout << "87 ~ 53 = " << (87 & 53) << endl;
	
	
	return 0;
}