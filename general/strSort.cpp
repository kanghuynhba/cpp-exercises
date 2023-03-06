#include <iostream>
#include <string>

using namespace std;

void strSort(int n, string str[]);

int main() {
    string str1("012"), str2("345"), s;

    s=str1+str2;

    cout << "Result: " << s << endl;

    string country[]={"Viet nam", "Lao", "Thai lan", "Campuchia", "Miama"};

    int n=sizeof(country)/sizeof(country[0]);

    strSort(n, country);
    
    for(int i=0; i<n; i++) {
        cout << "\t" << country[i] << endl;
    }
    return 1;
}

void strSort(int n, string str[]) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n; j++) {
            if(str[i]>str[j]) {
                string s=str[i];
                str[i]=str[j];
                str[j]=s;
            }
        }
    }
}