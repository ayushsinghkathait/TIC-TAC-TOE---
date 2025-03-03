#include <iostream>
using namespace std;
 const char playerX='X';

const char playerO='O';
char currentplayer=playerX;
int r =-1;
int c=-1;
char winner=' ';
 char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}
     
                };
                
                
int main(){
    for(int i=0;i<9;i++){
     cout<<"  |   |   "<<endl;
     cout<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;  
        cout<<"__|___|__ "<<endl;
        cout<<"  |   |   "<<endl;
     cout<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;  
  
      cout<<"__|___|__ "<<endl;
      cout<<"  |   |       "<<endl;
     
     cout<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
       cout<<"  |   |   "<<endl;
 if(winner!=' '){
     break;
 }
     cout<<"current player is  :  "<<currentplayer<<endl;
      while(true){
          cout<<"enter  row and column between (0-2) to select tile  :"<<endl;
          cin>>r>>c;
          if(r>2 or r<0 or c>2 or c<0){
              cout<<"invalid input try again : "<<endl;
          }
          else if(board[r][c]!=' '){
              cout<<"this tile is full try again "<<endl;
          }
          else {
              break;
          }
          cin.clear();
          cin.ignore(1000000,'\n');
          
      }
      board[r][c]=currentplayer;
      currentplayer=(currentplayer==playerX)?playerO:playerX;
      for(int i=0;i<3;i++){
          if(board[i][0]!=' '&&board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
              winner=board[r][c];
              cout<<"winner is "<<winner<<endl;
          }
      }
      
      
      for(int i=0;i<3;i++){
          if(board[0][i]!=' '&&board[0][i]==board[1][i]&&board[1][i]==board[2][i]){
              winner=board[r][c];
              cout<<"winner is "<<winner<<endl;
          }
      }
      if (board[0][0]!=' '&&board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
          winner=board[0][0];
          cout<<"winner is "<<winner<<endl;
          
      }
    
    if (board[0][2]!=' '&&board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
          winner=board[0][2];
          cout<<"winner is "<<winner<<endl;
          
      }
    }
   if (winner!=' '){
       cout<<"  ";
   }
   else{
       cout<<"tie";
   }
    
    
    return 0;
}