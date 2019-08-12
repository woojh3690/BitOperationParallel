#include <iostream>
#include <bitset>
#include <time.h>
using namespace std;

int main(void)
{
	clock_t start, end;
	double result;
	unsigned int a = 100;
	unsigned int b = 30;

	/*cout << "a : " << bitset<8>(a) << endl;
	cout << "b : " << bitset<8>(b) << endl;
	cout << "c : " << bitset<8>(c) << endl;*/

	unsigned int c;
	start = clock();
	for (int i = 0; i < 256000; i++)
	{
		for (int j = 0; j < 256000; j++)
		{
			c = a + b;
		}
	}
	result = clock() - start;
	cout << "기존 걸린 시간 : " << result << endl;

	unsigned int z;
	start = clock();
	for (int i = 0; i < 256000; i++)
	{
		for (int j = 0; j < 85330; j++)
		{
			z = ((a << 9 | a) << 9 | a) + ((b << 9 | b) << 9 | b);
			z >> 18;
			z << 14 >> 23;
			z << 23 >> 23;
		}
	}

	result = clock() - start;
	cout << "기존 걸린 시간 : " << result << endl;

	

	system("pause");
	return 0; // 프로그램 끝
}

void two()
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
}
