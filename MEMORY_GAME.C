#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void display();
void life();
void insert();
void end();
void option(int);

int count=0,c=0,chance=8,i,flag1,flag2,f[9],points1[]={350,90,370,70,390,90,390,120,350,120,350,90},points2[]={450,390,470,370,490,390,490,420,450,420,450,390},
polys1[]={140,260,200,260,200,320,140,320,140,260},
polys2[]={440,260,500,260,500,320,440,320,440,260},
polyt1[]={440,120,470,60,500,120,440,120},
polyt2[]={240,420,270,360,300,420,240,420};

void life()
{
      int j;

       if(chance==5)
       {
		for(i=400;i>=60;i=i-20)
		{

			cleardevice();
			circle(600,i,30);
			line(570,10,630,10);
			line(600,10,600,30);
			delay(100);
		}

	}
	else if(chance==4)
	{
		for(i=290,j=370;i>=90,j>=170;i=i-20,j=j-20)
		{

			cleardevice();
			circle(600,60,30);
			line(570,10,630,10);
			line(600,10,600,30);
			line(600,i,600,j);
			delay(100);
		}

	}
	else if(chance==3)
	{
		for(i=410;i>=110;i=i-20)
		{

			cleardevice();

			circle(600,60,30);
			line(570,10,630,10);
			line(600,10,600,30);
			line(600,170,600,90);
			line(560,i,640,i);
			delay(100);
		}
	}
	else if(chance==2)
	{
		for(i=420,j=370;i>=220,j>=170;i=i-20,j=j-20)
		{

			cleardevice();

			circle(600,60,30);
			line(570,10,630,10);
			line(600,10,600,30);
			line(600,170,600,90);
			line(560,110,640,110);
			line(560,i,600,j);
			line(640,i,600,j);
			delay(100);
		}

	}
	 else if(chance==1)
	 {
		circle(570,80,30);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		line(600,170,640,220);
		line(600,170,560,220);
		delay(1000);
		end();
	 }
}
void lifeavailable()
{
	switch(chance)
	{
	case 5:
		circle(600,60,30);
		line(570,10,630,10);
		line(600,10,600,30);
		break;
	case 4:
		circle(600,60,30);
		line(570,10,630,10);
		line(600,10,600,30);
		line(600,170,600,90);
		break;
	case 3:
		circle(600,60,30);
		line(570,10,630,10);
		line(600,10,600,30);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		break;
	case 2:
		line(570,10,630,10);
		line(600,10,600,30);
		circle(600,60,30);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		line(600,170,640,220);
		line(600,170,560,220);
		break;
	case 1:
		circle(570,80,30);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		line(600,170,640,220);
		line(600,170,560,220);
		break;
	}
}

 void display()
 {
	     int x,y;
	     char n[17];


	for(x=120;x<=520;x=x+100)
	{
		line(x,40,x,440);
	}
	for(x=40;x<=440;x=x+100)
	{
		line(120,x,520,x);
	}

	outtextxy(125,45,"a");
	outtextxy(225,45,"b");
	outtextxy(325,45,"c");
	outtextxy(425,45,"d");
	outtextxy(125,145,"e");
	outtextxy(225,145,"f");
	outtextxy(325,145,"g");
	outtextxy(425,145,"h");
	outtextxy(125,245,"i");
	outtextxy(225,245,"j");
	outtextxy(325,245,"k");
	outtextxy(425,245,"l");
	outtextxy(125,345,"m");
	outtextxy(225,345,"n");
	outtextxy(325,345,"o");
	outtextxy(425,345,"p");


	for(i=1;i<=c;i++)
	{
		option(f[i]);
	}

}


void insert()
{
	int n[17],choice;

	printf("Find the matching pairs,\n The last 6 chances will be shown by hangman\n");
	do
	{


		choice=getch();
		while(choice<97||choice>113)
		{
			outtext("Select an available tile\n");
			choice=getch();
		}

		count++;
		switch(choice)
		{
		case 102:
			circle(270,190,20);
			flag1=1;

			break;

		case 107:
			circle(370,290,20);
			flag2=1;


			break;

		case 106:
			arc(270,290,90,270,20);
			flag1=2;

			break;
		case 103:
			arc(370,190,90,270,20);
			flag2=2;

			break;
		case 97:
			line(150,90,190,90);
			line(150,90,170,70);
			line(170,70,190,90);
			flag1=3;
			break;
		case 111:
			line(350,390,390,390);
			line(350,390,370,370);
			line(370,370,390,390);
			flag2=3;

			break;
		case 98:
			line(240,120,240,60);
			line(240,120,300,120);
			line(300,120,300,60);
			line(300,60,240,60);
			flag1=4;

			break;

		case 101:
			line(140,220,140,160);
			line(140,220,200,220);
			line(200,160,140,160);
			line(200,160,200,220);
			flag2=4;

			break;
		case 99:

			drawpoly(6,points1);
			flag1=5;

			break;
		case 112:
			drawpoly(6,points2);
			flag2=5;

			break;
		case 104:
			setfillstyle(SLASH_FILL,WHITE);

		       circle(470,190,20);
		       floodfill(470,190,WHITE);
		       flag1=6;

			break;
		case 109:
			setfillstyle(SLASH_FILL,WHITE);

			circle(170,390,20);
			floodfill(170,390,WHITE);
			flag2=6;

			break;
		case 105:

			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(5,polys1);
			flag1=7;

			break;

		case 108:
			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(5,polys2);
			flag2=7;

			break;
		case 100:
			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(4,polyt1);
			flag1=8;

			break;
		case 110:
			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(4,polyt2);
			flag2=8;

			break;

		}


		if(count%2==0)
		{

			if(flag1!=flag2)
			{
				chance--;
				delay(500);
				cleardevice();
				life();
				display();
			}
			else
			{
				c++;
				f[c]=flag1;
				cleardevice();
				lifeavailable();
				display();

			}


		}
	}

	while(choice!=113);

}

void option(int flag)
{

	switch(flag)
	{
		case 1:

			circle(270,190,20);
			circle(370,290,20);

			break;

		case 2:
			arc(270,290,90,270,20);
			arc(370,190,90,270,20);

			break;
		case 3:
			line(150,90,190,90);
			line(150,90,170,70);
			line(170,70,190,90);
			line(350,390,390,390);
			line(350,390,370,370);
			line(370,370,390,390);

			break;
		case 4:
			line(240,120,240,60);
			line(240,120,300,120);
			line(300,120,300,60);
			line(300,60,240,60);
			line(140,220,140,160);
			line(140,220,200,220);
			line(200,160,140,160);
			line(200,160,200,220);

			break;
		case 5:
			drawpoly(6,points1);
			drawpoly(6,points2);

			break;
		case 6:
			setfillstyle(SLASH_FILL,WHITE);
			circle(470,190,20);
			floodfill(470,190,WHITE);
			circle(170,390,20);
			floodfill(170,390,WHITE);


			break;
		case 7:
			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(5,polys1);
			fillpoly(5,polys2);


			break;
		case 8:
			setfillstyle(SLASH_FILL,WHITE);
			fillpoly(4,polyt1);
			fillpoly(4,polyt2);

			break;
	}
	if(c==8)
	{
		end();
	}

}

void end()
{
	cleardevice();
	settextstyle(BOLD_FONT,HORIZ_DIR,5);
	if(chance==1)
	{
		outtextxy(320,240,"YOU LOSE");
		circle(600,60,30);  //face
		circle(585,55,5);  //eye
		circle(615,55,5);  //eye
		arc(600,100,70,110,25);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		line(600,170,640,220);
		line(600,170,560,220);
		settextstyle(BOLD_FONT,HORIZ_DIR,1);
		outtextxy(100,40,"YOU KILLED ME!");

	}
	else
	{
		outtextxy(320,240,"YOU WON!!");
		circle(600,60,30);  //face
		circle(585,55,5);  //eye
		circle(615,55,5);  //eye
		arc(600,70,220,320,10);
		line(600,90,600,170);
		line(600,110,560,110);
		line(600,110,640,110);
		line(600,170,640,220);
		line(600,170,560,220);
		settextstyle(BOLD_FONT,HORIZ_DIR,1);
		outtextxy(100,40,"Thankyou for saving me!");
	}


	delay(6000);
		exit(0);

}
void main()
{
	int gd=DETECT, gm,choice;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	cleardevice();
	display();
	insert();
	getch();
}

