#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{

	const unsigned int leftMask = 0xffff0000;
	const unsigned int rightMask = 0x0000ffff;
	cout << "        leftMask비트 : " << bitset<32>(rightMask) << endl;
	cout << "        rightMask비트: " << bitset<32>(leftMask) << endl;

	unsigned short a = 100;
	unsigned short b = 60;
	cout << "    a = 100 비트로는 : " << bitset<16>(a) << endl;
	cout << "     b = 60 비트로는 : " << bitset<16>(b) << endl;

	unsigned short c = 120;
	unsigned short d = 70;
	cout << "    c = 120 비트로는 : " << bitset<16>(c) << endl;
	cout << "     d = 70 비트로는 : " << bitset<16>(d) << endl;

	unsigned int y = (((unsigned int)a) << 16) | c;
	unsigned int z = (((unsigned int)b) << 16) | d;
	cout << "a.append(c) = y 비트 : " << bitset<32>(y) << endl;
	cout << "b.append(d) = z 비트 : " << bitset<32>(z) << endl;

	unsigned int result = y + z;
	cout << " y + z = result 비트 : " << bitset<32>(result) << endl;

	unsigned short left = (result & leftMask) >> 16;
	unsigned short right = result & rightMask;
	cout << "   result의 left비트 : " << bitset<16>(left) << endl;
	cout << "  result의 right비트 : " << bitset<16>(right) << endl;


	cout << "a + b = " << left << endl;
	cout << "c + d = " << right << endl;
	system("pause");

	return 0; // 프로그램 끝
}
