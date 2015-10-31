#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string reverse_word(string str) {
    string reversed;
    for(int s=str.length()-1;s>=0;s--) {
        reversed += str[s];
    }
    return reversed;
}

int main()
{
    int m, n;
    m = 5;
    n = 4;

    char a[5][4] = {
        {'i','v','a','n'},
        {'r','v','v', 'i'},
        {'i','n','a', 'v'},
        {'m','v','v', 'n'},
        {'q','r','i', 't'}
    };

    string word;
    string store;
    string store_di;
    int match = 0;
    int br = 0;
    cin>>word;

    string rev = reverse_word(word); // the reversed word

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++){
            /* SEARCHES FOR THE WORD IN ROWS ONLY */
            for(int t=0;t<=word.length();t++) {
                if(word[t] == a[i][j]) {
                    store += word[t];
                }
            }
            /* CHECKS THE MAIN DIAGONAL */
            if(i == j) {
                for(int u=0;u<=word.length();u++) {
                    if(word[u] == a[i][j]) {
                        store_di += word[u];
                    }
                }
            }
        }
    }
    /* COUNTS ALL WORD FOR ROWS IN NORMAY WAY */
    for(int e=0;e<=store.length();e++) {
        e=store.find(word, e);
        if(e==string::npos)
            break;
        match++;
    }
    for(int q=0;q<=store_di.length();q++) {
        q=store.find(word, q);
        if(q==string::npos)
            break;
        match++;
    }
    cout<<match<<endl;
    return 0;
}
