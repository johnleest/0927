#include <iostream>
#include <windows.h> //windows ������� include

using namespace std;

//����������
char Input(); //������� �Է��� �޴´�. input  
void Process(char Key); //��������� ������Ʈ�� ��ġ�Ѵ�. process
void Render(); //�׸��� �׸���.(����������� ���� ��´�.) render

//�����ڰ� �����ϴ� ���μ���
void CustomProcess(char Key);
//�����ڰ� �����ϴ� ����
void CustomRender();

bool bGameState = true;

int Gold = 0;

int main()
{
	
	//Game Engine
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
		
	}


	return 0;
}

char Input()
{
	char Key;
	cin >> Key;

	return Key;
}
void Process(char Key)
{
	cout << Key << endl;

	if (Key == 'Q' || Key == 'q')
	{
		bGameState = false;
	}
	CustomProcess(Key);

}
void Render()
{
	//�����̶� ���°��� ��� ���α׷����� ����ϸ� �ٷ� ��ŷ����.
	system("cls"); //�ܼ�â clear
	cout << "�׸���." << endl;
	
	CustomRender();
	

}
void CustomProcess(char Key)
{
	if (Key == 'g' || Key == 'G')
	{
		Gold++;
	}
}
void CustomRender()
{
	cout << "Gold : " << Gold << endl;
}