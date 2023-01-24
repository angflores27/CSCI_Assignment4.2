//
//  Bag.h
//  Assignment 4.2
//
//  Created by Angela Flores on 11/9/22.
//

#ifndef Bag_h
#define Bag_h
#include <iostream>
using namespace std;

class Bag
{
private:
    int items[100]; // bag will hold 100 variables
    int itemCount; // count of how many variables are in the bag
public:
    Bag();
    int getItemCount(); //return itemCount;
    void add(int newItem); // add new integer
    void display();
    bool contains(int anItem);
    bool remove(int anItem); //remove integer if number is already stored
    int getSum(); //return the sum of the integers in the bag
    int getMax(); //return the largest integer
    int getMin(); //return the smallest integer
    int getPosition(int item); //get the position of something
};

//Implementation
Bag::Bag()
{
    itemCount=0;
}
int Bag::getItemCount()
{
    return itemCount;
}
void Bag::add (int newItem)
{
    items[itemCount]=newItem;
    itemCount++;
}
bool Bag::contains (int anItem)
{
    for (int i=0; i<itemCount; i++){
        if (items[i]==anItem)
            return true;
    }
    return false;
}
bool Bag::remove(int anItem)
{
    if (itemCount==0){
        return false; }
    else{
        int index=0;
        for (int i=0; i<itemCount; i++){
            if (items[i]==anItem){
                index=i;
                for (int k=index; k<itemCount-1; k++){
                    items[k]=items[k+1]; }
                itemCount--;
                return true; }}
        cout<<"Item is not in the bag, removal failed.\n";
        return false;}
}
int Bag::getSum()
{
    int s=0;
    for (int i=0; i<itemCount; i++)
    { s+=items[i]; }
    return s;
    
}
int Bag::getMax()
{
    int max=items[0];
    for (int i=1; i<itemCount; i++) {
        if (max<items[i]){
            max=items[i]; } }
    return max;
}
int Bag::getMin()
{
    int min=items[0];
    for (int i=1; i<itemCount; i++) {
        if (min>items[i]){
            min=items[i]; } }
    return min;
}
int Bag::getPosition(int item)
{
    int pos=0;
    for (int i=0; i<itemCount; i++){
        if (items[i]==item) {
            pos=i;
            return pos; } }
        return -1;
}
void Bag::display()
{
    for (int i=0; i<itemCount; i++) {
        cout<<items[i]<<endl; }
}
#endif /* Bag_h */



