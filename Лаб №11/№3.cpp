#include <iostream>
#include <string>
using namespace std;
string taskA(string str)
{
    string from = "min", to = "MAX";
    size_t pos = 0;
    while ((pos = str.find(from, pos)) != string::npos)
    {
        str.replace(pos, from.length(), to);
        pos += from.length();
    }
    return str;
} 
string taskB(string str)
{
    int l = 0;
    for (size_t r = 0; r < str.length(); r++)
    {
        char element = str[r];
        if (l == 0 && r == 5){
            str.replace(0, 5, "ku-ku");
        }
        if (r == str.length()-1  && l == str.length() - 6){
            str.replace(str.length() - 5, 5, "ku-ku");
        }
        if (element == ' ')
        {
            if((r - l) == 6)
            {
                str.replace(l+1, 5, "ku-ku");
            }
            l = r;
        }
        
    }
    return str;
}
string taskС(string str)
{
    size_t pos = 0;
    string from = "ku-ku", to = "ku-ka-re-ku";
    if (str.find(from, 0) != string::npos){
        while((pos = str.find(from, pos)) != string::npos)
    {
        str.replace(pos,from.length(), to);
        pos += to.length();
    }
    return str;
    }
    else
    {
        size_t index = str.length() / 2;
        string list1 = str.substr(0, (str.length() / 2));
        string list2 = str.substr((str.length() / 2) , str.length());
        string newstr = list1 + to + list2;
        return newstr;
    }
    
}
string taskD(string str)
{
    string del = "ku-ku";
    size_t pos = 0;
    while((pos = str.find(del, pos)) != string::npos)
    {
        str.erase(pos, del.length());
    }
    return str;
}
string taskE(string str)
{
    string from = "ku-ku";
    size_t pos = string::npos;
    if (str.rfind(from, pos) != string::npos){
        pos = str.rfind(from, pos);
        size_t size_del = str.length() - pos - from.length();
        str.erase(pos + from.length(), size_del);
        return str;
    }
    else
    {
        return str;
    }
}
int taskF(string str)
{
    int res = 0;
    bool inWord = false;
    for(char x :str)
    {
        if(isalpha(x)){
            if(inWord == false){
                inWord = true;
                res += 1;
            }
        }
        else{
            inWord = false;
        }
    }
    return res;
    
}
string taskG(string str)
{
    string res;
    for (int i = 0; i < str.length(); i++)
    {
        int k = 1;
        char x = str[i];
        if(x == '('){
            for (size_t j=(i+1); j < str.length(); j++)
            {
                char element = str[j];
                if(element == '(') k++;
                if(element == ')') k --;
                if(k == 0){
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
string taskH(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int k = 1, index;
        char x = str[i];
        if(x == '('){
            for (size_t j=(i+1); j < str.length(); j++)
            {
                char element = str[j];
                if(str[j] == ')')
                    index = j;
            }
        str.erase(i, index-i+1);
        }
    }
    return str;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    string str;
    cout << "Строчка для пункта а: ";
    getline(cin, str);
    cout << taskA(str) << endl;
    cout << "Строчка для пункта b: ";
    getline(cin, str);
    cout << taskB(str) << endl;
    cout << "Строчка для пункта c: ";
    getline(cin, str);
    cout << taskС(str) << endl;
    cout << "Строчка для пункта d: ";
    getline(cin, str);
    cout << taskD(str) << endl;
    cout << "Строчка для пункта e: ";
    getline(cin, str);
    cout << taskE(str) << endl;
    cout << "Строчка для пункта f: ";
    getline(cin, str);
    cout << taskF(str) << endl;
    cout << "Строчка для пункта g: ";
    getline(cin, str);
    cout << taskG(str) << endl;
    cout << "Строчка для пункта g: ";
    getline(cin, str);
    cout << taskH(str) << endl;
}