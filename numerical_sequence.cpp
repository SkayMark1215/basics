#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter three integer numbers: ";
    int num1;
    int num2;
    int num3;
    int fplace;
    int splace;
    int tplace;
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 and num1 >= num3)
    {
        tplace = num1;
        if (num2 >= num3)
        {
            splace = num2;
            fplace = num3;
        }
        else 
        {
            splace = num3;
            fplace = num2;
        }
    } 
    if (num2 >= num1 and num2 >= num3)
    {
        tplace = num2;
        if (num1 >= num3)
        {
            splace = num1;
            fplace = num3;
        }
        else
        {
            splace = num3;
            fplace = num1;
        }
        
    } else
        {
        tplace = num3;
        if (num1 >= num2)
        {
            splace = num1;
            fplace = num2;
        }
        else
        {
            splace = num2;
            fplace = num1;
        }
    }    
    cout << fplace << ", " << splace << ", " << tplace;   
  
    systme("pause");
    return 0;
}
