#include "d11.h"

d11::d11()
{
    map<string, size_t> word_count;
    set<string> exclude = {"the", "but", "and", "or", "an", "a", "The", "But", "And", "Or", "An", "A"};
    map<string, string> authors = { {"Joyce","James"}, {"Austen","Jane"}, {"Dickens","Charles"} };
    vector<int> vecInt = {1,3,59,2,3,3};
    list<string> listStr = {"xcd", "fjid", "9ofkdj", "fdfji", "xcd"};
    //cout << count(vecInt.begin()+vecInt.size(), vecInt.end(), 3);
    cout << count(listStr.begin(), listStr.end(), "xcd") << endl;
    cout << accumulate(vecInt.begin(), vecInt.end(), 0);
    float r = 3.1;
    r+=2;
    cout << "rslt:"  << r;

}
