#include <iostream>

// �迭�� �����ϴ� �Լ�
int* Duplicate(int array[], int count)
{
	int* pNew = new int[count];

	for (int i = 0; i < count; i++)
	{
		pNew[i] = array[i];
	}

	return pNew;
}
// ���⼭ delete �ϸ� �ȵȴ�!!!
// ������� �ϴµ� delete ��Ű�� �ȵȴ�

int main()
{
	int numbers[5]{ 1, 2, 3, 4, 5 };
	int* pArray{};

	pArray = Duplicate(numbers, 5);

	delete[] pArray;
}

// Duplicate�� Ot, Os��?
// Ot = n -> 8 ~ 11�� ���� �ٽ�
// Os = n -> 6�� ���� �ٽ�

// � ���� �˰����� ���ɿ� �ٽ� Ȥ�� ������ �Ǵ���
// �ƴ� ���� ���� �߿��ϴ�!