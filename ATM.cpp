#include<iostream>
#include<conio.h>

using namespace std;

void withraw(int cb)
{
    int wb;
    cout<<"Enter An Amount To Withraw:";
    cin>>wb;
    if(cb>=wb)
    {
        cb=cb-wb;
        cout<<"Transaction Succesful.";
    }
    else
    {
        cout<<"Insufficient Fund!!";
    }
}

void chebal(int cb)
{
    cout<<"Your Balance is "<<cb;
}

void mistat(int cb)
{
    cout<<"Your Account Balance is "<<cb;
}

void chpin(int pin)
{
    int opin,npin;
    cout<<"Enter Your Old Pin:";
    cin>>opin;

    cout<<"Enter A New Pin:";
    cin>>npin;

    cout<<"Pin Changed Succesfully";

}

int main()
{
    int pin=1234,cpin,cb=50000;

    cout<<"Enter your Pin:"<<endl;
    cin>>cpin;

    if(pin==cpin)
    {
        cout<<"1.Withraw Money"<<endl;
        cout<<"2.Check Balance"<<endl;
        cout<<"3.Mini Statement"<<endl;
        cout<<"4.Change Pin"<<endl;
        cout<<"5.Exit"<<endl;

        int ch;
        cout<<"Enter Your Choice:";
        cin>>ch;;

        switch(ch)
        {
        case 1:
            {
                withraw(cb);
                break;
            }

        case 2:
            {
                chebal(cb);
                break;
            }

        case 3:
            {
                mistat(cb);
                break;
            }
        case 4:
            {
                chpin(pin);
                break;
            }
        case 5:
            {
                exit(0);
            }

        default:
            {
                cout<<"Wrong Choice..";
            }

        }
    }

    else
    {
        cout<<"Wrong Pin!";
    }

    getch();
    return 0;
}
