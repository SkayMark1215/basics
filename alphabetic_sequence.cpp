#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter three string values: ";
    string s1 {'?'};
    string s2 {'?'};
    string s3 {'?'};
    cin >> s1 >> s2 >> s3;
    string fplace {'?'};
    string splace {'?'};
    string tplace {'?'};
    if (s1 >= s2 and s1 >= s3)
    {
        tplace = s1;
        if (s2 >= s3)
        {
        splace = s2;
        fplace = s3;
        }
        else 
        {
        splace = s3;
        fplace = s2;    
        }
    }
    else
    {
        if (s2 >= s1 and s2 >= s3) 
        {
            tplace = s2;
            if (s1 >= s3) 
            {
                splace = s1;
                fplace = s3;
            }
            else
            {
                splace = s3;
                fplace = s1;
            }
            
        }
        else
        {
            tplace = s3;
            if (s2 >= s1)
            {
                splace = s2;
                fplace = s1;
            }
            else 
            {
                splace = s1;
                fplace = s2;
            }
        }
        
    }
    cout << fplace << ", " << splace << ", " << tplace;
    cin >> s1;  //screen freezing

    return 0;
}