#include <bits/stdc++.h>

using namespace std; 


bool solver(int x) 
{   
  long double sr = sqrt(x); 
  
  return ((sr - floor(sr)) == 0); 
} 

int main() {



int lel;

cin >> lel;

int real[lel];


for(int i=0; i<lel; i++){
  int answer=0;
  int a; 
  cin >> a;
  int ans[a];
  for(int l=0; l<a; l++){
    cin>>ans[l];
  }

  int d=0;
  int e=0;
  int counter=0; 
  while (d<a){
    for(int j=d; j<e+1; j++){ 
      counter += ans[j];
    }
    if(solver(fuck)){
      answer = answer+1;     
    }
    counter = 0; 
    if(e==a-1){
      d++;
      e = d; 
    } 
    else{
    e++; 
    }
  }
  real[i] = answer; 
  answer = 0;  
}




for(int i=0; i<lel; i++){
int g = i+1; 
  if(i<lel-1){
    cout<<"Case #"<<g<<":";
    cout<<" "<<real[i]<<"\n";
  }
  else{
    cout<<"Case #"<<g<<":";
    cout<<" "<<real[i];
  }
}

}

