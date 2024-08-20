#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print(int q[][3][9]){
for (int i=0; i<3; i++){
cout<<"_________________________________________________________________________"<<endl;
  cout<<"|       |       |       ||      |       |       ||      |       |       |"<<endl;
  cout << "|\t"<<q[i][0][0] << "\t" << "|\t" << q[i][0][1] << "\t" << "|\t" << q[i][0][2] << "\t|"<<"|\t"<<q[i][0][3]<< "\t" << "|\t"<< q[i][0][4] << "\t" << "|\t" << q[i][0][5] << "\t|"<<"|\t"<<q[i][0][6] << "\t" << "|\t" << q[i][0][7] << "\t" << "|\t" << q[i][0][8]<<"\t|"<<endl;

   cout << "| _ _ _ | _ _ _ | _ _ _ ||_ _ _ | _ _ _ | _ _ _ ||_ _ _ | _ _ _ | _ _ _ |" << endl;
   cout<<"|       |       |       ||      |       |       ||      |       |       |"<<endl;
  cout << "|\t"<<q[i][1][0] << "\t" << "|\t" << q[i][1][1] << "\t" << "|\t" << q[i][1][2] << "\t|"<<"|\t"<<q[i][1][3] << "\t" << "|\t" << q[i][1][4] << "\t" << "|\t" << q[i][1][5] << "\t|"<<"|\t"<<q[i][1][6] << "\t" << "|\t" << q[i][1][7] << "\t" << "|\t" << q[i][1][8]<<"\t|"<<endl;
   cout << "| _ _ _ | _ _ _ | _ _ _ ||_ _ _ | _ _ _ | _ _ _ ||_ _ _ | _ _ _ | _ _ _ |" << endl;
   cout<<"|       |       |       ||      |       |       ||      |       |       |"<<endl;
  cout << "|\t"<<q[i][2][0] << "\t" << "|\t" << q[i][2][1] << "\t" << "|\t" << q[i][2][2] << "\t|"<<"|\t"<<q[i][2][3] << "\t" << "|\t" << q[i][2][4] << "\t" << "|\t" << q[i][2][5] << "\t|"<<"|\t"<<q[i][2][6] << "\t" << "|\t" << q[i][2][7] << "\t" << "|\t" << q[i][2][8]<<"\t|"<<endl;
  cout<<"|_______|_______|_______||______|_______|_______||______|_______|_______|"<<endl;
cout<<"|_______|_______|_______||______|_______|_______||______|_______|_______|"<<endl;
 }
}

void version(int q[][3][9], int c[][3][9], int n){
  if (n==1){
    q[0][0][0]= 8;
    q[0][0][5]=5;
    q[0][1][1]=7;
    q[0][1][3]=9;
    q[0][1][7]=4;
    q[0][2][2]=9;
    q[0][2][4]=7;
    q[0][2][5]=8;
    q[0][2][6]=3;
    q[0][2][7]=2;
    q[0][2][8]=5;
    q[1][0][0]= 3;
    q[1][0][2]= 1;
    q[1][0][4]= 9;
    q[1][0][7]= 5;
    q[1][1][2]= 6;
    q[1][1][6]= 1;
    q[1][2][1]= 9;
    q[1][2][4]= 3;
    q[1][2][6]= 6;
    q[1][2][8]= 2;
    q[2][0][0]= 2;
    q[2][0][1]= 8;
    q[2][0][2]= 3;
    q[2][0][3]= 6;
    q[2][0][4]= 5;
    q[2][0][6]= 7;
    q[2][1][1]= 1;
    q[2][1][5]= 2;
    q[2][1][7]= 8;
    q[2][2][3]= 1;
    q[2][2][8]= 9;
  }
    
  else if (n==2) {
   q[0][0][1]= 2; 
   q[0][0][4]= 8; 
   q[0][0][7]= 7;
   q[0][1][0]= 4; 
   q[0][1][1]= 7; 
   q[0][1][5]= 9;
   q[0][2][5]= 3; 
   q[0][2][6]= 5;
   q[0][2][7]= 2;
   q[1][0][1]= 9;
   q[1][0][2]= 2;
   q[1][0][3]= 3;
   q[1][0][6]= 1;
   q[1][1][1]= 1;
   q[1][1][4]= 7; 
   q[1][1][7]= 3; 
   q[1][1][8]= 5; 
   q[1][2][2]= 7;
   q[1][2][3]= 9;
   q[1][2][5]= 5;
   q[1][2][6]= 6;
   q[2][0][0]= 7;
   q[2][0][2]= 4;
   q[2][0][6]= 2;
   q[2][0][8]= 6;
   q[2][1][3]= 6;
   q[2][1][4]= 3;
   q[2][1][5]= 4;
   q[2][2][0]= 6;
   q[2][2][4]= 9;
   q[2][2][7]= 5;
   q[2][2][8]= 3;
  }
  else if (n==3){
    q[0][0][2]= 6;
    q[0][0][3]= 5;
    q[0][1][0]= 7;
    q[0][1][2]= 5;
    q[0][1][5]= 2;
    q[0][1][6]= 3;
    q[0][2][1]= 3;
    q[0][2][7]= 8;
    q[1][0][1]= 5;
    q[1][0][4]= 9;
    q[1][0][5]= 6;
    q[1][0][7]= 7;
    q[1][1][0]= 1;
    q[1][1][2]= 4;
    q[1][1][8]= 8;
    q[1][2][3]= 8;
    q[1][2][4]= 2;
    q[2][0][1]= 2;
    q[2][0][7]= 9;
    q[2][1][2]= 7;
    q[2][1][3]= 2;
    q[2][1][5]= 4;
  }

  //put values in copy
  for (int x=0; x<3; x++){
    for (int i=0; i<3; i++){
    for (int j=0; j<9; j++){
      c[x][i][j]= q[x][i][j];
    }
    }
    }
} 

bool isfilled (int q[][3][9]){
  for (int x=0; x<3; x++){
    for (int y=0; y<3; y++){
      for (int z=0; z<9; z++){
        if (q[x][y][z] !=0) {
        return false;
        }
      }
    }
  }
  return true;
}

bool ok(q[][3][9], int b, int r, int c, int n){
  if ((int b<0 || b>2) || (int r<0 || r>2)){
    cout<<"Rectanble/ row number not valid. Must be between 0-2"<<endl;
    return false;
  }
  else if( c<0 || c>8){
    cout<"column number not valid. Must be between 0-8"<<endl;
    return false;
  }
  else if (n<1 || n>9){
    cout<<"number not valid. Please enter numbers between 1-9"<<endl;
    return false;
  }
  //checks if the position is empty
  else if (q[b][r][c] != 0){
    cout<<"position taken"<<endl;
    return false;
  }
else{
  q[b][r][c]=n;
}
  // row check
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
    if (q[b][r][c]== q[i][j][c]){
      return false;
    }
    }
  }
  //column check
  for (int j=0; j<9; j++){
    if ((q[b][r][c]== q[b][r][j])){
      return false;
    }
  }
  // 3 x 3 check
  for (int x=r-(; x++){
    
  }
  }
}
int main(){
  int copy [3][3][9]; //makes the initials values constant so it cannot be modified
  int v=0;
  int rectangle=0;
  int row=0;
  int column=0;
  int num=0;
  
  int q[3][3][9];
  for (int x=0; x<3; x++){
  for (int i=0; i<3; i++){
  for (int j=0; j<9; j++){
    q[x][i][j]= 0;
    copy[x][i][j]= 0;
  }
  }
  }
    srand(static_cast<unsigned int>(time(0)));
    v= (rand () %3) +1;
    version(q,copy, v);
    print(q);

  //Welcome Message
  cout<<"Welcome to this Soduku game! your job is to fill up this board using numbers from 1 to 9 without repeating in the column or row and the 3 x 3 grid. use the number '10' anytime you want to erase one of your input.Lets begin!"<<endl;
cout<<endl;

  //input
  cout<<" Enter the row of one of the three rectangle, then specify the row and colum you want to put in"<<endl;
  while (!isfilled(q)){
    cout<<"rectangle: ";
    cin>>rectangle;
    cout<<"row";
    cin>>row;
    cout<<"column: ";
    cin>>column;
    cout<<endl;
    cout<<"now enter the number you want to put in";
    cin>>num;
    cout<<endl;

    //checks and puts input
    if()
    
  }
  
}