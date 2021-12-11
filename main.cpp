#include <iostream>
#include <cstdlib>
using namespace std;

void tampilan()
{
    cout<<" ---------------------------- "<<endl;
    cout<<"|        PERMAINAN DADU      |"<<endl;
    cout<<"|----------------------------|"<<endl;
    cout<<"| 1. Mulai Permainan         |"<<endl;
    cout<<"| 2. Keluar                  |"<<endl;
    cout<<" ---------------------------- "<<endl;
}



int main()
{
    int player,kom;
    int pilihan;
    char ulang;
    do{
        tampilan();
        cout<<"Pilih [1/2]: ";
        cin>>pilihan;
    system("cls");
        if(pilihan==1)
        {
            player=(rand()%6)+1;
            kom=(rand()%6)+1;

            cout<<" Permainan Di mulai "<<endl;
            cout<<"===================="<<endl;

            cout<<" Player  : "<<player<<endl;
            cout<<" Computer: "<<kom<<endl;
            if(player>kom)
            {
                cout<<" Player Menang "<<endl;
            }
            else if(player<kom)
            {
                cout<<" Player Kalah "<<endl;
            }
            else
            {
                cout<<" Permainan Seri "<<endl;
            }
            cout<<" Apakah Anda Ingin Mengulang ? [y=ya||t=tidak] : ";
            cin>>ulang;
            system("cls");
        }
        else if(pilihan==2)
        {
            ulang='t';
            cout<<" Terima kasih "<<endl;
        }
        else
        {
            cout<<"=================================="<<endl;
            cout<<"!! Inputan salah , Coba ulangi !! "<<endl;
            cout<<"=================================="<<endl;
        }

    }

    while(ulang!='t');
    cout<<" Permainan Selesai "<<endl;


    return 0;
}
