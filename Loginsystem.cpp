#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool isloggedin()
{ string username, password, us, pw;
    cout<<"Enter username: "; cin>>username;
    cout<<"Enter password: "; cin>>password;
     ifstream read("c:\\"+username+".txt");
     getline(read, us);
     getline(read,pw);

     if(us==username && pw==password)
     {
         return true;

     }
     else
     return false;
}
int main(){
    int choice;
    cout<<"1.Register \n 2 Login \nYour Choice:"; cin>>choice;
    if(choice==1)
    {
        string username ,password;
        cout<<"select a username :";cin>>username;
        cout<<"select a password:";cin>>password;

        ofstream file;
        file.open("c:\\"+username +".txt");
        file<<username<<endl<<password;
        file.close();
        main();
    }
    else if (choice==2)
    {
        bool status=isloggedin();
        if(!status)
        {
            cout<<"False Login!"<<endl;
            system("PAUSE");
            return 0;


        }
        else{
            cout<<"Successfully logged in!"<<endl;
            system("PAUSE");
            return 1;

        }
    }
    }

