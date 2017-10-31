//
//  main.cpp
//  demo1031VFMTR
//
//  Created by lucky on 10/31/17.
//  Copyright © 2017 luck. All rights reserved.
//

#include <iostream>
using namespace std;

class Vehicle{
protected:
    int tire;
public:
    int wholecost(int cost){
        int r;
        r=cost*tire;
        return r;
    }
};
class Motorcyle : public Vehicle {
public:
    Motorcyle(){
        tire=2;
    }
};
class Sejan : public Vehicle {
public:
    Sejan(){
        tire=4;
    }
};
class BoxTruck : public Vehicle {
public:
    BoxTruck(){
        tire=6;
    }
};

class _18Wheeler : public Vehicle {
public:
    _18Wheeler(){
        tire=18;
    }
};

void wholecoastM(int type);

int main(int argc, const char * argv[]) {
    int c;
    do{
        cout<<"Vehicle Fleer Maintenance\n";
        cout<<"TIRE REPLACEMENT\n";
        cout<<"1. Motorcyle\n";
        cout<<"2. Sejan\n";
        cout<<"3. Box Truck\n";
        cout<<"4. 18 Wheeler\n";
        cout<<"5. quit\n\n";
        cin>>c;
        cout<<"\n\n";
        wholecoastM(c);

    }while (c!=5);
    
    return 0;
}
void wholecoastM(int type){
    int ecost;
    cout<<"How much the tire for this vehicle?\n";
    cin>>ecost;
    int wholecost=-1;
    if (type==1) {
        Motorcyle m;
        wholecost=m.wholecost(ecost);
        
    }else if (type==2) {
        Sejan s;
        wholecost=s.wholecost(ecost);
        
    }else if (type==3) {
        BoxTruck b;
        wholecost=b.wholecost(ecost);
        
    }else if (type==4) {
        _18Wheeler w;
        wholecost=w.wholecost(ecost);
        
    }
    if (wholecost!=-1) {
        cout<<"cost "<<wholecost<<"\n";
    }else{
        cout<<"wrong type\n";
    }
    cout<<"\n\n";
    
};
