#include <iostream>

using namespace std;

void oruncho() {
    int player = 0;
    int enemi = 0;
    const char* hand[] = { "グー", "チョキ", "パー" };
    cout << "じゃんけんゲームを開始します" << endl;
    srand(time(NULL)); 

    for (;;) {
        enemi = rand() % 3;
        cout << "貴方の手を選んでください。";
#if 1 
        cout << "『デバック用』 相手の手" << hand[enemi] << endl;
#endif      
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << "= 『" << hand[i] << "』 ";
        }
        cout << endl;
        cin >> player;

        if (1 <= player && player <= 3) {
            if (player == enemi) {
                cout << "貴方の手 " << hand[player - 1] << " 相手の手 " << hand[enemi] << endl;
                cout << "結果は『あいこ』です" << endl;
            }
            else if (player < enemi || (player == 3 && enemi == 0)) {
                cout << "貴方の手 " << hand[player - 1] << " 相手の手 " << hand[enemi] << endl;
                cout << "結果は『負け』です" << endl;
            }
            else {
                cout << "貴方の手 " << hand[player - 1] << " 相手の手 " << hand[enemi] << endl;
                cout << "結果は『勝ち』です" << endl;
            }
        }
        else {
            cout << "1から3の数字を入力してください。" << endl;
        }
        int a;
        for (;;)
        {
            cout << "\nこのままじゃんけんをしますか？　1=継続　2終了" << endl;

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
                cout << "範囲外もう一度入力してください。" << endl;
            }
        }
        if (a == 2)
        {
            break;
        }
    }
    

}
