#include <iostream>
using namespace std;

void print(int q[][3]){
  
  cout<<"_________________________"<<endl;
  cout<<"|       |       |       |"<<endl;
  cout << "|\t"<<q[0][0] << "\t" << "|\t" << q[0][1] << "\t" << "|\t" << q[0][2] << "\t|"<<endl;

   cout << "| _ _ _ | _ _ _ | _ _ _ |" << endl;
   cout<<"|       |       |       |"<<endl;
  cout <<"|\t"<<q[1][0] << "\t" << "|\t" << q[1][1] << "\t" << "|\t" << q[1][2] << "\t|"<<endl;
  cout << "| _ _ _ | _ _ _ | _ _ _ |" << endl;
  cout<<"|       |       |       |"<<endl;
  cout <<"|\t"<<q[2][0] << "\t" << "|\t" << q[2][1] << "\t" << "|\t" << q[2][2] << "\t|"<<endl;
  cout<<"|_______|_______|_______|"<<endl;
  
}


int main(){
  int q[3][3]={};
  for (int i=0; i<3; i++){
  for (int j=0; j<3; j++){
    q[i][j]= 0;
  }
  }
    print(q);
}