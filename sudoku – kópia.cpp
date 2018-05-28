#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x=0,y=0,cikler,cikler1,cikler2,xsurad,ysurad,xs,ys,pvm=0,pametx,pamety;
char testovane_cislo;
bool stoper=true,PVM=true,s=true,cislo_najdene=true,a=true,bbb=true;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char mapa [9][22]={"   425   ",
				   "3 5   9 7",
				   " 2     4 ",
				   " 5  9  6 ",
				   " 692 785 ",
				   " 7  5  9 ",
				   " 1     7 ",
				   "2 7   4 9",
				   "   872   ",};
				   
				   
void hladac_cisla()
{ xs=x+2;
  ys=y+2;
  testovane_cislo=49;
  while (bbb)
  {
  for (xsurad=x;xsurad<=xs;xsurad++)
		{
			for (ysurad=y;ysurad<=ys;ysurad++)
			{
				if(mapa [xsurad][ysurad]==testovane_cislo)
				{
					testovane_cislo++;
					xsurad=x;
					ysurad=y;
				}	
				if (testovane_cislo==58)
				{
					testovane_cislo=49;
					if (y!=9)
					{
						y=y+3;
					}
					if (y==9)
					{
						y=0;
						x=x+3;
						if (x==9)
						{
							x=0;
						}
					}
					ys=y+2;
					xs=x+2;
					xsurad=x;
					ysurad=y;
				}
				cout<<"step1                  ;"<<x<<"   "<<y<<"           "<<testovane_cislo<<endl;
			}
		}
		
		
		for (xsurad=0;xsurad<9;xsurad++)
		{
			for (ysurad=0;ysurad<9;ysurad++)
			{
				if (mapa [xsurad][ysurad]==testovane_cislo)
				{
					for (cikler=0;cikler<9;cikler++)
					{
						if (mapa [xsurad][cikler]==' ')
						{
							mapa [xsurad][cikler]='n';
						}
						if (mapa [cikler][ysurad]==' ')
						{
							mapa [cikler][ysurad]='n';
						}
					}
				}
			}
		}

		
				cout<<"step1                  ;"<<x<<"   "<<y<<"           "<<testovane_cislo<<endl;
		for (xsurad=x;xsurad<=xs;xsurad++)
					{
						for (ysurad=y;ysurad<=ys;ysurad++)
						{
								
							if(mapa [xsurad][ysurad]==' ')
							{
								
								pvm++;
								cout<<pvm<<"sssssssssssss"<<endl;
								pamety=ysurad;
								pametx=xsurad;
							}
							if (pvm==1&&xsurad==xs&&ysurad==ys)
							{
							
								cout<<"step ending"<<endl;
								for (cikler=0;cikler<9;cikler++)
		{
			cout<<mapa [cikler]<<endl;
		}getchar();
								mapa [pametx][pamety]=testovane_cislo;
								for (cikler=0;cikler<9;cikler++)
		{
			cout<<mapa [cikler]<<endl;
		}getchar();
							}
							if (pvm!=1&&xsurad==xs&&ysurad==ys)
							{
								testovane_cislo++;
							}
							
						}
					}
		
					pvm=0;
	for (xsurad=0;xsurad<=9;xsurad++)
	{
		for (ysurad=0;ysurad<=9;ysurad++)
		{
			if (mapa [xsurad][ysurad]=='n')
			{
				mapa [xsurad][ysurad]=' ';
			}
		}
	}
	for (xsurad=0;xsurad<=9;xsurad++)
	{
		for (ysurad=0;ysurad<=9;ysurad++)
		{
			if (mapa [xsurad][ysurad]==' ')
			{
				pvm++;
			}
		}
	}
	if (pvm==0)
	{
		bbb=false;
	}
	pvm=0;
	
	
			
	}
}
int main(int argc, char** argv) {
	hladac_cisla();
	return 0;
}
