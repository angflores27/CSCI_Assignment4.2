//  main.cpp
//  Lecture 4.6
//
//  Created by Angela Flores on 11/10/22.
//

#include <iostream>
#include "Bag.h"

int main()
{
    Bag myBag;
    int a;
    for (int i=0; i<80; i++)
    { a=rand()%100;
        myBag.add(a);
    }
    cout<<"========================\n";
    myBag.display();
    cout<<"========================\n";
    cout<<"The max integer is: "<<myBag.getMax()<<endl;
    int b=myBag.getMax();
    cout<<"The index of the max number is: "<<myBag.getPosition(b)<<endl;
    cout<<"========================\n";
    cout<<"The min integer is: "<<myBag.getMin()<<endl;
    int c=myBag.getMin();
    cout<<"The index of the min number is: "<<myBag.getPosition(c)<<endl;
    cout<<"========================\n";
    myBag.remove(b); //removing large
    myBag.remove(c); //removing smallest
    cout<<"The sum of the remaining numbers is: "<<myBag.getSum()<<endl;
    double d=myBag.getSum();
    double e=d/78;
    cout<<"The sum divided by 78 is : "<<e<<endl;
    
    return 0;
}

