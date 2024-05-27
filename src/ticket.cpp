#include<fstream>
//#include<sstream>
#include"main.hpp"
#include"ticket.hpp"
extern vector<train_instance_class*> train_instance_vector;
extern vector <ticket *>ticket_instances;
extern user * user_logged_in_pointer;
void booking()
{
    string source;
    string destination;
    cout<<"Enter the source:"<<endl;
    cin>>source;
    user_logged_in_pointer->user_source=source;
    cout<<"Enter the destination:"<<endl;
    cin>>destination;
    user_logged_in_pointer->user_destination=destination;
    ifstream file_output;
    file_output.open("train_list.txt");
    string line;
    bool word1_bool;
    bool word2_bool;
    int count=0;
    vector<int> train_list;

    while(getline(file_output,line))
    {
        if(count>=7)
        {
            istringstream iss(line);
            string word;
            while(getline(iss,word,'-'))
            {
                if(word==source)
                {
                    word1_bool=true;
                }
                if (word==destination)
                {
                    word2_bool=true;
                }
                if(word1_bool && word2_bool)
                {
                    train_list.push_back(count-6);
                    break;
                }
            }
        }
        count++;
    }
    get_vector(train_list);

}


void show_stations()
{
    system("clear");
    cout<<"Places that you could select"<<endl;
    ifstream file_output;
    file_output.open("train_station.txt");
    string line;
    while(getline(file_output,line))
    {
        cout<<line<<"          ";
    }
    cout<<endl;
    int a;
    booking();
    while(true)
    {
        cout<<"1.Select train 2.Cancel"<<endl;
        cin>>a;
        class_seats(a);
        return;
    }
    }
  
   bool is_in_vector(int value,vector<int> vector_be_checked)
   {
   for (int i=0;i<size(vector_be_checked);i++)
   {
   if vector_be_checked[i]==value
   {
   return true;
   }else
   {
   return false;
   }}}
    
    
    void ticket_cancellation(int ticket__id)
    {
    train_instance_class * temp=NULL;
    for (int i=0;i<size(ticket_instances);i++)
    {
    if ticket_instances[i]->ticket_id==train__id)
    {
    temp=ticket_instance[i];
    for (int i=0;i<size(ticket_instance_vector);i++)
    {
    if(train_instance_vector[i].train_id==temp->train_instance_pointer->train_id;
    {
    if (temp->train_instance_pointer->train_class=="ac_1st")
    {
    train_instance_vector[i].ac_1st.push_back(temp->train_instance_pointer->train_seat_number);
    else if(temp->train_instance_pointer->train_class=="ac_2nd")
    {
    if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->lower_berth_ac_2nd_copy))
    {
    temp->train_instance_pointer->lower_berth_ac_2nd.push_back(temp->train_instance_pointer->train_seat_number);
    else if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->upper_berth_ac_2nd_copy))
    {
    temp->train_instance_pointer->upper_berth_ac_2nd.push_back(temp->train_instance_pointer->train_seat_number);
    }}}
    else if(temp->train_instance_pointer->train_class=="ac_3rd")
    {
    if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->lower_berth_ac_3rd_copy))
    {
    temp->train_instance_pointer->lower_berth_ac_3rd.push_back(temp->train_instance_pointer->train_seat_number);
    else if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->upper_berth_ac_3rd_copy))
    {
    temp->train_instance_pointer->upper_berth_ac_3rd.push_back(temp->train_instance_pointer->train_seat_number);
    }
    else if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->middle_berth_ac_3rd_copy))
    {
    temp->train_instance_pointer->middle_berth_ac_3rd.push_back(temp->train_instance_pointer->train_seat_number);
    }
    }}
    else if(temp->train_instance_pointer->train_class=="sleeper")
    {
    
    if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->lower_berth_sleeper_copy))
    {
    temp->train_instance_pointer->lower_berth_sleeper.push_back(temp->train_instance_pointer->train_seat_number);
    else if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->upper_berth_sleeper_copy))
    {
    temp->train_instance_pointer->upper_berth_sleeper.push_back(temp->train_instance_pointer->train_seat_number);
    }
    else if(is_in_vector(temp->train_instance_pointer->train_seat_number,temp->train_instance_pointer->middle_berth_sleeper_copy))
    {
    temp->train_instance_pointer->middle_berth_sleeper.push_back(temp->train_instance_pointer->train_seat_number);
    }}}
    }
    }
    break;
    }
    delete ticket_instances[i];
    }break;
    }
    cout<<"ticket cancelled successfully"<<endl;
    return;
    }
  


    
    
    
    
    
