//Random passphrase generator created by gustavax
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WORDLENGTH 10

int main()
{
    srand(time(0));
    int i;
    char again[WORDLENGTH]="yes";
    printf("-----Random passphrase number generator v1.0-----\n");
    while(strcmp(again,"yes")==0 || strcmp(again,"y")==0)
    {
        printf(" Passphrase: ");
        for(i=0;i<6;i++){throwDiceAndPrint();}
        printf("\n Another passphrase? yes/no:");
        gets(again);
    }
    return 0;
}
void throwDiceAndPrint()
{
    int i,diceThrow,nrOfThrows=5,passphraseNr[5];
    for(i=0;i<nrOfThrows;i++)       //Throw dice
    {
        diceThrow=rand()%6+1;
        passphraseNr[i]=diceThrow;
    }
    for(i=0;i<nrOfThrows;i++)
    {
        printf("%d",passphraseNr[i]);
    }
    printf(" ");
}
void readFromFile()
{
  //nevermind...
  /*
    FILE=fopen(passwords,"r");
    if(fp!=NULL)
    {
        char word[15];
        printf("%d\n",exisitingSpheres);
        int i=0;
        while(i<5)
        {
            fscanf(fp,"%s",tmp);
            word=atof(tmp);
            i++;
        }
        fclose(fp);
    }
    */
}
