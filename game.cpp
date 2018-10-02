#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


int Random()
{
	srand((unsigned int)time(NULL));
	return rand() % 3 + 1;
}


int main()
{
	int user, computer;
	while (1)
	{
		user = Random();
		computer = Random();
		switch (user)
		{
			case 1:
			{
				if (computer == 2)
				{
					cout << "player : 가위 computer : 바위 컴퓨터 승" << endl;
					exit(0);
					
				}
				else if (computer == 3)
				{
					cout << "player : 가위 computer : 보 유저 승" << endl;
					exit(0);
				}
				else
				{
					cout << "player : 가위 computer : 가위 비김" << endl;
				}
			}
			case 2:
			{
				if (computer == 1)
				{
					cout << "player : 바위 computer : 가위 유저 승" << endl;
					exit(0);
				}
				else if (computer == 3)
				{
					cout << "player : 바위 computer : 보 컴퓨터 승" << endl;
					exit(0);
				}
				else
				{
					cout << "player : 바위 computer : 바위 비김" << endl;
				}
			}
			case 3:
			{
				if (computer == 1)
				{
					cout << "player : 보 computer : 가위 컴퓨터 승" << endl;
					exit(0);
				}
				else if (computer == 2)
				{
					cout << "player : 보 computer : 바위 유저 승" << endl;
					exit(0);
				}
				else
				{
					cout << "player : 보 computer : 보 비김" << endl;
				}
			}

		}
	}

	system("pause");
	return 0; 
}
