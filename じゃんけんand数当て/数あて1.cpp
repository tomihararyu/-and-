#include <iostream>
using namespace std;

void cochon()
{
    for (;;) {
        int player[3] = { 0 };
        int enemi = 0;
        cout << "�����ăQ�[�����J�n���܂�" << endl;
        srand(time(NULL));
        enemi = rand() % 10;
        for (;;)
        {
            enemi = rand() % 10;
#if 1 
            cout << "�w�f�o�b�N�p�x ����̎�" << enemi << endl;
#endif  
            cout << "�M���̎��1�`10�ȓ���3�I��ł��������B";
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                cin >> player[i];
                if (1 <= player[i] && player[i] <= 10)
                {

                }
                else
                {
                    cout << "�͈͊O�̐����ł��B������x���͂��Ă��������B" << endl;
                    if (i == 0)
                    {

                    }
                    else
                    {
                        for (i; i < 0; i--)
                        {
                            cout << "�M���̑I��ł��鐔���́w" << player[i] << "�x";
                        }
                        cout << "�@�ł�" << endl;
                    }
                }

            }

            for (int i = 0; i < 3; player[i])
            {
                if (enemi == player[i])
                {
                    cout << "�G�̎�" << enemi << " �@�����̎�" << player[i] << "�M���̏���" << endl;
                }
                else
                {
                    cout << "�G�̎�" << enemi << " �@�����̎�" << player[i] << "�M���̔s�k" << endl;
                }
            }
            int a;
                for (;;)
                {
                    cout << "\n���̂܂ܐ����ăQ�[�������܂����H�@1=�p���@2�I��" << endl;
                   
                    cin >> a;
                    if (a == 1)
                    {
                        break;
                    }
                    else if(a==2)
                    {
                        break;
                    }
                    else
                    {
                        cout << "�͈͊O������x���͂��Ă��������B" << endl;
                    }
                }
                if (a == 2)
                {
                    break;
                }
        }
    }
    
}