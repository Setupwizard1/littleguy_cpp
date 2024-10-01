#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int i=0;
    while(true){
        while(i<=3){
            cout << " 0" << endl;
            cout<<"/"<<"|"<<"\\"<<endl;
            cout<<"/"<<" \\"<< endl;
            Sleep(400);
            system("cls");
            cout <<"\\" << " 0" << endl;
            cout<<" "<<"|"<<"\\"<<endl;
            cout<<" /"<<"\\"<< endl;
            Sleep(400);
            system("cls");
            i++;
        }
        i=0;
        while(i<=4){
            cout << "_" << " 0" << "_"<< endl;
            cout << " " << "|" <<endl;
            cout << "/" << " \\" << endl;
            Sleep(150);
            system("cls");
            cout <<"_" << "0 " << "_" << endl;
            cout <<" "<< "|" <<endl;
            cout <<"/"<< " \\" << endl;
            Sleep(150);
            system("cls");
            i++;
        }
        i=0;
        while(i<=4){
            cout << "|" << "0" << "|" << endl;
            cout << " " << "|" << endl;
            cout << "/" << "|" << endl;
            Sleep(300);
            system("cls");
            cout << " " << "|" << "0" << "|"<< endl;
            cout << " " << "_" << "|" << "_" <<endl;
            cout << endl;
            Sleep(100);
            system("cls");
            cout << "  " << "|" << "0" << "|"<< endl;
            cout << "  " << " " <<"|" <<endl;
            cout << "  " << " |" << "\\" << endl;
            Sleep(300);
            system("cls");
            cout << " " << "|" << "0" << "|"<< endl;
            cout << " " << "_"<< "|" << "_" <<endl;
            cout << endl;
            Sleep(100);
            system("cls");
            i++;
        }
        i=0;
    }
}
