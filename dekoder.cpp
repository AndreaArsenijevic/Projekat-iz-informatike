#include<bits/stdc++.h>
using namespace std;

string s, t;
unordered_map<char, string> mapa;
unordered_map<int, int> mapa2;
unordered_map<int, char> mapa3;
int main() {

    mapa2[0]=0;
    mapa2[1]=1;
    mapa2[2]=8;
    mapa2[3]=7;
    mapa2[4]=4;
    mapa2[5]=5;
    mapa2[6]=6;
    mapa2[7]=3;
    mapa2[8]=2;
    mapa2[9]=9;
    mapa3[12]='a';
    mapa3[2111]='b';
    mapa3[2121]='c';
    mapa3[211]='d';
    mapa3[1]='e';
    mapa3[1121]='f';
    mapa3[221]='g';
    mapa3[1111]='h';
    mapa3[11]='i';
    mapa3[1222]='j';
    mapa3[212]='k';
    mapa3[1211]='l';
    mapa3[22]='m';
    mapa3[21]='n';
    mapa3[222]='o';
    mapa3[1221]='p';
    mapa3[2212]='q';
    mapa3[121]='r';
    mapa3[111]='s';
    mapa3[2]='t';
    mapa3[112]='u';
    mapa3[1112]='v';
    mapa3[122]='w';
    mapa3[2112]='x';
    mapa3[2122]='y';
    mapa3[2211]='z';

    cout << "Unesi rec za desifrovanje: ";
    getline(cin, s);
    t="";
    for(int i=0; i<(int)s.length(); ++i) {
        s[i]=char(mapa2[s[i]-'0']+'0');
    }
    long long broj=stoll(s);
    long long broj2=broj;
    while(broj2) {
        long long ost=broj2%3LL;
        t+=char(ost+'0');
        broj2/=3LL;
    }
    reverse(t.begin(), t.end());
    int zbir=0;
    string k="";
    for(int i=0; i<(int)t.length(); ++i) {
        if(t[i]!='0') {
            zbir*=10;
            zbir+=(t[i]-'0');
        }
        else {
            k+=mapa3[zbir];
            zbir=0;
        }
    }
    k+=mapa3[zbir];
    for(int i=0; i<(int)k.length(); ++i) {
        k[i]=char((k[i]-'a'+25)%26+'a');
    }
    char ch;
    int kljuc=3;
    for(int i=0; i<(int)k.length(); ++i) {
        ch=k[i];
        if(ch>='a' && ch<='z') {
            ch=ch-kljuc;
            if(ch<'a') {
                ch=ch+'z'-'a'+1;
            }
            k[i]=ch;
        }
        else if(ch>='A' && ch<='Z') {
            ch=ch-kljuc;
            if(ch<'A') {
                ch=ch+'Z'-'A'+1;
            }
            k[i]=ch;
        }
    }
    cout << "Desifrovana rec: " << k;
    return 0;
}
