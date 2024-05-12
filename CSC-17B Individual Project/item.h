/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   item.h
 * Author: allen
 *
 * Created on May 11, 2024, 8:05 PM
 */

#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;

class Item{
private:
    string name;
    float price;
    int quantity;
    
public:
    Item(name, price, quantity);
    float getPrice() const { return price;}
    string getName()  const {return name;}
    int getQuantity() {return quantity;}
    
    void display();
};

#endif /* ITEM_H */

