#include <iostream>
using namespace std;
class age{
    public:
    int date,month,year,hour,min,sec,cdate,cmonth,cyear,chour,cmin,csec,pyear,pmonth,pdate,phour,pmin,psec;
void birthdate(){
    cout<<"enter date on which u were born";
    cin>>date;
    cout<<"enter month of ur birth";
    cin>>month;
    cout<<"enter year of your birth";
    cin>>year;
    cout<<"enter time of birth in the format hour-minute-second";
    cin>>hour>>min>>sec;
}
void currentdate(){
    cout<<"enter current date in format of date-month-year";
    cin>>cdate>>cmonth>>cyear;
    cout<<"enter current time in the format hour-minute-second";
    cin>>chour>>cmin>>csec;
}
void presentage(){
     pyear=cyear-year;
     pmonth=cmonth-month;
     pdate=cdate-date;
     phour=chour-hour;
     pmin=cmin-min;
     psec=csec-sec;
    if(psec < 0) {
        psec += 60;
        pmin--;
    }
    if (pmin < 0) {
        pmin += 60;
        phour--;
    }
    if (phour < 0) {
        phour += 24;
        pdate--;
    }
    if (pdate < 0) {
        pdate += 30; // Approximate average days in a month
        pmonth--;
    }
    if (pmonth < 0) {
        pmonth += 12;
        pyear--;
    }
}
void display(){
    cout<<"Your present age is: " << pyear << " years, " << pmonth << " months, " << pdate << " days, "
              << phour << " hours, " << pmin << " minutes, " << psec << " seconds.";
}
};
int main() {
    age age1;
    cout<<"lets calculate your age till now" << endl;
    age1.birthdate();
    age1.currentdate();
    age1.presentage();
    age1.display();
    return 0;
}
