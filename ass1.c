/* ---- ROCK PAPER SCISSORS LIZARD AND SPOCK GAME ---- */


#include<stdio.h>

int main()
{
//a=play or not, c=computer d= player1 against player2  b=valid moves for computer e-valid moves for player2
//f is for 1st validation
int a,b,d,c,e,f;

//c1=games played c2= won by player1 c3= won by player2 c4=won by computer tied c5=tied
int c1=0,c2=0,c3=0,c4=0,c5=0;

//w1= %won by player1 w2= %won by player2 w3= %won by computer(No initialization is requires)
int w1,w2,w3;

	printf("Do you want to play? (1 for yes, 2 for no):\n");
	scanf("%d",&f);

		 if(f>2 || f<0)
		{ printf("Please eneter valid move\n"); return(0); }

//do-while loop will repeat until it will get return
do
{
int compchoice=(rand()%5+1);

printf("Now you can quit after playing one time,,Thank you (1 for yes, 2 for no):\n");
scanf("%d",&a);
c1++;
//validating about the correct number
if(a<1 || a>2)
{ printf("Please enter valid moves,sorry try again later\n"); return(0);}
		

		//if it does not want to play it will return
		if(a==2)
		{
		c1--;
		w1=((c2*100)/c1);
		w2=((c3*100)/c1);
		w3=((c4*100)/c1);
		printf("-----------------------------------------------------------\n");
		printf("                    Statistics                             \n");
		printf("-----------------------------------------------------------\n");
		printf("Number of games played :%d\n",c1);
		printf("Numbers of games won by Player1 :%d\n",c2);
		printf("Numbers of games won by Player2 :%d\n",c3);
		printf("Numbers of games won by computer :%d\n",c4);
		printf("Numbers of games tied :%d\n",c5);
		printf("Player 1 win Percentage: %d %\n",w1);
		printf("Player 2 win Percentage:%d %\n",w2);
		printf("Computer win Percentage: %d %\n",w3);

		return(0);
		}
			else
				{
				//ask the user about playing with computer or player2
				printf("1 for with computer and 2 for playing with player2\n");
				scanf("%d",&c);
				//if it press one than with computer
				if(c==1)
				{
				printf("1)Rock\n");
				printf("2)Paper\n");
				printf("3)Scissors\n");
				printf("4)Lizard\n");
				printf("5)Spock\n");
				printf("Player 1, enter your move(1-5):\n");
				scanf("%d",&b);
	
				if(b>=6 || b==0)
				{
				printf("please insert valid move number to play\n");
				}
					else
					{
						printf("Computer move: %d\n",compchoice);
						//validating about the game
						switch(b)
						{
						//ROCK
						case 1: 
						if(compchoice==1)
						{ printf("Its a tie\n"); c5++; }
							else if(compchoice==2)
							{ printf("Computer win,you loose\n"); c4++; }
								else if(compchoice==3)
								{ printf("You win,Computer loose\n"); c2++;}
									else if(compchoice==4)
									{ printf("You win,Computer loose\n"); c2++;}
										else if(compchoice==5)
										{ printf("You loose,computer win\n "); c4++;}
							break;
						//PAPER
						case 2:
						if(compchoice==1)
						{ printf("You win,Computer loose\n"); c2++; }
							else if(compchoice==2)
							{ printf("Its a tie\n"); c5++; }
								else if(compchoice==3)
								{ printf("You loose,computer win\n"); c4++; }
									else if(compchoice==4)
									{ printf("You loose,Computer win\n"); c4++;}
										else if(compchoice==5)
										{ printf("You win,Computer loose"); c2++; }
							break;
						//SCISSORS
						case 3:
						 if(compchoice==1)
                                                { printf("You loose,computer win\n"); c4++; }
                                                        else if(compchoice==2)
                                                        { printf("You  win,computer loose\n"); c2++; }
                                                                else if(compchoice==3)
                                                                { printf("Its a tie\n"); c5++;}
                                                                        else if(compchoice==4)
                                                                        { printf("You win,Computer loose\n"); c2++;}
                                                                                else if(compchoice==5)
                                                                                { printf("You loose,computer win\n "); c4++;}
                                                        break;
						//LIZARD
						case 4:
						 if(compchoice==1)
                                                { printf("You loose,Computer win\n"); c4++; }
                                                        else if(compchoice==2)
                                                        { printf("You win,Computer loose\n"); c2++; }
                                                                else if(compchoice==3)
                                                                { printf("You loose,Computer win\n"); c4++;}
                                                                        else if(compchoice==4)
                                                                        { printf("Its a tie\n"); c5++;}
                                                                                else if(compchoice==5)
                                                                                { printf("You win,computer loose\n "); c2++;}
                                                        break;
						//SPOCK
						case 5:
						 if(compchoice==1)
                                                { printf("You win,computer loose\n"); c2++; }
                                                        else if(compchoice==2)
                                                        { printf("You loose,computer win\n"); c4++; }
                                                                else if(compchoice==3)
                                                                { printf("You win,Computer loose\n"); c2++;}
                                                                        else if(compchoice==4)
                                                                        { printf("You loose,Computer win\n"); c4++;}
                                                                                else if(compchoice==5)
                                                                                { printf("Its a tie\n "); c5++;}
                                                        break;

						default: printf("Some mistake has been made");
							 break;
						}
					}
				}
					//if it presses 2 than it has to play with player2
					if(c==2)
					{
					printf("1)Rock\n");
					printf("2)Paper\n");
					printf("3)Scissors\n");
					printf("4)Lizard\n");
					printf("5)Spock\n");
					printf("Player 1,enter your move(1-5):\n");
					scanf("%d",&d);
		
					printf("1)Rock\n");
                                        printf("2)paper\n");
                                        printf("3)Scissors\n");
                                        printf("4)Lizard\n");
                                        printf("5)Spock\n");
                                        printf("Player 2,enter you move(1-5):\n");
                                        scanf("%d",&e);

					
					if( d>=6 || d==0 || e>=6 || e==0)
					{
					printf("Sorry,Enter valid moves\n");
					}
					else
					{
				 
                                                //validating about the game
                                                switch(d)
                                                {
                                                //ROCK
                                                case 1:
                                                if(e==1)
                                                { printf("Its a tie\n"); c5++; }
                                                        else if(e==2)
                                                        { printf("Player2 win,you loose\n"); c3++; }
                                                                else if(e==3)
                                                                { printf("You win,Player2 loose\n"); c2++;}
                                                                        else if(e==4)
                                                                        { printf("You win,player2 loose\n"); c2++;}
                                                                                else if(e==5)
                                                                                { printf("You loose,player2 win\n "); c3++;}
                                                        break;
                                                //PAPER
                                                case 2:
                                                if(e==1)
                                                { printf("You win,Player2 loose\n"); c2++; }
                                                        else if(e==2)
                                                        { printf("Its a tie\n"); c5++; }
                                                                else if(e==3)
                                                                { printf("You loose,player2 win\n"); c3++; }
                                                                        else if(e==4)
                                                                        { printf("You loose,player2 win\n"); c3++;}
                                                                                else if(e==5)
                                                                                { printf("You win,Computer loose"); c2++; }
                                                        break;
						 //SCISSORS
                                                case 3:
                                                 if(e==1)
                                                { printf("You loose,player2 win\n"); c3++; }
                                                        else if(e==2)
                                                        { printf("You  win,player2 loose\n"); c2++; }
                                                                else if(e==3)
                                                                { printf("Its a tie\n"); c5++;}
                                                                        else if(e==4)
                                                                        { printf("You win,Computer loose\n"); c2++;}
                                                                                else if(e==5)
                                                                                { printf("You loose,player2 win\n "); c3++;}
                                                        break;
                                                //LIZARD
                                                case 4:
                                                 if(e==1)
                                                { printf("You loose,Player2 win\n"); c3++; }
                                                        else if(e==2)
                                                        { printf("You win,Player2 loose\n"); c2++; }
                                                                else if(e==3)
                                                                { printf("You loose,Player2 win\n"); c3++;}
                                                                        else if(compchoice==4)
                                                                        { printf("Its a tie\n"); c5++;}
                                                                                else if(compchoice==5)
                                                                                { printf("You win,player2 loose\n "); c2++;}
                                                        break;
                                                //SPOCK
                                                case 5:
                                                 if(e==1)
                                                { printf("You win,player2 loose\n"); c2++; }
                                                        else if(e==2)
                                                        { printf("You loose,player2 win\n"); c3++; }
                                                                else if(e==3)
                                                                { printf("You win,Player2 loose\n"); c2++;}
                                                                        else if(e==4)
                                                                        { printf("You loose,Player2 win\n"); c3++;}
                                                                                else if(compchoice==4)
                                                                                { printf("Its a tie\n "); c5++;}
                                                        break;

                                                default: printf("Some mistake has been made");
                                                         break;
                                                }

					}
					

					}
					
				
}
}while(a==1);

return(0);
}
