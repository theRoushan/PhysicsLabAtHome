//Physics Wave Function and Probability Density graph
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(void){
	
	//reuqired variable n,A,L,x
	int i,n;
	double x=10,y,L=330,A=sqrt(2/L),PI=3.14;
	//enter value of n for the wave function graph
	system("color 0c");
	printf("Enter value for n=1 ,2 ,3.\n");
	printf("Enter value of n : ");
	scanf("%d",&n);
	initwindow(1000,550,"Wave");//Initializing a graphics windows
	cleardevice();
	setcolor(BLACK);
	setbkcolor(WHITE);
	//Either use loop or use value of n entered from user
//	for(n=1;n<=3;n++)
//	{	
		cleardevice();
		//Displays the n for the relevent graph
		setcolor(RED);
		if(n==1)
			outtextxy(10,50,"Wave function for n = 1.");
		else if(n==2)
			outtextxy(10,50,"Wave function for n = 2.");
		else if(n==3)
			outtextxy(10,50,"Wave function for n = 3.");
		// print the label like x , L/2, L
		outtextxy(10,460,"x=0");//prints x=0
		outtextxy(160,460,"x=L/2");//prints x=L/2
		outtextxy(320,460,"x=L");//prints x=L
		//These are  for drawing graphs and display areas
		setcolor(BLACK);
		setlinestyle(SOLID_LINE,0,2);
		line(10,100,10,450);
		line(10,450,330,450);
		line(330,450,330,100);
		setlinestyle(DASHED_LINE,0,2);
		line(0,480,1000,480);
		line(500,0,500,550);
		setlinestyle(DOTTED_LINE,0,1);
		line(168,100,168,450);//line for L/2 as dotted line
		
		
		//Logic or Formula is here for wave function
		for(i = 10; i <=330; i+=1) 
		{	//Formula used and 900 is multiplied for 
			//the amplification of amplitude
     		y = A*sin((n*x/L)*PI/180)*1200;
     		y = getmaxy()/2-y;   //adjustement for y axis     
     		setlinestyle(SOLID_LINE,0,2);//for drawing x-axis line
     		if(i==10){
     			line(10,y,330,y);
     			setcolor(RED);
     			if(n==1)
					outtextxy(332,y,"n=1");
				else if(n==2)
					outtextxy(332,y,"n=2");
				else if(n==3)
					outtextxy(332,y,"n=3");
			 }
  			putpixel(i, y, RED); // prints the graph using pixel co-ordinates
  			x+=186; //graph adjustments to get perfect graph in small region
  			delay(1);
 		}
 ///////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////
 ///////////////////////////Probability density Graph/////////////////
 	L=830; // because we are the the side for probability graph
 	x=510;
 	setcolor(RED);
		if(n==1)
			outtextxy(560,50,"Probability Density for n = 1.");
		else if(n==2)
			outtextxy(560,50,"Probability Density for n = 2.");
		else if(n==3)
			outtextxy(560,50,"Probability Density for n = 3.");
		// print the label like x , L/2, L
		outtextxy(510,460,"x=0");//prints x=0
		outtextxy(678,460,"x=L/2");//prints x=L/2
		outtextxy(820,460,"x=L");//prints x=L
		//These are  for drawing graphs and display areas
		setcolor(BLACK);
		setlinestyle(SOLID_LINE,0,2);
		line(510,100,510,450);
		line(510,450,830,450);
		line(830,450,830,100);
		setlinestyle(DOTTED_LINE,0,1);
		line(670,100,670,450);//line for L/2 as dotted line		
 		for(i = 510; i <=830; i+=1) 
		{	//Formula used and 900 is multiplied for 
			//the amplification of amplitude
     		y = pow((A*sin((n*x/L)*PI/180)*140),2);
     		y = getmaxy()/2-y;   //adjustement for y axis     
     		setlinestyle(SOLID_LINE,0,2);//for drawing x-axis line
     		if(i==510){
     			line(510,y,830,y);
     			setcolor(RED);
     			if(n==1)
					outtextxy(832,y,"n=1");
				else if(n==2)
					outtextxy(832,y,"n=2");
				else if(n==3)
					outtextxy(832,y,"n=3");
			 }
  			putpixel(i, y, RED); // prints the graph using pixel co-ordinates
  			x+=460; //graph adjustments to get perfect graph in small region
  			delay(1);
 		}
 		delay(2000);
//	}
	
	while(!kbhit()) delay(1);// to pause the graphic screen
	
}
