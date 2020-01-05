//Patricia Curry
//10/24/2019
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int size = 9;
    const char x = 'x', o = 'o';
    string str1="AAAAAAAAA";
    string winner;
    int selection_Position, i=1, loop=0;
    char selection[size] = {' ', ' ', ' ', ' ', ' ', ' ' ,' ' , ' ' ,' ' };
    cout <<
    "+---+---+---+\n| "<< selection[0] <<" | " << selection[1] << " | " << selection[2] << 
    " |\n+---+---+---+\n| "<< selection[3] <<" | " << selection[4] << " | " << selection[5] << 
    " |\n+---+---+---+\n| " << selection[6] << " | " << selection[7] << " | " << selection[8] << 
    " |\n+---+---+---+\n";
    cout << "Place X at: ";
    cin >> selection_Position;
   
    while(loop <=9){            
            
                while(((selection[selection_Position-1]=='x') || (selection[selection_Position-1]=='o')) || ((selection_Position<1) || (selection_Position >9))){
                    if((selection_Position<1) || (selection_Position >9)){
                      cout << "Invalid input! 1-9 only." << endl;
                      if(i%2==1&&loop<9)
                          cout << "Place X at: ";
                      else if(i%2==0&loop<9)
                          cout << "Place O at: ";
                      cin >> selection_Position;
                    }
                    else if((selection[selection_Position-1]!=' ')){
                      
                      cout << "Invalid input! Position alredy filled." << endl;
                      if(i%2==1&&loop<9)
                          cout << "Place X at: ";
                      else if(i%2==0&loop<9)
                          cout << "Place O at: ";
                      cin >> selection_Position; 
                    }
                   
                }
           

            if(i%2==1 && selection[selection_Position-1]==' '){ 
                selection[selection_Position-1] = x;
                loop++;
            }
            else if(i%2==0 && selection[selection_Position-1]==' '){
                selection[selection_Position-1] = o;
                loop++;
            }
            cout << 
            "+---+---+---+\n| "<< selection[0] <<" | " << selection[1] << " | " << selection[2] << 
            " |\n+---+---+---+\n| "<< selection[3] <<" | " << selection[4] << " | " << selection[5] << 
            " |\n+---+---+---+\n| " << selection[6] << " | " << selection[7] << " | " << selection[8] << " |\n+---+---+---+\n";
            i++;
            str1[selection_Position-1]=selection[selection_Position-1];

            if(str1.substr(0,3)=="xxx" || str1.substr(0,3)=="ooo"){
                winner = str1.substr(0,1); 
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(3,3)=="xxx" || str1.substr(3,3)=="ooo"){
                winner = str1.substr(3,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(6,3)=="xxx" || str1.substr(6,3)=="ooo"){
                winner = str1.substr(6,1);
                cout << "Game over - " << winner << " wins!" << endl;
                break;
 
            }
            if(str1.substr(0,1)+str1.substr(3,1)+str1.substr(6,1)=="xxx" || str1.substr(0,1)+str1.substr(3,1)+str1.substr(6,1)=="ooo"){
                winner = str1.substr(6,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(1,1)+str1.substr(4,1)+str1.substr(7,1)=="xxx" || str1.substr(1,1)+str1.substr(4,1)+str1.substr(7,1)=="ooo"){
                winner = str1.substr(7,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(2,1)+str1.substr(5,1)+str1.substr(8,1)=="xxx" || str1.substr(2,1)+str1.substr(5,1)+str1.substr(8,1)=="ooo"){
                winner = str1.substr(8,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(0,1)+str1.substr(4,1)+str1.substr(8,1)=="xxx" || str1.substr(0,1)+str1.substr(4,1)+str1.substr(8,1)=="ooo"){
                winner = str1.substr(8,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;

            }
            if(str1.substr(2,1)+str1.substr(4,1)+str1.substr(6,1)=="xxx" || str1.substr(2,1)+str1.substr(4,1)+str1.substr(6,1)=="ooo"){
                winner = str1.substr(6,1);
                cout << "Game Over - " << winner << " wins!" << endl;
                break;
            }
 
            if(winner!="x" && winner!="o"){ 
                if(i%2==1&&loop<9)
                    cout << "Place X at: ";
                else if(i%2==0&loop<9)
                    cout << "Place O at: ";
                else if(loop==9){
                    cout << "Game over - Draw " << endl;
                break;
    
                }
             }
            cin >> selection_Position;

    
            
        }
    
    return 0;   
}

