#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{

	int i,j,k,m,l,cont;
	int dia,mes,anio,semana,moduloMes,febrero,total_mes;
	int seleccion=1;

	time_t sisTime;
	struct tm *tiempo;

	time(&sisTime);
	tiempo=localtime(&sisTime);

	dia=tiempo->tm_mday;
	mes=tiempo->tm_mon;

	anio=(tiempo->tm_year)+1900;

	printf("\t>>//>>//>>//>>//>>//>>//CALENDARIO\\<<\\<<\\<<\\<<\\<<\\<<n\n");
	printf("\t--------//--------<<-----Equipo 1----->>--------\\--------\n\n");
	printf("Avil%cs Ram%crez Rub%cn\nFlores Carlos\nMart%cnez S%cnchez Patricia\nS%cnchez Romero Sofia\n\n",130,161,130,161,160,160);
	printf("\t\t\t\t Hoy es: %d/%d/%d \n\n\n",dia,mes+1,anio);

		while(seleccion != 0)
			{
					if ((anio%4==0) && (anio%100!=0) || anio%400==0)
					febrero=29;
					else
					febrero=28;

					switch(mes)
					{
						case 3:
						case 5:
						case 8:
						case 10:
						total_mes=30;
						break;
					case 1:
					total_mes=febrero;
					break;
					case 0:
					case 2:
					case 4:
					case 6:
					case 7:
					case 9:
				case 11:
				total_mes=31;
				break;
				switch (mes)
				{
				case 0:
				printf("\t\tENERO\t%d",anio);
				break;
				case 1:
				printf("\t\tFEBRERO\t%d",anio);
				break;
				case 2:
				printf("\t\tMARZO\t%d",anio);
				break;
				case 3:
				printf("\t\tABRIL\t%d",anio);
				break;
				case 4:
				printf("\t\tMAYO\t%d",anio);
				break;
				case 5:
				printf("\t\tJUNIO\t%d",anio);
				break;
				case 6:
				printf("\t\tJULIO\t%d",anio);
				break;
				case 7:
				printf("\t\tAGOSTO\t%d",anio);
				break;
				case 8:printf("\t\tSEPTIEMBRE\t%d",anio);
				break;
				case 9:
				printf("\t\tOCTUBRE\t%d",anio);
				break;
				case 10:
				printf("\t\tNOVIEMBRE\t%d",anio);
				break;
				case 11:printf("\t\tDICIEMBRE\t%d",anio);
				break;

		if (febrero==29)
			{
			switch (mes)
				{
					case 0:
					moduloMes=0;
					break;
					case 1:
					moduloMes=3;
					break;
					case 2:




	semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7;
		printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");
		for(m=0;m<semana;m++)
		printf("\t");
		printf("\t");
		printf("\t");
		for(i=1;i<=total_mes;i++)
		{
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana || i== 36-semana)
				printf("\n%d\t",i);
			else
				printf("%d\t",i);
		}
   }
return 0;
}
