/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on October 12, 2017, 2:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class ShopItemOrder
{
public:
    ShopItemOrder(string name, double price, int orderSize);
    void setName(string name);
    void setPrice(double price);
    void setOrderSize(int orderSize);
    string getOrder();
private:
    string name;
    double price;
    int orderSize;
    double orderPrice;
    string finalOrder;
};

ShopItemOrder::ShopItemOrder(string name, double price, int orderSize)
{
    this->name = name;
    this->price = price;
    this->orderSize = orderSize;
};

string ShopItemOrder::getOrder()
{
    this->name = name;
    this->price = price;
    this->orderSize = orderSize;
    this->orderPrice = orderSize * price;
    this->finalOrder = ("Item = " + name + "\nPrice = $" + to_string(price) + "\nOrder size = " + to_string(orderSize) + "\nFinal price = $" + to_string(orderPrice));
    return finalOrder;   
};

int main() 
{
    ShopItemOrder order1("Dog chew toys", 4.99, 2);
    cout << order1.getOrder() << endl;
    
    return 0;
}