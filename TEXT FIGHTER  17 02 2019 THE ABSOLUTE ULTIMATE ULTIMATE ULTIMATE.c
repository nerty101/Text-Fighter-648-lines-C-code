
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6, diceA, diceB, diceC, diceD, diceE, diceF, diceG;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0, ctrbonon = 0, ctrbondef = 0, consecvic3 = 0, spctrbon2 = 0;
int supcomb = 0, spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag2 = 0, sumag = 0, magcom = 0, magsp4 = 0, magsp5 = 0;
int diflev = 0, posdef = 0, posmag = 0, posbon = 0, bonchn = 0, bonchn2 = 0;
int  ans6 = 1;
time_t t;
char choice, ans, ans2, ans3;
srand(time(&t));
do {
++diflev;
enemyhp = 5;
playerhp = 5;
posdef = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
for (contest = 1; contest < 5; contest++)
{
do {
printf("\n\n");
if (posdef == 0)
{
printf("WELCOME TO TEXT FIGHTER %d!\n\n\n", diflev);
}
else
{
printf("TEXT FIGHTER %d", diflev);
}
if (posdef > 0)
{
printf(" - Fight Text %d\n\n\n", contest);
}
printf("Player HP at %d\n", playerhp);
printf("CPU HP at %d\n\n", enemyhp);
if (ctr2 > 0)
{
printf("Total Rounds Played: %d\n\n", ctr2);
}
do {
if (posdef < 1)
{
printf("\n\nWill you enter the Text Fighter? Press (y) for yes, (n) for no\n\n");
scanf( " %c", &ans);
}
if (ans == 'N')
{
ans = 'n';
}
if (ans == 'n')
{
printf("\nDon't be a chicken! You have to fight!\n");
}
if (ans == 'Y')
{
ans = 'y';
}
if ((ans != 'y') && (ans != 'n'))
{
printf("You pressed the wrong key, try again\n");
}
} while (ans != 'y');
if (ans == 'y');
{
ans = 'y';
if (posdef < 1)
{
printf("\nFight Text %d starts now!\n\n", contest);
}
if (posdef > 0)
{
printf("\nEnter the Text Fighter!\n\n");
}
do {
printf("\n\nRound %d\n\n\n", ++ctr);
printf("Will you choose Normal Attack, Magic or Special Attack?\n\n");
printf("Press (n) for Normal Attack, (m) for Magic Heal, (s) for Special Attack\n\n");
scanf (" %c", &choice);
if (choice == 'N')
{
choice = 'n';
}
if (choice == 'M')
{
choice = 'm';
}
if (choice == 'S')
{
choice = 's';
}
if ((choice != 'n') && (choice != 'm') && (choice != 's'))
{
printf("You pressed the wrong key, try again\n");
--ctr;
continue;
} while  ((choice != 'n') && (choice != 'm') && (choice != 's'));
if (choice == 'n')
{
{
dice1 = (rand() % 7) + 1;//was 6 7
if (diflev > 4)
dice1 = (rand() % 8) + 1;
dice2 = (rand() % 5) + 1;
}
if (dice1 > dice2)
{
printf("\nYour Normal Attack succeeds!\n");
enemyhp = (enemyhp - 2);
printf("CPU HP at %d\n", enemyhp);
++consecvic;
++consectr;
posmag = 0;
posbon = 0;
if ((consecvic > 2) && (enemyhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\nYou get a Bonus Attack!\n");
printf("CPU HP at %d\n", enemyhp);
++spctrbon;
++bonchn;
if ((consecvic > 2) && (enemyhp < 1))
++posbon;
}
if ((normag > 0) && (enemyhp > 0))
{
enemyhp = (enemyhp - 2);
printf("\nYou get the Magic Bonus Attack!\n");
printf("CPU HP at %d\n", enemyhp);
++spmag;
normag = 0;
++sumag;
++posmag;
}
}
if (enemyhp < 1)
{
printf("\nYou defeated the CPU!\n\n");
if (ctr < 4)
{
printf("Not bad!\n");
}
printf("You won in %d rounds!\n", ctr);
if ((posbon > 0) || (posmag > 0))
{
printf("Nice moves!\n");
posmag = 0;
if ((bonchn > 2) && (posbon > 0))
printf("Superb strategy!\n\n");
posbon = 0;
}
break;
}
if (dice2 > dice1)
{
printf("\nYour Normal Attack fails!\n\n");
printf("CPU Counter succeeds!\n");
printf("Your HP at %d\n", --playerhp);
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
--consectr;
magsp = 0;
bonchn = 0;
}
if (dice1 == dice2)
{
printf("\nYour Normal Attack fails!\n\n");
printf("CPU Counter fails!\n");
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
magsp = 0;
bonchn = 0;
}
}
if (choice == 'm')
{
dice3 = (rand() % 14) + 1;//was 14 then 15 THEN 16? NOW 19 OR 20?????? now 18 300 test now 19 21 22 23 21 23 21 10 13 12 14
dice4 = (rand() % 11) + 1;//was 20 22 10
if (dice3 > dice4)
{
++spmag;
++spmag2;
++consecvic2;
++normag;
++magsp;
++consectr;
bonchn = 0;
}//put here????????????????
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1)) //&& (spact2 == 1)) //&& (sumag2 != 1))
{
playerhp = (playerhp + 3);
printf("\nYour Magic Heal succeeds!\n");
printf("Player HP at %d\n", playerhp);
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1)) //&& (spact2 == 1))
{
playerhp = (playerhp + 6);
printf("\nYour Magic Heal succeeds!\n");
printf("You get a Magic Heal Bonus!\n");
printf("Player HP at %d\n", playerhp);
spmag = 0;
}
if (magsp2 > 0)//NEW BLOCK WITH BRACES STARTS
{
++magsp3;
}//NEW BLOCK WITH BRACES ENDS
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (enemyhp > 12) && (spmag >= 0))// && (magsp >= 0))// IMPORTANT change last condition back to (magsp >= 0) ????????bug fix
{
printf("\nYou activate the ALPHA MAGIC SUPER SPECIAL COMBO ATTACK!\n");
magcom = 1;
}
if ((dice3 > dice4) && (spmag2 > 3) && (spmag >= 0))
{
enemyhp = (enemyhp - 12);
printf("\nYou execute the MAGIC SUPER ATTACK!\n");
printf("CPU in trouble!\n");//print damage??? would be good!
printf("CPU HP at %d\n", enemyhp);
spmag = 0;
spmag2 = 0;
}
if (enemyhp < 1)
{
printf("That was excellent technique!\n");
printf("You won in %d rounds, with the Magic Super Attack Victory!\n\n", ctr);
printf("Amazing outcome!\n\n");
break;//this should work if not get rid of
}
if ((dice3 > dice4) && (sumag2 > 0) && (spmag2 >= 0) && (spmag >= 0))
{
enemyhp = (enemyhp - 20);
printf("\nYou execute the MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("CPU under intense attack!\n");
printf("CPU HP at %d\n", enemyhp);
sumag2 = 0;
spmag = 1;
spmag2 = 3;
magsp2 = 0;
magsp3 = 0;
}
if (enemyhp > 0)
{
magcom = 0;
}
if ((enemyhp < 1) && (magcom == 0))
{
printf("CPU completely defeated!\n\n");
printf("Did you see that?\n");
printf("You won in %d rounds, with the Magic Super Special Combo Attack Victory!\n", ctr);
printf("Amazing combination!\n\n");
printf("Great skill!\n\n");
break;//this should work if not get rid of
}
if ((enemyhp < 1) && (magcom == 1))//or just supcomb == 1
{
printf("\nUnbelievable!\n\n");
printf("You won in %d rounds, with the Alpha Magic Super Special Combo Attack Victory!\n", ctr);
printf("That was a phenomenal move!\n");
printf("How did you do that?\n");
printf("That really was crazy!\n\n");
magcom = 0;
break;
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2);
printf("\nYour Magic Heal fails!\n\n");
printf("CPU Counter succeeds!\n");
printf("Player HP at %d\n", playerhp);
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
--consectr;
bonchn = 0;
}
if (dice3 == dice4)
{
printf("\nYour Magic Heal fails!\n\n");
printf("CPU Counter fails!\n");
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
bonchn = 0;
}
}
if (choice == 's')
{
{
dice5 = (rand() % 28) + 1;// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28
if (diflev > 3)
dice5 = (rand() % 30) + 1;
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6) //&& (consecvic2 < 3) && (spctrbon < 2))
{
++consecvic2;
++consectr;
bonchn2 = bonchn;
bonchn = 0;
}
if (magsp3 == 1) //&& (bonchn2 > 2))
{
spctrbon2 = spctrbon;
spctrbon = 0;
consecvic2 = 0;
}
if (bonchn2 > 2) //&& (bonchn2 > 2))
{
spctrbon = 0;
consecvic2 = 0;
magsp4 = magsp;
magsp5 = magsp3;
magsp = 0;
magsp3 = 0;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp < 1) && (magsp3 < 1) && (bonchn2 < 3))
{
printf("\nYour Special Attack succeeds!\n");
enemyhp = (enemyhp - 5); //was minus 4, before that minus 5
printf("CPU HP at %d\n", enemyhp);
normag = 0;
}
if (enemyhp < 1)
{
if (ctr < 2)
{
printf("\nYou won in the first round!\n");
printf("\nVery impressive!\n\n");
}
else
{
printf("\nYou won in Round %d!\n", ctr);
printf("\nEffective tactics!\n\n");
}
break;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp > 0) && (magsp3 < 1) && (bonchn2 < 3))
{
printf("\nYour Magic Special Attack succeeds!\n");
enemyhp = (enemyhp - 7); //was minus 4, before that minus 5 was7
printf("CPU HP at %d\n", enemyhp);
++spmag2;
++spmag;
magsp = 0;
++magsp2;
if (sumag > 0)
{
++sumag2;
sumag = 0;
}
}
if (enemyhp < 1)
{
printf ("\nYou won in Round %d, with the Magic Special Attack!\n\n", ctr);
if (ctr < 3)
printf("A quick victory! ");
printf("Good skill!\n\n");
break;
}
if ((consecvic2 > 2) && (spctrbon > 1) && (dice5 > dice6) && (enemyhp > 10) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3))
{
printf("\nYou activate the SUPER SPECIAL BONUS COMBO ATTACK!\n");
supcomb = 1;
++consecvic;//++spmag;++spmag2;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0))
{
enemyhp = (enemyhp - 10);//was 8
printf("\nYou execute the SPECIAL BONUS ATTACK!\n");
printf("CPU in danger!\n");
printf("CPU HP at %d\n", enemyhp);
spctrbon = 0;//++spmag;
}
if (enemyhp < 1)
{
printf("You won in %d rounds, with the Special Bonus Attack Victory!\n\n", ctr);
printf("That really was something!\n\n");
break;
}
if ((bonchn2 > 2) && (dice5 > dice6) && (magsp3 == 0) && (magsp == 0) && (consecvic2 == 0) && (spctrbon == 0))
{
enemyhp = (enemyhp - 18);//was 8
printf("\nYou execute the HYPER BONUS ATTACK!\n");
printf("Hyper impact!\n");
printf("CPU HP at %d\n", enemyhp);
spctrbon = 2;
consecvic2 = 1;
bonchn2 = 0;
magsp = magsp4;
magsp3 = magsp5;
magsp4 = 0;
magsp5 = 0;
}
if (enemyhp < 1)
{
printf("Phenomenal move!\n");
printf("\nExcellent tactical follow-up!\n");
printf("Enemy completely defeated!\n");
printf("You won in %d rounds, with the Hyper Bonus Attack Victory!\n\n", ctr);
printf("Raw power!\n\n");
break;
}
if ((consecvic2 > 2) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3))
{
enemyhp = (enemyhp - 15); //was 11 12
printf("\nYou perform the SUPER SPECIAL ATTACK!\n");
printf("CPU heavily attacked!\n");
printf("CPU HP at %d\n", enemyhp);
consecvic2 = 0;
}
if (enemyhp > 0)
{
supcomb = 0;
}//added
if ((enemyhp < 1) && (supcomb == 0))
{//added
printf("Great move!\n\n");
printf("You won in %d rounds, with the Super Special Attack Victory!\n", ctr);
printf("That was pure skill!\n");
printf("\nSpectacular!\n\n");
break;
}
if ((enemyhp < 1) && (supcomb == 1))//or just supcomb == 1
{
printf("\nAwesome!\n\n");
printf("You won in %d rounds, with the Super Special Bonus Combo Attack Victory!\n", ctr);
printf("I cannot believe what just happened?\n");
printf("That was completely insane!\n\n");
supcomb = 0;
break;
}
if ((consecvic2 < 1) && (spctrbon < 1) && (dice5 > dice6) && (magsp >= 0) && (magsp3 > 0) && (bonchn2 < 3))
{
enemyhp = (enemyhp - 18);//was 14
printf("\nYou perform the SUPER SPECIAL MAGIC COMBO ATTACK!\n");
printf("CPU under severe pressure!\n");//print damage??? would be good!
printf("CPU HP at %d\n", enemyhp);
magsp3 = 0;//spmag2 = 1;
magsp2 = 0;//magsp = 0;
spmag = 1;
spmag2 = 3;//++spmag; ++consectr;
spctrbon = spctrbon2;
consecvic2 = 2;
spctrbon2 = 0;
if (enemyhp < 1)
{
printf("You completely overwhelmed the enemy!\n\n");
printf("That was a very nice combo!\n");
printf("You won in %d rounds, with the Super Special Magic Combo Attack Victory!\n", ctr);
printf("Brilliant tactics!\n\n");
printf("What a powerful technique!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2);
printf("\nYour Special Attack fails!\n\n");
printf("CPU Counter succeeds!\n");
printf("Your HP at %d\n", playerhp);
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
--consectr;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
}
if (dice5 == dice6)
{
printf("\nYour Special Attack fails!\n\n");
printf("CPU Counter fails!\n");
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
}
}
if ((enemyhp > 0) && (playerhp > 0))
diceB = (rand() % 10) + 1;
if ((diceB >= 2) && (diceB <= 5) && (playerhp > 0))
{
playerhp = (playerhp - 1);
printf("\nCPU Attack succeeds!\n");
printf("Your HP at %d\n", playerhp);
}
if ((playerhp < 1) && ((diceB == 2) || (diceB == 3) || (diceB == 4) || (diceB == 5)))
{
printf("\n\nYou have to keep your guard up!\n");
diceE = 15;
}
if (((choice == 'm') || (choice == 's')) && (choice != 'n'))
{
diceE = (rand() % 26) + 1;//maybe 28 ????????????? was 24
}
else
{
if ((choice == 'n') && (choice != 'm') && (choice != 's'))//for this diceE is 30 not 28 need to encourage sp for game maybe
diceE = (rand() % 30) + 1;//maybe 32 0r 34??????????????
}
if  ((diceE > 16) && (diceB >= 4) && (diceB <= 5) && (playerhp > 0)) //diceE was > 18 then 17
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
playerhp = (playerhp - 4);
printf("\nCPU executes their SPECIAL ATTACK!\n\n");
printf("Your HP at %d\n", playerhp);
printf("This opponent is tough!\n");
if (playerhp < 1)
{
printf("\nThat's an impressive finish!\n\n");
}
spatt = 1;
}
if (playerhp < 1)
{
diceF = 15;
}//added
else
{//added
if (((choice == 's') || (choice == 'n')) && (choice != 'm'))
diceF = (rand() % 36) + 1; //was 34
else
if ((choice == 'm') && (choice != 's') && (choice != 'n'))
diceF = (rand() % 38) + 1;
}
if  ((diceF > 16) && (diceB == 5) && (playerhp > 0))
{
playerhp = (playerhp - 6);
printf("\nCPU executes their SUPER SPECIAL ATTACK!\n\n");
printf("Your HP at %d\n", playerhp);
printf("This opponent is unreal!\n");
if (playerhp < 1)
{
printf("\nAn outstanding performance!\n\n");
}
supspatt = 1;
}
if ((spatt = 1) && (supspatt = 1))
{
enspcomb1 = 1;
}
if (playerhp < 1)
{
diceC = 15;
}
else
{//added
if (((choice == 'm') || (choice == 'n')) && (choice != 's'))
diceC = (rand() % 28) + 1;//was 26
else
if ((choice == 's') && (choice != 'm') && (choice != 'n'))
diceC = (rand() % 34) + 1;
}//added
if  ((diceC > 16) && (diceB == 5) && (playerhp > 0))
{
playerhp = (playerhp - 8);//was 7
printf("\nCPU executes their HYPER SUPER SPECIAL ATTACK!\n\n");
printf("You are put under a devastating attack!\n");
printf("Your HP at %d\n", playerhp);
printf("This opponent is unbeatable!\n\n");
if (playerhp < 1)
{
printf("THIS GAME IS OVER!\n\n");
}
hypsp = 1;
}
if ((hypsp = 1) && (enspcomb1 = 1))
{
enspcomb2 = 1;
}
if ((enspcomb1 = 1) && (enspcomb2 = 1))
{
enspcomb3 = 1;
}
if ((enspcomb3 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 5)) && ((diceF > 16) && (diceB == 5)) && ((diceC > 16) && (diceB == 5)))
{
printf("THE CPU ULTRA HYPER SUPER SPECIAL COMBO!\n");
printf("THE ULTIMATE CPU COMBO!\n");
printf("JUST INCREDIBLE!\n\n");
if (playerhp < 1)
{
printf("THE ULTIMATE FINISHER!\n\n");
}
spatt = 0;
supspatt = 0;
hypsp = 0;
enspcomb3 = 0;
enspcomb2 = 0;
enspcomb1 = 0;
enemspcombC = 1;
}
if (enemspcombC != 1)
{
if ((enspcomb1 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 5)) && ((diceF > 16) && (diceB == 5)))
{
printf("\nTHE CPU SUPER SPECIAL COMBO!\n");
printf("GREAT CPU COMBO!\n");
if (playerhp < 1)
{
printf("AND AN IMPRESSIVE COMBO FINISH!\n\n");
}
spatt = 0;
supspatt = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 5)) && ((diceC > 16) && (diceB == 5)))
{
printf("THE CPU HYPER SPECIAL COMBO!\n");
printf("AN AMAZING CPU COMBO!\n");
if (playerhp < 1)
{
printf("AND THAT'S A MEAN COMBO FINISH!\n\n");
}
spatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceC > 16) && (diceB == 5)) && ((diceF > 16) && (diceB == 5)))
{
printf("THE CPU HYPER SUPER SPECIAL COMBO!\n");
printf("THAT WAS A VERY POWERFUL CPU COMBO!\n");
if (playerhp < 1)
{
printf("FANTASTIC FINISHING MOVES!\n\n");
}
supspatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
enemspcombC = 0;
}
if ((diceB > 5) && (playerhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\nCPU Attack fails!\n\n");
printf("Your Counter succeeds!\n");
printf("CPU HP at %d\n", enemyhp);
diceG = (rand() % 10) + 1; //WAS 10 was 11
if ((diceG > 5) && (consectr < 3))// diceG was 6
++consectr;
}
if (enemyhp < 1)
{
printf ("\nYou defeated the CPU!\n");
printf("You won with the Counter!\n");
printf("\nGood defence!\n\n");
break;
}
if ((consectr > 2) && (diceB > 5) && (playerhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\nYou get a Counter Bonus!\n");
printf("CPU HP at %d\n", enemyhp);
++ctrbonon;
++consecvic;
++spctrbon;
--consectr;
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
printf ("\nYou defeated the CPU!\n");
printf ("You won with the Counter Bonus Attack!\n");
printf("\nThat was a great defence!\n\n");
break;
}
if ((diceB == 1) && (playerhp > 0))
{
printf("\nCPU Attack fails!\n\n");
printf("Your Counter fails!\n");
}
if (playerhp < 1)
{
printf("\n\nYou lost the contest!\n\n");
printf("\nEnter (0) to exit game, (1) to continue\n\n\n");
scanf( " %d", &ans6);
if (contest > 1)
{
--contest;
}
if (ans6 == 0)
{
exit (0);
}
}
if (playerhp > 0)
printf("\n\nThe next round begins!\n\n");
}while  (playerhp > 0);
}
if (enemyhp < 1)
{
++contest;
}
enemyhp = 5 + (10 * (contest - 1));
playerhp = 5 + (5 * (contest - 1));
ctr2 = (ctr + ctr2);
consecvic = 0;
consecvic2 = 0;
consectr = 0;
ctr = 0;
spctrbon = 0;
ctrbonon = 0;
ctrbondef = 0;
enemspcombC = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
magsp2 = 0;
normag = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
bonchn = 0;
bonchn2 = 0;
++posdef;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
} while (contest != 5);
printf("\n\n\n\nYou won the Tournament! Congratulations!\n\n\n");
printf("You are the Text Fighter %d Champion!\n\n\n", diflev);
printf("Total Rounds Played: %d", ctr2);
printf("\n\n\nGAME OVER!\n\n\n");
}
printf("\nEnter (0) to exit, (1) to continue\n\n\n");
scanf( " %c", &ans);
if (ans != '0')
{
printf("\n\n\n");
}
} while (ans != '0');
if (ans != '0')
{
return(main);
}
return(0);
}
