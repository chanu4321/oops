#include <iostream>
using namespace std;
class DistF;
class DistM {
    double m;
    double cm;
    public:
    DistM () {
        this->m=0;
        this->cm=0;
    }
    DistM (int m, int cm) {
        this->m=m;
        this->cm=cm;
    }
    void print();
    DistM friend add (DistM,DistF);
};

class DistF {
    double f;
    double in;
    public:
    DistF () {
        this->f=0;
        this->in=0;
    }
    DistF (int f, int in) {
        this->f=f;
        this->in=in;
    }

    DistM friend add (DistM,DistF);
};

DistM add (DistM m, DistF f) {
    DistM res;
    res.m= m.m + (0.3048*f.f);
    res.cm= m.cm + (2.54*f.in);
    return res;

}

void DistM :: print() {
    cout << "Total distance: " << m << "m and " << cm << "cm" << endl;
};
int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;

    DistM m1(2,5);
    DistF f1(5,6);

    DistM sum = add (m1,f1);
    sum.print();

    return 0;
}