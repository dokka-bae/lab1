#include "RubiksCube.h"
/*****************************************************************//**
 * \file   main.cpp
 * \brief  Main ����, ������� ��������� ������� ����.
 * \author dokkabae
 * \date   September 2022
 *********************************************************************/
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    RubiksCube Cube;
    while (true)
    {
        while (true)
        {
            bool fail = true;
            int choice = 0;
            do //����� ������� �������� ����
            {
                cout << "������� ������ ��������� ������� - 1\n������� ������ � ����� - 2\n����� �� ��������� - 3 : ";
                cin >> choice;
                if (!cin.fail())
                {
                    if (choice < 4 && choice > 0)
                    {
                        fail = false;
                    }
                    else cout << "������������ ����." << endl;
                }
                else cout << "������������ ����." << endl;
                cin.clear();
                cin.ignore();
            } while (fail);
            switch (choice)
            {
            case 1: Cube.Initializate();Cube.CreateRandom(); break;
            case 2: Cube.CreateFromFile(); break;
            case 3: exit(0);
            }
            break;
        }
        while (true) //����� ��� ������
        {
            bool fail = true;
            int choice = 0;
            do
            {
                cout << "�������� ������ - 1\n������� ����� ������ - 2\n����� �� ��������� - 3 : ";
                cin >> choice;
                if (!cin.fail())
                {
                    if (choice > 0 && choice < 4)
                    {
                        fail = false;
                    }
                    else cout << "������������ ����." << endl;
                }
                else cout << "������������ ����." << endl;
                cin.clear();
                cin.ignore();
            } while (fail);
            switch (choice)
            {
            case 1: Cube.Print(); break;
            case 2: Cube.InputCommands(); break;
            case 3: exit(0);
            }
        }
    }
}