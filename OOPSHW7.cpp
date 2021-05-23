/*Create the class TIME to store time in hours and minutes.
Write a friend function to add two TIME objects.*/
#include<iostream>
using namespace std;

class time{
    int hour;
    int minutes;
    friend time add(time,time);
    public:
    time(int a){
        minutes=a%60;
        hour= a/60;
    }
    int hour_getter(){
        return hour;
    }
    int minutes_getter(){
        return minutes;
    }
    void hour_setter(int m){
      hour = m;
    }
    void minutes_setter(int n){
      minutes=n;
    }
};

time add(time obj1,time obj2){
    int i,j,k;
    time s(0);
    i=obj1.hour+obj2.hour;
    j=obj1.minutes+obj2.minutes;
    k=j/60;
    j %= 60;
    i += k;
    s.hour_setter(i);
    s.minutes_setter(j);
    return s;
}

int main(){
    int x,y;
    cout << "ENTER TIME t1 (in minutes) :- ";
    cin >> x;
    time t1(x);
    cout << "TIME t1 (in Hrs : min format) :- "<< t1.hour_getter()<<" hrs  : "<< t1.minutes_getter()<< " min"<<endl;
    cout << "\nENTER TIME t2 (in minutes) :- ";
    cin >> y;
    time t2(y);
    cout << "TIME t2 (in Hrs : min format) :- "<< t2.hour_getter()<<" hrs  : "<< t2.minutes_getter()<< " min"<<endl;
    time result(0);
    result = add(t1,t2);
    cout << "\nTHEIR SUM (t1 + t2) :- "<< result.hour_getter()<<" hrs  : "<< result.minutes_getter()<< " min";
    return 0;
}