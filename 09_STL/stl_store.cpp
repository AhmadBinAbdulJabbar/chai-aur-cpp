#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};


int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Green Tea", "Beverages"},
        {103, "Notebook", "Stationery"},
        {104, "Headphones", "Electronics"},
        {105, "Coffee Mug", "Kitchenware"}
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1,"C001", time(0)});
    orderHistory.push_back({2, 102, 2,"C002", time(0)});
    orderHistory.push_back({3, 103, 1,"C003", time(0)});


    set<string> categories;

    for(const auto &product: products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 15},
        {102, 30},
        {103, 50},
        {104, 20},
        {105, 25}
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Charlie"},
        {"C004", "Diana"},
        {"C005", "Eve"}
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }



    
    return 0;
}