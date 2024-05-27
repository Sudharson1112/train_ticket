// #include"train.hpp"
#include<fstream>
#include<sstream>
#include<vector>
#include"ticket.hpp"
#include"user.hpp"
class train;
// class user;
class passenger;
extern user * user_logged_in_pointer;
vector <pair<passenger * ,string>passenger_vector;
vector<train_instance_class*> train_instance_vector;
vector <ticket *>ticket_instances;
vector<tuple<int,int,int>> vector_for_intermediate_sleeper;
vector<tuple<int,int,int>> vector_for_intermediate_ac_2nd;
vector<tuple<int,int,int>> vector_for_intermediate_ac_3rd;
vector<tuple<int,int,int>> vector_for_intermediate_ac_1st;
vector<tuple<int,int,int>> vector_for_intermediate_sitting;
int source_km;
int des_km'
int st_num;


void train_instance(int n)
{
    ifstream file_output;
    file_output.open("train_list.txt");
    string line;
    int count=1;
    int count2=1;
    vector<string> train_parameters(4);

    while(getline(file_output,line))
    {
        if(count==n)
        {
            istringstream my_s(line);
            string word;
            int o=0;
                // cout<<o<<"o value-----------"<<endl;
            while(getline(my_s,word,'-') and o<=1)
            {
                train_parameters[o]=word;
                o++; 
            }
        }
        count++;
    }
    while(getline(file_output,line))
    {
      if(count2==6+n)
      {
        istringstream my_s(line);
        string word;
        while(getline(my_s,word,'-'))
            {
                  istringstream my_word(word);
                  string last_word;
                  c=0;
                  while (getline(my_word,last_word,','))
                  {
                      if (last_word==passenger_source->user_source)
                      {
                      c++;
                      string woord;
                      woord=getline(my_word, last_word, ',')
                      train_parameters[2]=woord;
                      if(c==3)
                      {
                      s_km=stoi(woord);
                      c=0;
                      }
                      if(last_word==passenger_destination->user_destination)
                      {
                      c++;
                      string woord;
                      woord=getline(my_word, last_word, ',')
                      train_parameters[3]=woord;
                      if(c==3)
                      {
                      des_km=stoi(woord);
                      }
                      }
                      }             
            }
        }
        count++;
    train_instance_class * train_instance_pointer=new train_instance_class(stoi(train_parameters[0]),train_parameters[1],user_logged_in_pointer->user_source,user_logged_in_pointer->user_destination,train_parameters[4],train_parameters[5]);
    train_instance_vector.push_back(train_instance_pointer);
    
}


void get_vector(vector<int> new_vector)
{
    for(int i=0;i<size(new_vector);i++)
    {
        train_instance(new_vector[i]);
    }
}


tuple<pair<string,int>,passenger *>preference_ac_2nd(train_instance_class * train_pointer)
{
pair<string,int>preference_vector{0,0};
cout<<"lower \tupper"<<endl;
string preference;
  cin>>preference;
  if(preference=="lower")
  {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
  if(size(train_pointer->lower_berth_ac_2nd)!=0)
           {
           if(size(intermediate_vector_ac_2nd!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
                cout<<"the train seat is:"<<train_pointer->lower_berth_ac_2nd[0]<<endl;
                if (!train_pointer->lower_berth_ac_2nd.empty()) {
        train_pointer->lower_berth_ac_2nd.erase(train_pointer->lower_berth_ac_2nd.begin());
    }
                }
        else
                {
                passenger_vector.push_back(make_pair(new_passenger,"ac_2nd"));
                }
                return new tuple(pair(train_class,train_pointer->lower_berth_ac_2nd[0]),new_passenger);
else if(preference="upper")
{
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
        if(size(train_pointer->upper_berth_ac_2nd)!=0)
                   {
                   if(size(intermediate_vector_ac_2nd!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
                        cout<<"the train seat is:"<<train_pointer->upper_berth_ac_2nd[0]<<endl;
                        f (!train_pointer->upper_berth_ac_2nd.empty()) {
                train_pointer->upper_berth_ac_2nd.erase(train_pointer->upper_berth_ac_2nd.begin());
            }
                        }
                else
                        {
                        passenger_vector.push_back(make_pair(new_passenger,"ac_2nd");
                        }
                        return new tuple(pair(train_class,train_pointer->upper_berth_ac_2nd[0]),new_passenger);
                        }
  
  
  
 tuple(pair<string,int>,passenger *) preference_ac_1st(train_instance_class * train_pointer)
{
pair<string,int>preference_vector{0,0};
string name;
cout<<"Enter the name;"<<endl;
cin>>name;
cout<<"Enter the age;"<<end;
cin>>age;
passenger * new_passenger=new passenger(name,age);
cout<<"the train seat is:"<<train_pointer->ac_1st[0]<<endl;
if(size(intermediate_vector_ac_1st!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
 if (!train_pointer->ac_1st.empty()) {
        train_pointer->ac_1st.erase(train_pointer->ac_1st.begin());
    }
{
passenger_vector.push_back(make_pair(new_passenger,"ac_1st");
}
return new tuple(pair(train_class,train_pointer->ac_1st[0]),new_passenger);
}



tuple(pair<string,int>,passenger *) preference_sitting(train_instance_class * train_pointer)
{
pair<string,int>preference_vector{0,0};
string name;
cout<<"Enter the name;"<<endl;
cin>>name;
cout<<"Enter the age;"<<end;
cin>>age;
passenger * new_passenger=new passenger(name,age);
cout<<"the train seat is:"<<train_pointer->sitting[0]<<endl;
if(size(intermediate_vector_sitting!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
 if (!train_pointer->sleeper.empty()) {
        train_pointer->sitting.erase(train_pointer->sitting.begin());
    }
{
passenger_vector.push_back(make_pair(new_passenger,"sitting");
}
return new tuple(pair(train_class,train_pointer->ac_1st[0]),new_passenger);
}



tuple(pair<string,int>,passenger *) preferences(train_instance_class * train_pointer,string train__class)
{
pair<string,int>preference_vector{0,0};
if (train__class=="sleeper")
{

  cout<<"lower \t middle\t upper"<<endl;
  string preference;
  cin>>preference;
  if(preference=="lower")
  {
                  string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
        if(size(train_pointer->lower_berth_sleeper)!=0)
           {
           if(size(intermediate_vector_sleeper!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
           }
                cout<<"the train seat is:"<<train_pointer->lower_berth_sleeper[0]<<endl;
                if (!train_pointer->lower_berth_sleeper.empty()) {
        train_pointer->lower_berth_sleeper.erase(train_pointer->lower_berth_sleeper.begin());
    }
                            
                }
        else
                {
                passenger_vector.push_back(make_pair(new_passenger,"sleeper"));
                
                }
                return new tuple(pair(train_class,train_pointer->lower_berth_sleeper[0]),new_passenger);
 }
 else if (preference=="middle")
 {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
    if(size(train_pointer->middle_berth_sleeper)!=0)
           {
           if(size(intermediate_vector_sleeper!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
           }
                cout<<"the train seat is "<<train_pointer->middle_berth_sleeper[0]<<endl;
                if (!train_pointer->middle_berth_sleeper.empty()) {
        train_pointer->middle_berth_sleeper.erase(train_pointer->middle_berth_sleeper.begin());
    }
    }
    else
    {
    passenger_vector.push_back(make_pair(new_passenger,"sleeper"));
    }
    return new tuple(pair(train_class,train_pointer->middle_berth_sleeper[0]),new_passenger);
    }
    
    else if (preference=="upper")
    {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
    if(size(train_pointer->upper_berth_sleeper)!=0)
    {
    if(size(intermediate_vector_sleeper!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
    cout<<"the train seat is"<<train_pointer->upper_berth_sleeper[0]<<endl;
    if (!train_pointer->upper_berth_sleeper.empty()) {
        train_pointer->upper_berth_sleeper.erase(train_pointer->upper_berth_sleeper.begin());
    }
    }
    else
    {
    passenger_vector.push_back(make_pair(new_passenger,"sleeper"));
    }
    return new tuple(pair(train_class,train_pointer->upper_berth_sleeper[0]),new_passenger);
}
else if(train__class=="ac_3rd")
{
cout<<"lower \t middle\t upper"<<endl;
  string preference;
  cin>>preference;
  if(preference=="lower")
  {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
        if(size(train_pointer->lower_breath)!=0)
           {
           if(size(intermediate_vector_ac_3rd!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
           }
                cout<<"the train seat is:"<<train_pointer->lower_berth_ac_3rd[0]<<endl;
                if (!train_pointer->lower_berth_ac_3rd.empty()) {
        train_pointer->lower_berth_ac_3rd.erase(train_pointer->lower_berth_ac_3rd.begin());
    }
                }
        else
                {
                passenger_vector.push_back(make_pair(new_passenger,"ac_3rd"));
                }
                return new tuple(pair(train_class,train_pointer->lower_berth_ac_3rd[0]),new_passenger);
 }
 else if (preference=="middle")
 {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
    if(size(train_pointer->middle_breath)!=0)
    {
    if(size(intermediate_vector_ac_3rd!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));       
           }
           }
           }
                cout<<"the train seat is "<<train_pointer->middle_berth_ac_3rd[0]<<endl;
                if (!train_pointer->middle_berth_ac_3rd.empty()) {
        train_pointer->middle_berth_ac_3rd.erase(train_pointer->middle_berth_ac_3rd.begin());
    }
    }
    else
    {
    passenger_vector.push_back(make_pair(new_passenger,"ac_3rd"));
    }
    return new tuple(pair(train_class,train_pointer->middle_berth_ac_3rd[0]),new_passenger);
    }
    
    else if (preference=="upper")
    {
                string name;
                 cout<<"Enter the name;"<<endl;
                 cin>>name;
                 cout<<"Enter the age;"<<end;
                 cin>>age;
                 passenger * new_passenger=new passenger(name,age);
    if(size(train_pointer->upper_breath)!=0)
    {
    if(size(intermediate_vector_ac_3rd!=0)
           {
           for (int i=0;i<size(intermediate_vector_sleeper);i++)
           {
           if(des_km<=get<0>(intermediate_vector_sleeper[i]) || get<1>(intermediate_vector_sleeper[i])<=sr_km)
           {
           train_pointer->lower_berth_sleeper.push_back(get<2>(intermediate_vector_sleeper[i]));
           
           }
           }
           }
    cout<<"the train seat is"<<train_pointer->upper_berth_ac_3rd[0]<<endl;
    if (!train_pointer->upper_berth_ac_3rd.empty()) {
        train_pointer->upper_berth_ac_3rd.erase(train_pointer->upper_berth_ac_3rd.begin());
    }
    }
    else
    {
     passenger_vector.push_back(make_pair(new_passenger,"ac_3rd"));
    }
    return new tuple(pair(train_class,train_pointer->upper_berth_ac_3rd[0]),new_passenger);
}

    
  int  price_calculation(train_instance_class * pointer,string train_class, int ticket_count)
  {
    ifstream file_output;
    int km_fare;
    file_output.open("train_list.txt");
    string line;
    while(getline(file_output,line,'-')
    {
    if (line[:line.find(',')]==user_logged_in_pointer->user_destination)
    {
    km_fare=stoi(line[line.rfind(','):]);
    }
    }
    if
    int fare;
    
    if(train_class=="sleeper")
    {
          fare=ticket_count*100*km_fare;
    }
    else if(train_class="ac_3rd")
    {
    fare=ticket_count*200*km_fare;
    }
    else if(train_class="ac_2nd")
    {
    fare=ticket_count*300*km_fare;
    }
    else if(train_class="ac_1st")
    {
    fare=ticket_count*400*km_fare;
    }
    else if(train_class=="sitting")
    {
    fare=ticket_count*50*km_fare;
    }
    return fare;
  }
    
void class_seats(int train_id)
{
    string train_class;
    int ticket_count;
    train * train_point=NULL;
    for (int i=0;i<size(train_instance_vector);i++)
    {
        if(train_instance_vector[i]->get_train_id()==train_id)
        {
            train_point=train_instance_vector[i];
            cout<<train_point<<"----------train pointer-"<<endl;
            for (auto i:train_instance_vector[i]->class_seat)
            {
                cout<<i.first<<"\t"<<i.second.first<<"\t"<<i.second.second<<endl;
            }
        }
    }
    cout<<"Enter class"<<endl;
    cin>>train_class;
    pair<string,int>pair_check;
    if (train_class=="sleeper")
    {
                    cout<<"Enter number of tickets"<<endl;
                    cin>>ticket_count;
                    vector<int>selected_seats;
                if (ticket_count!=0)
                {
                      cout<<"if u select the preferences u could book only for an individual"<<endl;
                      cout<<"1.select preferences 2.continue without preferences"<<endl;
                      short int a;
                      cin>>a;
                      if(a==1)
                      {
                          for (int i=1;i<=ticket_count;i++)
                          {
                              check=preferences(train_point);
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                              ticket * ticket_point=new ticket(train_point,train_class,fare,check[1]);
                              ticket_instances.push_back(ticket_point);
                              }
                              train_point->class_seat[train_class].first-=ticket_count;
                              cout<<"ticket price"<<fare<<endl;
                              cout<<"--------generating ticket------------"<<endl;
                            }
                            for (int i=0;i<size(ticket_instances);i++)
                              {
                                    ticket_instances[i]->show_ticket();
                                    intermediate_vector_sleeper.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                              }
                              cout<<"Booked tickets Thank you  :)"<<endl;     
                      }
                      else
                      {
                        for (int i=1;i<=ticket_count;i++)
                            {
                            train_class="lower";
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                                ticket * ticket_point=new ticket(train_point,train_class,fare);
                                ticket_instances.push_back(ticket_point);
                                 train_point->class_seat[train_class].first-=ticket_count;
                                 cout<<"ticket price"<<fare<<endl;;
                            cout<<"--------generating ticket------------"<<endl;
                            }  
                            for (int i=0;i<size(ticket_instances);i++)
                            {
                                  ticket_instances[i]->show_ticket();
                                  intermediate_vector_sleeper.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                            }
                            cout<<"Booked tickets Thank you  :)"<<endl;
                }
                }
  
                
   if (train_class=="ac_3rd")
    {
                    cout<<"Enter number of tickets"<<endl;
                    cin>>ticket_count;
                    vector<int>selected_seats;
                if (ticket_count!=0)
                {
                      cout<<"if u select the preferences u could book only for an individual"<<endl;
                      cout<<"1.select preferences 2.continue without preferences"<<endl;
                      short int a;
                      cin>>a;
                      if(a==1)
                      {
                          for (int i=1;i<=ticket_count;i++)
                          {
                              check=preferences(train_point);
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                              ticket * ticket_point=new ticket(train_point,train_class,fare,check[1]);
                              ticket_instances.push_back(ticket_point);
                              }
                              train_point->class_seat[train_class].first-=ticket_count;
                              cout<<"ticket price"<<fare<<endl;;
                              cout<<"--------generating ticket------------"<<endl;
                            }
                            for (int i=0;i<size(ticket_instances);i++)
                              {
                                    ticket_instances[i]->show_ticket();
                                    intermediate_vector_ac_3rd.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                              }
                              cout<<"Booked tickets Thank you  :)"<<endl;     
                      }
                      else
                      {
                        for (int i=1;i<=ticket_count;i++)
                            {
                            train_class="lower";
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                                ticket * ticket_point=new ticket(train_point,train_class,fare);
                                ticket_instances.push_back(ticket_point);
                                 train_point->class_seat[train_class].first-=ticket_count;
                                 cout<<"ticket price"<<fare<<endl;;
                            cout<<"--------generating ticket------------"<<endl;
                            }  
                            for (int i=0;i<size(ticket_instances);i++)
                            {
                                  ticket_instances[i]->show_ticket();
                                  intermediate_vector_ac_3rd.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                            }
                            cout<<"Booked tickets Thank you  :)"<<endl;
                }
                }
  
                
 if (train_class=="ac_2nd")
    {
                    cout<<"Enter number of tickets"<<endl;
                    cin>>ticket_count;
                    vector<int>selected_seats;
                if (ticket_count!=0)
                {
                      cout<<"if u select the preferences u could book only for an individual"<<endl;
                      cout<<"1.select preferences 2.continue without preferences"<<endl;
                      short int a;
                      cin>>a;
                      if(a==1)
                      {
                          for (int i=1;i<=ticket_count;i++)
                          {
                              check=preferences_2nd(train_point);
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                              ticket * ticket_point=new ticket(train_point,train_class,fare,check[1]);
                              ticket_instances.push_back(ticket_point);
                              }
                              train_point->class_seat[train_class].first-=ticket_count;
                              cout<<"ticket price"<<fare<<endl;;
                              cout<<"--------generating ticket------------"<<endl;
                            }
                            for (int i=0;i<size(ticket_instances);i++)
                              {
                                    ticket_instances[i]->show_ticket();
                                    intermediate_vector_ac_2nd.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                              }
                              cout<<"Booked tickets Thank you  :)"<<endl;     
                      }
                      else
                      {
                        for (int i=1;i<=ticket_count;i++)
                            {
                            train_class="lower";
                              int fare =price_calculation(train_pointer,train_class,ticket_count);
                                ticket * ticket_point=new ticket(train_point,train_class,fare);
                                ticket_instances.push_back(ticket_point);
                                 train_point->class_seat[train_class].first-=ticket_count;
                                 cout<<"ticket price"<<fare<<endl;;
                            cout<<"--------generating ticket------------"<<endl;
                            }  
                            for (int i=0;i<size(ticket_instances);i++)
                            {
                                  ticket_instances[i]->show_ticket();
                                  intermediate_vector_ac_2nd.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                            }
                            cout<<"Booked tickets Thank you  :)"<<endl;
                }
                }
  
                }
else if(train_class=="ac_1st")
{
cout<<"Enter number of tickets"<<endl;
                    cin>>ticket_count;
                    vector<int>selected_seats;
                    if(ticket_count==1)
                    {
                                      preferences_ac_1st(train_point);
                                      int fare =price_calculation(train_pointer,train_class,ticket_count);
                                      for (int i=1;i<=ticket_count;i++)
                                        {
                                            ticket * ticket_point=new ticket(train_point,train_class,fare);
                                            ticket_instances.push_back(ticket_point);
                                        }
                                        train_point->class_seat[train_class].first-=ticket_count;
                                        cout<<"ticket price"<<fare<<endl;;
                                        cout<<"--------generating ticket------------"<<endl;
                                        for (int i=0;i<size(ticket_instances);i++)
                                        {
                                              ticket_instances[i]->show_ticket();
                                              intermediate_vector_ac_1st.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                                        }
                                        cout<<"Booked tickets Thank you  :)"<<endl;     
                                      }
                        else if(ticket_count!=1)
                        {
                        for (int i=1;i<=ticket_count;i++)
                        {
                                      preferences_ac_1st(train_point);
                                      int fare =price_calculation(train_pointer,train_class,ticket_count);
                                      for (int i=1;i<=ticket_count;i++)
                                        {
                                            ticket * ticket_point=new ticket(train_point,train_class,fare);
                                            ticket_instances.push_back(ticket_point);
                                        }
                                        train_point->class_seat[train_class].first-=ticket_count;
                                        cout<<"ticket price"<<fare<<endl;;
                                        cout<<"--------generating ticket------------"<<endl;
                                        }
                                        for (int i=0;i<size(ticket_instances);i++)
                                        {
                                              ticket_instances[i]->show_ticket();
                                              intermediate_vector_ac_1st.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                                        }
                                        cout<<"Booked tickets Thank you  :)"<<endl;
                                        }}
  else if(train_class=="sitting")
  {
  cout<<"Enter number of tickets"<<endl;
                    cin>>ticket_count;
                    vector<int>selected_seats;
                    if(ticket_count==1)
                    {
                                      preferences_ac_1st(train_point);
                                      int fare =price_calculation(train_pointer,train_class,ticket_count);
                                      for (int i=1;i<=ticket_count;i++)
                                        {
                                            ticket * ticket_point=new ticket(train_point,train_class,fare);
                                            ticket_instances.push_back(ticket_point);
                                        }
                                        train_point->class_seat[train_class].first-=ticket_count;
                                        cout<<"ticket price"<<fare<<endl;;
                                        cout<<"--------generating ticket------------"<<endl;
                                        for (int i=0;i<size(ticket_instances);i++)
                                        {
                                              ticket_instances[i]->show_ticket();
                                              intermediate_vector_sitting.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                                        }
                                        cout<<"Booked tickets Thank you  :)"<<endl;     
                                      }
                        else if(ticket_count!=1)
                        {
                        for (int i=1;i<=ticket_count;i++)
                        {
                                      preferences_ac_1st(train_point);
                                      int fare =price_calculation(train_pointer,train_class,ticket_count);
                                      for (int i=1;i<=ticket_count;i++)
                                        {
                                            ticket * ticket_point=new ticket(train_point,train_class,fare);
                                            ticket_instances.push_back(ticket_point);
                                        }
                                        train_point->class_seat[train_class].first-=ticket_count;
                                        cout<<"ticket price"<<fare<<endl;;
                                        cout<<"--------generating ticket------------"<<endl;
                                        }
                                        for (int i=0;i<size(ticket_instances);i++)
                                        {
                                              ticket_instances[i]->show_ticket();
                                              intermediate_vector_sitting.push_back(new tuple(sr_km,des_km,ticket_instances[i]->train_seat_number));
                                        }
                                        cout<<"Booked tickets Thank you  :)"<<endl;
                                        }}
                                        
                                        
                                        
                                        
void passenger_waiting_list()
{
cout<<"there are"<<size(passenger_vector)<<"waiting lists"<<endl;
if(size(passenger_vector)==0)
{
return;
}
else
{
if (size(passenger_vector)!=0)
{
    for (int i=0;i<size(train_instance_pointer);i++)
    {
      if (train_instance_pointer[i]==trainn_pointer)
          {
              for(int i=0;i<size(passenger_vector);i++)
              {
                  if(passenger_vector[i].second=="sleeper")
                  {
                      if(size(train_instance_pointer[i].lower_berth_sleeper)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);
                                      ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      else if((size(train_instance_pointer[i].middle_berth_sleeper)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);
                                      ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      else if(((size(train_instance_pointer[i].upper_berth_sleeper)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);
                                      ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }}
                      if(passenger_vector[i].second=="ac_3rd")
                      {
                      if(size(train_instance_pointer[i].lower_berth_ac_3rd!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);
                                      ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      else if((size(train_instance_pointer[i].middle_berth_ac_3rd)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point),ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      else if(((size(train_instance_pointer[i].upper_berth_ac_3rd)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                        }
                        }
                        if(passenger_vector[i].second=="ac_2nd")
                        {
                        if(size(train_instance_pointer[i].lower_berth_ac_2nd!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      else if((size(train_instance_pointer[i].middle_berth_ac_2nd)!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                      }
                      }
                      if(passenger_vector[i].second=="ac_2nd")
                      {
                      if(size(train_instance_pointer[i].ac_1st!=0)
                      {
                                      ticket * ticket_point=new ticket(train_point,train_class,fare);
                                      ticket_instances.push_back(ticket_point);ticket_point->passenger_pointer=passenger_vector[i];
                                      break;
                        }
                        }
  
  }}}}





