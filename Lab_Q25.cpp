#include <iostream>
using namespace std;

class Media {
    string title;
    int pub;
    public:
    virtual void read() {
        cout<<"enter title " << endl;
        cin >> title;
        cout << "enter publication" << endl;
        cin >> pub; 
    }

    virtual void show () {
        cout << "title: " << title << endl;
        cout << "publication: " << pub << endl;
    }
};

class Books: public Media {
    int nop;
    public:
    void read() {
        Media::read();
        cout<<"enter number of pages " << endl;
        cin >> nop; 
    }

    void show () {
        Media::show();
        cout << "number of pages: " << nop << endl;
    }
};

class Video_Tapes : public Media {
    int hh,mm,ss;
    public:
     void read() {
        Media::read();
        cout<<"enter hours " << endl;
        cin >> hh;
        cout<<"enter minutes " << endl;
        cin >> mm;
        cout<<"enter seconds " << endl;
        cin >> ss;
    }

     void show () {
        Media::show();
        cout << "Playing time " << hh << ":" << mm << ":" << ss << endl;
    }
};
                   
int main() {
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl; 
    Books b1;
    Video_Tapes t1;
    Media *m1,*m2;
    m1=&b1;
    m2=&t1;
    int media;
    cin >> media;
    if(media==1){
        m1->read();
        m1->show();
    }
    else if(media==2){
        m2->read();
        m2->show();
    }
    return 0;
}