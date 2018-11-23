# include "iGraphics.h"
	

int start=0;
int ship_x=350, ship_y=80;
int bullet_x=395, bullet_y=90;
int x=10,y=10;
int b,random1,random2,random3,e1,e2,e3,bb,bb1,bb2;
int bullet_mode=0;
int e1_x=400,e1_y=850;
int e2_x=600,e2_y=750;
int e3_x=150,e3_y=785;
char score[1000]="0";
int count=0;
int boss1_x= 10,boss1_y=590;
int dx=3;
int  boss_bullet_x1=85 , boss_bullet_y1=620 , boss_bullet_x2=175 , boss_bullet_y2=620 ;
int life=3, boss_life=10;

int mode;
int name_box_col1, name_box_col2, name_box_col3;
char tempName[50];
int playerNum;
int namelen;

struct playerNameScore{
	char name[50];
	int score;
}player[1000000],temp;

int flag=0;


void initial()
{
	ship_x=350, ship_y=80;
	bullet_x=395, bullet_y=90;
	x=10,y=10;
	b,random1,random2,random3,e1,e2,e3,bb,bb1,bb2;
	bullet_mode=0;
	e1_x=400,e1_y=850;
	e2_x=600,e2_y=750;
	e3_x=150,e3_y=785;
	strcpy(score,"0");
	count=0;
	boss1_x= 10,boss1_y=590;
	dx=3;
	boss_bullet_x1=85 , boss_bullet_y1=620 , boss_bullet_x2=175 , boss_bullet_y2=620 ;
	life=3, boss_life=10;
	iPauseTimer(e1);
	iPauseTimer(e2);
	iPauseTimer(e3);
	iPauseTimer(bb);
	iPauseTimer(b);
	iPauseTimer(bb1);
	iPauseTimer(bb2);
}

void Mylife()
{
	if(life==3)
	{
		iShowBMP(0,0,"life.bmp");
		iShowBMP(50,0,"life.bmp");
		iShowBMP(100,0,"life.bmp");
	}
	if(life==2)
	{
		iShowBMP(0,0,"life.bmp");
		iShowBMP(50,0,"life.bmp");
		
	}
	if(life==1)
	{
		iShowBMP(0,0,"life.bmp");
		
	}
	if(life==0)
	{
		iShowBMP(0,0,"gameover.bmp");
	
	}

}


void bosslife()
{
	if(boss_life==10)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		iShowBMP(360,690,"bosslife.bmp");
		iShowBMP(432,690,"bosslife.bmp");
		iShowBMP(504,690,"bosslife.bmp");
		iShowBMP(576,690,"bosslife.bmp");
		iShowBMP(648,690,"bosslife.bmp");
	}
	else if(boss_life==9)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		iShowBMP(360,690,"bosslife.bmp");
		iShowBMP(432,690,"bosslife.bmp");
		iShowBMP(504,690,"bosslife.bmp");
		iShowBMP(576,690,"bosslife.bmp");
		
	}
	else if(boss_life==8)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		iShowBMP(360,690,"bosslife.bmp");
		iShowBMP(432,690,"bosslife.bmp");
		iShowBMP(504,690,"bosslife.bmp");
		
		
	}
	else if(boss_life==7)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		iShowBMP(360,690,"bosslife.bmp");
		iShowBMP(432,690,"bosslife.bmp");
		
	}
	else if(boss_life==6)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		iShowBMP(360,690,"bosslife.bmp");
		
	}
	else if(boss_life==5)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		iShowBMP(288,690,"bosslife.bmp");
		
	}
	else if(boss_life==4)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
		iShowBMP(216,690,"bosslife.bmp");
		
		
	}
	else if(boss_life==3)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
		iShowBMP(144,690,"bosslife.bmp");
			
	}
	else if(boss_life==2)
	{
		iShowBMP(0,690,"bosslife.bmp");
		iShowBMP(72,690,"bosslife.bmp");
	}
	else if(boss_life==1)
	{
		iShowBMP(0,690,"bosslife.bmp");	
	}
	else if(boss_life==0)
	{

		iShowBMP(0,0,"end.bmp");
		
	}
}

void mainpage()
{
	iShowBMP(0,0,"main_page.bmp");

}

void gamewindow()
{
	iShowBMP(0,0,"Mainback.bmp");

	iSetColor(255, 0, 0);
	iLine(0, 68 , 800, 68);

	Mylife();

	iShowBMPWOBGWP(bullet_x,bullet_y,"bullet.bmp",000000);
	iShowBMPWOBGWP(ship_x,ship_y,"Ship.bmp",000000);
	iShowBMP(150,10,"score_card.bmp");

	iSetColor(0,0,0);
	iText(500,30,score,GLUT_BITMAP_TIMES_ROMAN_24);

	iShowBMP(e2_x,e2_y,"t1.bmp");
	iShowBMP(e1_x,e1_y,"t2.bmp");
	iShowBMP(e3_x,e3_y,"t3.bmp");

}

void highscore()
{
	iShowBMP(0,0,"Highscore.bmp");
}


void instruction()
{
	iShowBMP(0,0,"instruction.bmp");
}

// Condition for Ship Bullet's Movement 

void bullet()
{
	bullet_y+=10;
	
	if(bullet_y>700) 
		{
			bullet_mode=0;
			bullet_x=ship_x+45;
			bullet_y=ship_y+10;
			iPauseTimer(b);
		}

}

void enemy1()
{
	
	e1_y-=1;

	if(e1_y<=80)
	{
		life--;
		e1_y=750;
		random1=rand()%3;
		
	}

	if(random1==0)
		e1_x=400;
	else if(random1==1)
		e1_x=700;
	else if(random1==2)
		e1_x=450;

	// Conditions for Bullet if it touches the enemy 1 
	
	if(bullet_x >= e1_x && bullet_x <= (e1_x+100) && bullet_y> e1_y && bullet_y< (e1_y+70) )
	{
		iShowBMP(e1_x,e1_y,"Fire.bmp");
		count++;
		e1_y=850;
		bullet_y=80;
		bullet_x=ship_x+35;
		bullet_mode=0;
		sprintf(score,"%d",count);
		iPauseTimer(b);
		random1=rand()%3;

	}

	// Conditions for enemy 1 if it touches the Ship

	if(e1_x>=(ship_x-80) && e1_x <= (ship_x+80) && e1_y <= (ship_y+100) ) 
	{
		iShowBMP(ship_x,ship_y,"Fire.bmp");
		life--;
		e1_y=850;
		random1=rand()%3;

	}

	
}


void enemy2()
{
	
	e2_y-=2;

	if(e2_y<=80)
	{
		life--;
		e2_y=850;
		random2=rand()%3;
		
	}

	if(random2==0)
		e2_x=550;
	else if(random2==1)
		e2_x=200;
	else if(random2==2)
		e2_x=100;

	// Conditions for bullet if it touches enemy 2 

	if(bullet_x > e2_x && bullet_x<(e2_x+100) && bullet_y> e2_y && bullet_y< (e2_y+70) )
	{
		iShowBMP(e2_x,e2_y,"Fire.bmp");
		count++;
		e2_y=750;
		bullet_y=80;
		bullet_x=ship_x+35;
		bullet_mode=0;
		sprintf(score,"%d",count);
		iPauseTimer(b);
		random2=rand()%3;

	}

	// Conditions for enemy 2 if it touches the Ship 

	if(e2_x>=(ship_x-80) && e2_x <= (ship_x+80) && e2_y <= (ship_y+100) ) 
	{
		iShowBMP(ship_x,ship_y,"Fire.bmp");
		life--;
		e2_y=750;
		random2=rand()%3;

	}


}

void enemy3()
{
	
	e3_y-=3;
	if(e3_y<=80)
	{
		life--;
		e3_y=780;
		random3=rand()%3;		
	}
	if(random3==0)
		e3_x=150;
	else if(random3==1)
		e3_x=50;
	else if(random3==2)
		e3_x=350;

	// Conditions for bullet if it touches enemy 3 
	
	if(bullet_x > e3_x && bullet_x<(e3_x+100) && bullet_y> e3_y && bullet_y< (e3_y+70) )
	{
		iShowBMP(e3_x,e3_y,"Fire.bmp");
		count++;
		e3_y=780;
		bullet_y=80;
		bullet_x=ship_x+35;
		bullet_mode=0;
		sprintf(score,"%d",count);
		iPauseTimer(b);
		random3=rand()%3;
	}

	// Conditions for enemy 3 if it touches the Ship
	
	if(e3_x>=(ship_x-80) && e3_x <= (ship_x+80) && e3_y <= (ship_y+100) ) 
	{
		iShowBMP(ship_x,ship_y,"Fire.bmp");
		life--;
		e3_y=785;
		random2=rand()%3;

	}

}


void boss1()
{
	boss1_x+=dx;

	if(boss1_x <=5 || boss1_x >= 545)
		dx=-dx;

	// condiotions for bullet if it touches the boss

	if(bullet_x > boss1_x && bullet_x<(boss1_x+250) && bullet_y> boss1_y && bullet_y< (boss1_y+100) )
	{
		iShowBMP(boss1_x,boss1_y,"Fire.bmp");
		count++;
		boss_life--;
		bullet_y=80;
		bullet_x=ship_x+35;
		bullet_mode=0;
		sprintf(score,"%d",count);
		iPauseTimer(b);
	}
	
}

// For boss bullet 1

void b1()
{
	
    boss_bullet_y1 -= 5;

	if(boss_bullet_y1 < 55) 
	{
		boss_bullet_x1 = boss1_x+75;
		boss_bullet_y1 = 620;
	}

	// Conditions for boss bullet 1 if it touches the ship

	if(boss_bullet_x1 > ship_x && boss_bullet_x1<(ship_x+100) && boss_bullet_y1> ship_y && boss_bullet_y1< (ship_y+120) )
	{
		iShowBMP(ship_x,ship_y,"Fire.bmp");
		life--;
		boss_bullet_x1 = boss1_x+75;
		boss_bullet_y1 = 620;
	}

}

// For boss bullet 2

void b2()
{
	
    boss_bullet_y2 -= 5;

	if(boss_bullet_y2 <55) 
	{
		boss_bullet_x2 = boss1_x+175;
		boss_bullet_y2 = 620;
	}

	// Conditions for boss bullet 2 if it touches the ship

	if(boss_bullet_x2 > ship_x && boss_bullet_x2<(ship_x+100) && boss_bullet_y2> ship_y && boss_bullet_y2< (ship_y+120) )
	{
		iShowBMP(ship_x,ship_y,"Fire.bmp");
		life--;
		boss_bullet_x2 = boss1_x+175;
		boss_bullet_y2 = 620;
	}

}

void nameBox()
{

	iShowBMP(0,0,"Black.bmp");
	iSetColor(100,100,100);
	iText(320,400,"Enter Your Name",GLUT_BITMAP_TIMES_ROMAN_24);
	iRectangle(250,350,300,30);
	iSetColor(100,100,100);
	iText(230, 300, "Click to activate the box, enter to finish.");

}


void highscorePage()
{
	FILE *fp,*fp1;
	int i,y=350,val;
	char name[100],score[100];
	iShowBMP(0,0,"Highscore.bmp");
	
	fp=fopen("finalscore.txt","r");
	if((fscanf(fp,"%s %d",&name,&val))!=EOF)
	{
		iSetColor(255,255,255);
		fp1=fopen("playerNumber.txt","r");
		fscanf(fp1,"%d",&playerNum);
		fclose(fp1);
		iText(100,400,"Name");
		iText(300,400,"Score");

		if(playerNum>5)
		{
			sprintf(score,"%d",val);
			iText(100,y,name,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(300,y,score,GLUT_BITMAP_TIMES_ROMAN_24);
			y-=50;
			for(i=0;i<4;i++)
			{
				
				fscanf(fp,"%s %d",&name,&val);
				sprintf(score,"%d",val);
				iText(100,y,name,GLUT_BITMAP_TIMES_ROMAN_24);
				iText(300,y,score,GLUT_BITMAP_TIMES_ROMAN_24);
				y-=50;
				
			}
		}

		else
		{
			sprintf(score,"%d",val);
			iText(100,y,name,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(300,y,score,GLUT_BITMAP_TIMES_ROMAN_24);
			y-=50;
			for(i=0;i<playerNum-1;i++)
			{
				fscanf(fp,"%s %d",&name,&val);
				sprintf(score,"%d",val);
				iText(100,y,name,GLUT_BITMAP_TIMES_ROMAN_24);
				iText(300,y,score,GLUT_BITMAP_TIMES_ROMAN_24);
				y-=50;
		
			}
		}
	}

	else
	{
		iSetColor(255,255,255);
		iText(250,450,"You Are 1st Player",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	fclose(fp);

}


void iDraw()
{
	iClear();

	if(start==0)
		mainpage();

	else if(start==1)
		{
			gamewindow();

			if(count>=30)
			{
				iShowBMP(boss_bullet_x1,boss_bullet_y1,"boss_bullet_1.bmp");
				iShowBMP(boss_bullet_x2,boss_bullet_y2,"boss_bullet_3.bmp");
				iShowBMPWOBGWP(boss1_x,boss1_y,"Boss1.bmp",000000);

				bosslife();
				
				iResumeTimer(bb);
				iResumeTimer(bb1);
				iResumeTimer(bb2);

				e1_x=400,e1_y=850;
				e2_x=600,e2_y=750;
				e3_x=150,e3_y=785;

				iPauseTimer(e1);
				iPauseTimer(e2);
				iPauseTimer(e3);

			}

			if(life==0)
			{
				iPauseTimer(b);
				iPauseTimer(e1);
				iPauseTimer(e2);
				iPauseTimer(e3);
				iPauseTimer(bb);
				iPauseTimer(bb1);
				iPauseTimer(bb2);
				iShowBMP(0,0,"gameover.bmp");

			}

		}

	else if(start==2)
		highscorePage();

	else if(start==3)
		instruction();

	if(flag==1){

		nameBox();
		if(mode == 1)
		{
			iSetColor(255, 255, 255);
			iText(255,360,tempName);
		}
	}
}


void iMouseMove(int mx, int my)
{

}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// Condiotions for the Play Button 

		if(mx>=20 && mx<=160 && my >=222 && my<=300 && start ==0)
		{
				iResumeTimer(e1);
				iResumeTimer(e2);
				iResumeTimer(e3);
				start=1;
		}

		// Condiotions for the HighScore Button 

		else if(mx>=20 && mx<=340 && my >=40 && my<=115 && start ==0)
			start =2;

		// Condiotions for the Instruction Button 

		else if(mx>=20 && mx<=360 && my >=125 && my<=210 && start ==0)
			start=3;

		// Condiotions for the Exit Button 
		
		else if (mx>=624 && mx<= 800 && my>= 10 && my<=110 && start==0)
			exit(0);



		// Conditions for the Back and Next Button Option 


		//From instruction to Main Page
		if (mx>=624 && mx<= 800 && my>= 10 && my<=110 && start==3)
			start=0;

		//From High Score to Main Page
		else if (mx>=624 && mx<= 800 && my>= 10 && my<=110 && start==2)
			start=0;

		//From Game window to Main Page
		else if (mx>=624 && mx<= 800 && my>= 10 && my<=110 && start==1)
			flag=1;

		

		if(mx>=252 && mx<=548 && my>=348 && my<=378 && start==1)
		{
			mode=1;
			name_box_col1=255; name_box_col2=255; name_box_col3=255;
		}

		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

void iPassiveMouseMove(int mx,int my)
{
	
}

void writeAfterSort(int n)
{
	int i;
	FILE *fp;
	fp=fopen("finalscore.txt","w");
	if(n>5)
	{
		for(i=0;i<5;i++)
		{
			fprintf(fp,"%s\t%d\n",player[i].name,player[i].score);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			fprintf(fp,"%s\t%d\n",player[i].name,player[i].score);
		}
	}

	fclose(fp);

}


void scoreSort()
{
	FILE *fp;
	int i=0,j,k;
	fp=fopen("playerNameList.txt","r");
	while((fscanf(fp,"%s %d",&player[i].name,&player[i].score))!=EOF)
		i++;
	fclose(fp);

	fp=fopen("playerNumber.txt","w");
		fprintf(fp,"%d",i);
	fclose(fp);

	for(j=0;j<(i-1);j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(player[k].score>player[j].score)
			{
				temp=player[j];
				player[j]=player[k];
				player[k]=temp;
			}
		}
	}

	writeAfterSort(i);
}

void iKeyboard(unsigned char key)
{

	FILE *fp;
	if(mode == 1)
	{
		if(key == '\r')
		{
			name_box_col1=100; name_box_col2=100; name_box_col3=100;

			fp = fopen("playerNameList.txt","a");
			fprintf(fp,"%s\t%d\n",tempName,count);
			fclose(fp);
			playerNum++;
			start=0;
			mode=0;
			flag=0;
			scoreSort();
			initial();
		}
		else if(key == 8)
		{
			namelen--;
			tempName[namelen] = 0;
		}
		else
		{
			
			tempName[namelen] = key;
			namelen++;
			
		}
	}
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}

	if(key == GLUT_KEY_LEFT)
	{
		
		ship_x -= 15;
		
		if(ship_x<=0)
		{
			ship_x=0;
		}

		if(bullet_mode==0)
		{
			bullet_x-=15;
			if(bullet_x<=35)
				bullet_x=35;

		}
	}

	if(key == GLUT_KEY_RIGHT)
	{
		
		ship_x += 15;
		
		if(ship_x>=700)
		{
			ship_x=700;	
		}

		if(bullet_mode==0)
		{
			bullet_x+=15;
			if(bullet_x>=735)
				bullet_x=735;
		}

	}

	if(key == GLUT_KEY_UP)
	{
		iResumeTimer(b);
		bullet_mode=1;
	}
	
}

int main()
{

	b=iSetTimer(10,bullet);
	e1=iSetTimer(20,enemy1);
	e2=iSetTimer(20,enemy2);
	e3=iSetTimer(20,enemy3);
	bb=iSetTimer(10,boss1);
	bb1=iSetTimer(10,b1);
	bb2=iSetTimer(10,b2);
	iPauseTimer(e1);
	iPauseTimer(e2);
	iPauseTimer(e3);
	iPauseTimer(bb);
	iPauseTimer(b);
	iPauseTimer(bb1);
	iPauseTimer(bb2);

	iInitialize(800, 700, "Earth Invaders");
	return 0;

}	