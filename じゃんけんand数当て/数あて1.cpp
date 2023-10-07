#include <iostream>
using namespace std;

void cochon()
{
    for (;;) {
        int player[3] = { 0 };
        int enemi = 0;
        cout << "数当てゲームを開始します" << endl;
        srand(time(NULL));
        enemi = rand() % 10;
        for (;;)
        {
            enemi = rand() % 10;
#if 1 
            cout << "『デバック用』 相手の手" << enemi << endl;
#endif  
            cout << "貴方の手を1～10以内で3つ選んでください。";
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                cin >> player[i];
                if (1 <= player[i] && player[i] <= 10)
                {

                }
                else
                {
                    cout << "範囲外の数字です。もう一度入力してください。" << endl;
                    if (i == 0)
                    {

                    }
                    else
                    {
                        for (i; i < 0; i--)
                        {
                            cout << "貴方の選んでいる数字は『" << player[i] << "』";
                        }
                        cout << "　です" << endl;
                    }
                }

            }

            for (int i = 0; i < 3; player[i])
            {
                if (enemi == player[i])
                {
                    cout << "敵の手" << enemi << " 　自分の手" << player[i] << "貴方の勝利" << endl;
                }
                else
                {
                    cout << "敵の手" << enemi << " 　自分の手" << player[i] << "貴方の敗北" << endl;
                }
            }
            int a;
                for (;;)
                {
                    cout << "\nこのまま数当てゲームをしますか？　1=継続　2終了" << endl;
                   
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
                        cout << "範囲外もう一度入力してください。" << endl;
                    }
                }
                if (a == 2)
                {
                    break;
                }
        }
    }
    
}