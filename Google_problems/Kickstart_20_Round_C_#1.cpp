#include <iostream>

using namespace std; 

int main() {

int lel;

cin >> lel;

int real[lel];

for(int j=0; j<lel; j++){
  int y;
  int z; 
  cin >> y >> z; 
  
  int ans[y]; 
  for(int i=0; i<y; i++){
    cin >> ans [i]; 
  }

  int answer=0; 

  for(int i=0; i<y; i++){
    if(ans[i]==1 && z==1){
      answer++; 
    }

    else if(ans [i]== 1 && i-z+1>=0){
      bool checker = true; 
      int a = i;
      while(checker){
        if(ans[a]+1 == ans[a-1] && ans[a]!=z){
          a = a-1; 
        }
        else{
        checker = false; 
        } 
      }
      if(ans[a]==z){
        answer++; 
      }
    } 
  }

real[j] = answer; 
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

