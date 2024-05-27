#ifndef TRAIN_HPP
#define TRAIN_HPP

#include<utility>
#include<iostream>
using namespace std;
#include<map>

class train
{
    string train_name;
    int train_id;

    public:
        string source;
        string destination;
        string arrival;
        string depature;
        train(int tr_id,string tr_name,string tr_source,string tr_destination,string tr_arrival,string tr_depature)
        {
            train_id=tr_id;
            train_name=tr_name;
            source=tr_source;
            destination=tr_destination;
            arrival=tr_arrival;
            depature=tr_depature;
            cout<<train_id<<"\t"<<train_name<<endl;
        }
        string get_train_name()
        {
            return train_name;
        }
        int get_train_id()
        {
            return train_id;
        }
}


class train_instance_class :public train
{
    public:
                static map<string,pair<int,int>> class_seat;
                int train_seats;
                static vector<int>lower_breath;
                static vector<int>middle_breath;
                static vector<int>upper_breath;
                pair<vector<int>,string>pair1;
                static vector <passenger *>waiting_list_passenger;
                train_instance_class(int tr_id, string tr_name, string tr_source, string tr_destination, string tr_arrival, string tr_depature) : train(train__id,train__name,string tr__source, string tr__destination, string tr__arrival, string tr__depature)
                {
                    class_seat["sitting"]=make_pair(24,100);
                    class_seat["sleeper"]=make_pair(24,200);
                    class_seat["ac_1st_"]=make_pair(24,500);
                    class_seat["ac_2nd_"]=make_pair(24,400);
                    class_seat["ac_3rd_"]=make_pair(24,300);
                    vector<int>sitting_windows{1,4,7,10,13,16,19,22};
                    vector<int>lower_berth_sleeper{1,4,7,9,12,15,17,20,23};
                    vector<int>middle_berth_sleeper{2,5,10,13,18,21};
                    vector<int>upper_berth_sleeper{3,6,8,11,14,16,19,22,24};
                    vector<int>lower_berth_ac_3rd{1,4,7,9,12,15,17,20,23}
                    vector<int>middle_berth_ac_3rd{2,5,10,13,18,21};
                    vector<int>upper_berth_ac_3rd{3,6,8,11,14,16,19,22,24};
                    vector<int>lower_berth_ac_2nd{1,4,7,9,12,15,17,20,23}
                    vector<int>upper_berth_ac_2nd{3,6,8,11,14,16,19,22,24};
                    vector<int>ac_1st{3,6,8,11,14,16,19,22,24};
                    
                    
                    vector<int>sitting_windows_copy=sitting_windows;
                    vector<int>lower_berth_sleeper_copy=lower_berth_sleeper;
                    vector<int>middle_berth_sleeper_copy=middle_berth_sleeper;
                    vector<int>upper_berth_sleeper_copy=upper_berth_sleeper;
                    vector<int>lower_berth_ac_3rd_copy=lower_berth_ac_3rd_copy;
                    vector<int>middle_berth_ac_3rd_copy=middle_berth_ac_3rd;
                    vector<int>upper_berth_ac_3rd_copy=upper_berth_ac_3rd;
                    vector<int>lower_berth_ac_2nd_copy=lower_berth_ac_2nd;
                    vector<int>upper_berth_ac_2nd_copy=upper_berth_ac_2nd;
                    vector<int>ac_1st_copy=ac_1st;
                    }
};



#endif

