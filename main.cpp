
#include <iostream>


using namespace std;
int main()
{ int numplayer=2,in1,in2,counter=0;
	
	const int boardsize=3;
	char gameboard [boardsize][boardsize]={' ',' ',' ',' ',' ',' ',' ',' ',' '};//creates an array of character and initializes each indice of the array with empty character
	char array [boardsize];
	char column [boardsize];
	char array3 [boardsize];
	char array4 [boardsize];
	bool condition3=false;
 
  while(condition3!=true)// continue the game until one player wins
  {
	  for (int i=0;i<boardsize;i++)
	 {
		 for(int j=0;j<boardsize;j++)// the loop  runs the number of gameboards size
		 { 
			bool condition2=false;// flag that is initially false
			
			while (condition2!=true && condition3!=true )//condition that will end current loop if the flag turn out to be true
			 {
				 
			do
			{
				cout<< "please enter number of row and column where you want to put your mark "<< endl;
				cin>>in1>>in2;
			}
			while(in1>boardsize || in2>boardsize || in1<0 || in2<0);// as long as the user chooses a grid that does not exist in gameboard user will be asked to choose naothe rgrid again
			
			if(in1<boardsize && in2<boardsize && in1>=0 && in2>=0)//checks if the input number would exist in the gambeboard as a grid
			{
				
				while (condition2!=true)
				{
					if(gameboard[in1][in2]!=' ')
					{
						cerr<< " this grade is taken, please enter another pair of numbers for row and column where you want to put your mark"<<endl;//if the desired grid of player is not empty for mark then user is being asked to choose another grid}
						cout<<gameboard[0][0]<<"|"<<gameboard[0][1]<<"|"<<gameboard[0][2]<<endl;
						cout<<"_ _ _"<<endl;
						cout<<gameboard[1][0]<<"|"<<gameboard[1][1]<<"|"<<gameboard[1][2]<<endl;
						cout<<"_ _ _"<<endl;
						cout<<gameboard[2][0]<<"|"<<gameboard[2][1]<<"|"<<gameboard[2][2]<<endl;//prints the grids of the gameboard after each turn
						cin>>in1>>in2;
					}//as long as the flag does not become true , checks if the chosen grid is not empty and asks user to choose another grid
					else if(gameboard[in1][in2]==' ')// checks if the chsen gid is empty
					{	
						cout<< "you can put your mark on your desired place"<<endl;// if the grid is empty the player is allowed to make a mark on his or her desired grid
						if(counter%2==0)
						{
							cout<<"now first player makes a move"<<endl;//defines player beased on turn
							gameboard[in1][in2]='x';//defines which mark should be placed on the grid based on turn
						}
						
						else if(counter%2==1)
						{
							cout<<"now the second player makes a move"<<endl;//defines the second player based on turn
							gameboard[in1][in2]='o';//defines which mark should be placed on the grid based on turn
						}
						
						
						for (int l=0;l<boardsize;l++)
						{
							for (int h=0;h<boardsize;h++)
							{
								array[h]=gameboard[l][h];//stores elements of each row in an array
							}
							if(array[0]==array[1]&&array[1]==array[2] &&array[0]=='x')//checks the elements of array to whether 1st player won
							{
								cout<<"the first player wins"<<endl;
								condition3=true;// changes the condition 3 to stop the game
							}
							else if(array[0]==array[1]&&array[1]==array[2] &&array[0]=='o')//checks the elements of array to whether 2nd player won
							{
								cout<<"the second player wins"<<endl;
								condition3=true;
							}
						}
						
						for (int q=0;q<boardsize;q++)
						{
							for(int k=0;k<boardsize;k++)
							{
								column[k]=gameboard[k][q];//stores elements of each column in an array
								//cout<< column[k]<<endl;
								
								
							}
							
							if(column[0]==column[1]&& column[1]==column[2] && column[0]=='x')//checks the elements of array to whether 1st player won
							{
								
								cout<<"the first player wins"<<endl;
								condition3=true;
							}
							else if(column[0]==column[1]&& column[1]==column[2] && column[0]=='o')//checks the elements of array to whether 2nd player won
							
							{
								cout<<"the second player wins"<<endl;
								condition3=true;
							}
						}
							
						
						for (int x=0;x<boardsize;x++)
						{
							array3[x] = gameboard[x][x];//stores the elements of gameboard in a diagonal from top left to bottom right
							
						}
						if(array3[0]==array3[1]&& array3[1]==array3[2]&& array3[1]=='x')//checks the elements of array to whether 1st player won
						{
							cout<<"the first player wins"<<endl;
							condition3=true;
						}
						else if(array3[0]==array3[1]&&array3[1]==array3[2] &&array3[0]=='o')//checks the elements of array to whether 2nd player won
							
						{
							cout<<"the second player wins"<<endl;
							condition3=true;
						}
						for (int y=0;y<boardsize;y++)
						{
							array4[y]=gameboard[y][(boardsize-1)-y];//stores the elements of gameboard in a diagonal from top right to bottom left
						}
						if(array4[0]==array4[1]&& array4[1]==array4[2]&& array4[1]=='x')//checks the elements of array to whether 1st player won
						{
							cout<<"the first player wins"<<endl;
							condition3=true;
						}
						else if(array4[0]==array4[1]&&array4[1]==array4[2] &&array4[0]=='o')//checks the elements of array to whether 2nd player won
						
						{
							cout<<"the second player wins"<<endl;
							condition3=true;
						}
						
						
						
						counter++;// which turn of game is it
						cout<<gameboard[0][0]<<"|"<<gameboard[0][1]<<"|"<<gameboard[0][2]<<endl;
						cout<<"_ _ _"<<endl;
						cout<<gameboard[1][0]<<"|"<<gameboard[1][1]<<"|"<<gameboard[1][2]<<endl;
						cout<<"_ _ _"<<endl;
						cout<<gameboard[2][0]<<"|"<<gameboard[2][1]<<"|"<<gameboard[2][2]<<endl;//prints the grids of the gameboard after each turn
						condition2=true;
					}
						
					
					
				}
				
				{	
					
				}
				
			
	 
	 
	 
			
					
				
			}
		 
		}
	 
	 
	}
	}
			 
}
}
	













