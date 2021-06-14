#include<iostream>
#include <fstream>
#include<math.h>
 
using namespace std;

void primesfinder(int& p, int& q, int n){
for(int i = 2; i < n; ++i){
  if((n % i) == 0){
    p = i;
    q = n/p;
  }
  }
}


int modulo(int c, int d, int n){
  if (c == 0){
    c = 2;
  }
    long long x=1, y=c; 
    while (d > 0) {
        if (d%2 == 1) {
            x = (x*y) % n; 
        }
        y = (y*y) % n; 
        d /= 2;
    }
    return x % n;
}


int d_finder(int phi, int e){
  for (int k = 1; k < 100000; ++k){
  for (int i = 1; i < 100000; ++i){
    if ((i*e) == (1 + (k*phi))){
      return i;
    }
  }
  }
  return -1;
}
 
int main(){
ifstream inFS;
int filenumber;

int e;
int n;
   cout << "Enter a public key: e & n with a space between:" <<endl;
   cin >> e;
   cin >> n;
int p = 0;
int q = 0;
int d;
int totient;
//int k = 4;
int input;
int m;
int c;

primesfinder(p,q,n);
totient = (p-1)*(q-1);

//d = (1 + (k*totient))/e;
d = d_finder(totient, e);
char ch;
cout << "Encrypt(e) or decrypt(d)" << endl;
cin >> ch;

if (ch == 'e'){
inFS.open("Encrypt.txt");
ofstream outFS;
outFS.open("EncryptOutput.txt");
while (inFS.get(ch)) {
       //inFS.get(ch);
      if(ch == 'A'){
        m = 2;
      }
      else if (ch == 'B'){
        m = 3;
      }
      else if (ch == 'C'){
        m = 4;
      }
      else if (ch == 'D'){
        m = 5;
      }
      else if (ch == 'E'){
        m = 6;
      }
      else if (ch == 'F'){
        m = 7;
      }
      else if (ch == 'G'){
        m = 8;
      }
      else if (ch == 'H'){
        m = 9;
      }
      else if (ch == 'I'){
        m = 10;
      }
      else if (ch == 'J'){
        m = 11;
      }
      else if (ch == 'K'){
        m = 12;
      }
      else if (ch == 'L'){
        m = 13;
      }
      else if (ch == 'M'){
        m = 14;
      }
      else if (ch == 'N'){
        m = 15;
      }
      else if (ch == 'O'){
        m = 16;
      }
      else if (ch == 'P'){
        m = 17;
      }
      else if (ch == 'Q'){
        m = 18;
      }
      else if (ch == 'R'){
       m = 19 ;
      }
      else if (ch == 'S'){
        m = 20;
      }
      else if (ch == 'T'){
        m = 21;
      }
      else if (ch == 'U'){
        m = 22;
      }
      else if (ch == 'V'){
        m = 23;
      }
      else if (ch == 'W'){
        m = 24;
      }
      else if (ch == 'X'){
        m = 25;
      }
      else if (ch == 'Y'){
        m = 26;
      }
      else if (ch == 'Z'){
        m = 27;
      }
      else if (ch == ' '){
        m = 28;
      }
     if(m == n){
       c = 1;
     } 
     else{
      c = modulo(m,e,n);
     }
     outFS << c << " ";
   }
inFS.close();
outFS.close();
}
else if (ch == 'd'){
inFS.open("Decrypt.txt");
ofstream outFS;
outFS.open("DecryptOutput.txt");
while (inFS >> input) {
       //inFS >> input;
       m = modulo(input,d,n);
      if(m == 2){
        ch = 'A';
      }
      else if (m == 3){
        ch = 'B';
      }
      else if (m == 4){
        ch = 'C';
      }
      else if (m == 5){
        ch = 'D';
      }
      else if (m == 6){
        ch = 'E';
      }
      else if (m == 7){
        ch = 'F';
      }
      else if (m == 8){
        ch = 'G';
      }
      else if (m == 9){
        ch = 'H';
      }
      else if (m == 10){
        ch = 'I';
      }
      else if (m == 11){
        ch = 'J';
      }
      else if (m == 12){
        ch = 'K';
      }
      else if (m == 13){
        ch = 'L';
      }
      else if (m == 14){
        ch = 'M';
      }
      else if (m == 15){
        ch = 'N';
      }
      else if (m == 16){
        ch = 'O';
      }
      else if (m == 17){
        ch = 'P';
      }
      else if (m == 18){
        ch = 'Q';
      }
      else if (m == 19){
        ch = 'R';
      }
      else if (m == 20){
        ch = 'S';
      }
      else if (m == 21){
        ch = 'T';
      }
      else if (m == 22){
        ch = 'U';
      }
      else if (m == 23){
        ch = 'V';
      }
      else if (m == 24){
        ch = 'W';
      }
      else if (m == 25){
        ch = 'X';
      }
      else if (m == 26){
        ch = 'Y';
      }
      else if (m == 27){
        ch = 'Z';
      }
      else if (m == 28){
        ch = ' ';
      }
     outFS << ch;
   }
inFS.close();
outFS.close();
}
 return 0;
}

