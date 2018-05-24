#include "d3.h"

d3::d3()
{
    string str("xcd is good");
    if(str.begin() != str.end())//判断str 不为空
    {
        auto it = str.begin();
        it++;
        *it = toupper(*it);
        //cout << "it:" << *it;
    }
    //string::difference_type xcd = str.begin() - str.back();

    cout << "\n" << *str.end() << "\n";
    for(auto it = str.begin(); it != str.end()&&isspace(*it); it++)
    {
        *it = toupper(*it);
        //cout << *it;
    }

    //二分法
    vector<int> lit = {0,9,10,87,90,100};
    auto listBegin = lit.begin(), listEnd = lit.end();
    auto mid = listBegin + (listEnd-listBegin)/2;
    int sought = 100;

    while(mid != listEnd && sought != *mid)
    {
        if(sought < *mid)
        {
            listEnd = mid;
        }
        else
        {
            listBegin = mid + 1;
        }

        mid = listBegin + (listEnd - listBegin)/2;
    }
    //cout << "mid:" << *mid;

    //d324();
    d325();
}

void d3::d324()
{
    int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
    vector<int> vecInt;
    for(int i = 0; i < 10; i++)
    {
        vecInt.push_back(arr[i]);
    }

    auto vecBegin = vecInt.begin();
    auto vecEnd = vecInt.end();

    while(vecBegin != vecEnd)
    {
        cout << "sum:" << *(vecBegin) + *(--vecEnd);
        vecBegin++;
    }
}

void d3::d325()
{
    list<int> listInt = {40, 23, 49,70,80,60,99, 89,100};
    list<int>::const_iterator listBegin = listInt.begin();
    list<int>::const_iterator listEnd = listInt.end();

    while(listBegin != listEnd)
    {
        cout << "listBegin:"<< *listBegin;
        if(*listBegin < 60)
            cout << "is c" << endl;
        else if(*listBegin >= 60 && *listBegin < 80)
        {
            cout << "is b" << endl;
        }
        else
        {
            cout << "is a" << endl;
        }
        listBegin++;
    }
}
