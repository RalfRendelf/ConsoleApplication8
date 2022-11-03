#pragma once
#include <iostream>
#include <bitset>
#include <memory>
#include <vector>
#include <list>

using namespace std;
class StrBlob 
{

public:
    typedef std::vector<std::string>::size_type size_type;

    // constructors
    StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }
    StrBlob(std::initializer_list<std::string> il);

    // size operations
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    // add and remove elements
    void push_back(const std::string& t) { data->push_back(t); }
    void pop_back();
    string& front();
    string& back();
    string& front() const;
    string& back() const;
private:
    std::shared_ptr<std::vector<std::string>> data;
    // throws msg if data[i] isn't valid
    void check(size_type i, const std::string& msg) const;
};

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) {}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

void StrBlob::check(size_type i, const std::string& msg)const {
    if (i >= data->size())
        throw std::out_of_range(msg);
}



string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();

}


void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");

}

string& StrBlob::front() 
{

    return *this;
}

