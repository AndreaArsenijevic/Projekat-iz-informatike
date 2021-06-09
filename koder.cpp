#include<bits/stdc++.h>
using namespace std;

string s, t;
unordered_map<char, string> mapa;
unordered_map<int, int> mapa2;
unordered_map<int, char> mapa3;
int main() {

    mapa['a']="12";
    mapa['b']="2111";
    mapa['c']="2121";
    mapa['d']="211";
    mapa['e']="1";
    mapa['f']="1121";
    mapa['g']="221";
    mapa['h']="1111";
    mapa['i']="11";
    mapa['j']="1222";
    mapa['k']="212";
    mapa['l']="1211";
    mapa['m']="22";
    mapa['n']="21";
    mapa['o']="222";
    mapa['p']="1221";
    mapa['q']="2212";
    mapa['r']="121";
    mapa['s']="111";
    mapa['t']="2";
    mapa['u']="112";
    mapa['v']="1112";
    mapa['w']="122";
    mapa['x']="2112";
    mapa['y']="2122";
    mapa['z']="2211";
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
   
    cout << "Unesi rec za sifrovanje: ";
    getline(cin, s);
    char ch;
    int kljuc=3;
    for(int i=0; i<(int)s.length(); ++i) {
        ch = s[i];
        if(ch>='a' && ch<='z') {
            ch=ch+kljuc;
            if(ch>'z') {
                ch=ch-'z'+'a'-1;
            }
            s[i]=ch;
        }
        else if(ch>='A' && ch<='Z'){
            ch=ch+kljuc;
            if(ch>'Z'){
                ch=ch-'Z'+'A'-1;
            }
        s[i]=ch;
        }
}
    t="";
    for(int i=0; i<(int)s.length(); ++i) {
        if(s[i]==' ') t+="0";
        else {
            t+=mapa[(tolower(s[i])+1-'a')%26+'a'];
            if(i!=(int)s.length()-1) t+="0";
        }
    }
    long long baza=1LL;
    long long rez=0LL;
    for(int i=(int)t.length()-1; i>=0; --i) {
        rez=rez+baza*(t[i]-'0');
        baza*=3LL;
    }
    baza=1LL;
    long long novi=0LL;
    while(rez>0) {
        long long cif=rez%10LL;
        rez/=10LL;
        novi+=baza*mapa2[cif];
        baza*=10LL;
    }
    cout << "Sifrovana rec: " << novi;
    return 0;
}