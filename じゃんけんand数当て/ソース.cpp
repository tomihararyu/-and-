#include <iostream>

using namespace std;

void oruncho() {
    int player = 0;
    int enemi = 0;
    const char* hand[] = { "�O�[", "�`���L", "�p�[" };
    cout << "����񂯂�Q�[�����J�n���܂�" << endl;
    srand(time(NULL)); 

    for (;;) {
        enemi = rand() % 3;
        cout << "�M���̎��I��ł��������B";
#if 1 
        cout << "�w�f�o�b�N�p�x ����̎�" << hand[enemi] << endl;
#endif      
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << "= �w" << hand[i] << "�x ";
        }
        cout << endl;
        cin >> player;

        if (1 <= player && player <= 3) {
            if (player == enemi) {
                cout << "�M���̎� " << hand[player - 1] << " ����̎� " << hand[enemi] << endl;
                cout << "���ʂ́w�������x�ł�" << endl;
            }
            else if (player < enemi || (player == 3 && enemi == 0)) {
                cout << "�M���̎� " << hand[player - 1] << " ����̎� " << hand[enemi] << endl;
                cout << "���ʂ́w�����x�ł�" << endl;
            }
            else {
                cout << "�M���̎� " << hand[player - 1] << " ����̎� " << hand[enemi] << endl;
                cout << "���ʂ́w�����x�ł�" << endl;
            }
        }
        else {
            cout << "1����3�̐�������͂��Ă��������B" << endl;
        }
        int a;
        for (;;)
        {
            cout << "\n���̂܂܂���񂯂�����܂����H�@1=�p���@2�I��" << endl;

            cin >> a;
            if (a == 1)
            {
                break;
            }
            else if (a == 2)
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
