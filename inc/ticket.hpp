

//#ifndef TICKET_HPP
//#define TICKET_HPP

// #include"user.hpp"
#include "train.hpp"
// class train;
class user;
#include"user.hpp"
#include<iostream>
using namespace std;


class passenger
{
public:
string passenger_name;
int passenger_age;
passenger(string name,int age):passenger_name(name),passenger_age(age){}
};

class ticket
{
    public:
    static ticket_id;
    passenger * passenger_pointer;
    train_instance_class * train_pointer;
    // int running_date;
    string train_class;
    int train_seat_number;
    int ticket_fare;
    ticket(train_instance_class * pointer,string tr_class,int tr_fare,passenger * passenger)
    {
    this->ticket_id=ticket_id+;
        train_pointer=pointer;
        train_class=tr_class;
        ticket_fare=tr_fare;
        cout<<"inside the ticket instance"<<endl;
        passenger_pointer=passenger;
    }
    void show_ticket()
    {
        system("clear");
        cout<<"Ticket for passesnger travelling"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Name:"<<passenger_pointer->passenger_name<<endl;
        cout<<"Age:"<<passenger_pointer->passenger_age<<endl;
        cout<<"source     :"<<passenger_pointer->passenger_source<<endl;
        cout<<"destination:"<<passenger_pointer->passenger_destination<<endl;
        cout<<"arrival    :"<<train_pointer->arrival<<"\tdepature     :"<<train_pointer->depature<<endl;
        cout<<"class      :"<<train_class<<endl;
        cout<<"seats     :"train_pointer->train_seats;
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
};

static ticket_id:: ticket=1000


#endif
