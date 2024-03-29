#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <string>
#include <QList>

#include "item.h"

class StudentManager
{
public:
    StudentManager();

    int addToPreviouslyPurchasedItems(std::string studentName, std::string itemKeys[]);
    int addToCart(std::string studentName, std::string itemKeys[]);
    int checkout(std::string user,QList<Item> checkoutBooks);
    bool removeCartItems(std::string user);
    QList<Item> viewPurchasedItems(std::string studentName);
    QList<Item> viewCart(std::string studentName);
};

#endif // STUDENTMANAGER_H
