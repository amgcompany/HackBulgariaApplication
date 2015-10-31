#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y;
    string str;

    cout<<"Starting point: ";
    cin>>x>>y;
    cin>>str;

    for(int i=0;i<str.length();i++) {
        if(str[i] != '~') {
            if(str[i] == '>') {
                x += 1;
            } else if (str[i] == '<') {
                x -= 1;
            } else if (str[i] == '^') {
                y += 1;
            } else if (str[i] == 'v') {
                y -= 1;
            }
        } else {
            for(int j=i+1;j<str.length();j++) {
                if(str[j] == '>') {
                    x -= 1;
                } else if (str[j] == '<') {
                    x += 1;
                } else if (str[j] == '^') {
                    y -= 1;
                } else if (str[j] == 'v') {
                    y += 1;
                }
            }
            break;
        }
    }
    cout<<"("<<x<<", "<<y<<")";
    cout<<endl;
    return 0;
}
