#include <iostream>

// 배열을 복사하는 함수
int* Duplicate(int array[], int count)
{
	int* pNew = new int[count];

	for (int i = 0; i < count; i++)
	{
		pNew[i] = array[i];
	}

	return pNew;
}
// 여기서 delete 하면 안된다!!!
// 돌려줘야 하는데 delete 시키면 안된다

int main()
{
	int numbers[5]{ 1, 2, 3, 4, 5 };
	int* pArray{};

	pArray = Duplicate(numbers, 5);

	delete[] pArray;
}

// Duplicate의 Ot, Os는?
// Ot = n -> 8 ~ 11번 줄이 핵심
// Os = n -> 6번 줄이 핵심

// 어떤 줄이 알고리즘의 성능에 핵심 혹은 연관이 되는지
// 아는 것이 제일 중요하다!