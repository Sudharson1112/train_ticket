//#ifndef USER_HPP
//#define USER_HPP

#include<iostream>
using namespace std;
 #include "ticket.hpp"


class user
{
    public:
        string user_name;
        int user_age;
        string user_gender;
        int user_id;
        string user_password;
        static int vol_int;
        string user_source;
        string user_destination;
        user(string usr_name,int usr_age,string usr_gender,string password)
        {
            cout<<"inside constructor"<<endl;
            user_name=usr_name;
            user_age=usr_age;
            user_gender=usr_gender;
            this->user_id=++vol_int;
            system("clear");
            cout<<"This is the ID generated:\t"<<user_id<<"  for user  "<<user_name<<endl;
            user_password=password;
        }
};

struct User
{
    user *instance;
    User *next;
};

struct tree
{
    User *header;
    tree * left;
    tree * right;
    tree ():header(nullptr),left(nullptr),right(nullptr){}
};



class passenger
{
public:
            string passenger_name;
            int passenger_age;
            ticket * passenger_ticket_pointer;
            passenger(string name,int age)
            {
            passenger_name=name;
            passenger_age=age;
            passenger_ticket_pointer=NULL;
            }
            }

#endif

