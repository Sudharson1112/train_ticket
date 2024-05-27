#include"main.hpp"
#include"header.hpp"
#include "user.hpp"
// #include"ticket.hpp"

//extern vector <ticket *>ticket_instances;
int main()
{
    // tree * root_node=NULL
    root_node=create_tree(root_node);
    user instance2("Radha",45,"male","arun");
    user instance4("Arunmozhi",45,"male","arun");
    user instance3("Arul1",34,"male","arul");
    user instance1("Arul2",34,"male","arul");
    insert(&instance2);
    cout<<"1"<<endl;
    insert(&instance3);
    cout<<"2"<<endl;
    insert(&instance1);
    cout<<"3"<<endl;
    insert(&instance4);
    cout<<"4"<<endl;
    

    while(true)
    {
        cout<<"1.sign up 2.login"<<endl;
        short int input;
        cin>>input;
        if (input==1)
        {
            creator();
        }
        else if(input==2)
        {
            bool s=login();
            cout<<s<<endl;
            if(s==1)
            {
                while (true)
                {
                    cout<<"1.Book ticket 2.Show ticket 3.Cancel ticket 4.exit"<<endl;
                    short int a;
                    cin>>a;
                    if(a==1)
                    {
                    short int date;
                    short int month;
                    int year;
                    
                    cout<<"enter the date;
                    cin>>date;
                    cout<<"enter month;
                    cin>>month;
                    time_t t =time(nullptr);
                    tm* now = localtime(&t);
                    if(month<=now->tm_mon+4)
                    {
                        show_stations();
                    }
                    else
                    {
                    cout<<"invalid month"<<endl;
                    }}
                    if(a==2)
                    {
                    cout<<"enter the ticket id"<<endl;
                    int id;
                    cin>>id;
                    for(int i=0;i<size(ticket_instances);i++)
                    {
                    if(ticket_instances[i]->ticket_id==id)
                    {
                    ticket_instances[i]->show_ticket();
                    }
                    }
                    }
                    if(a==3)
                    {
                    cout<<"enter the ticket id"<<endl;
                    int id;
                    cin>>id;
                    ticket_cancellation(id)
                    }
                    if(a==3)
                    {
                        break;
                    }
                }
        }
        else
        {
            break;
        }
        }
    }
}
    
