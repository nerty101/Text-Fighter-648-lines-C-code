
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6;
int diceA, diceB, diceC, diceD, diceE, diceF, diceG;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0;// spact = 0;
int ctrbonon = 0, ctrbondef = 0;
int supcomb = 0, spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag = 0, sumag2 = 0, magcom = 0;
int diflev = 0, posdef = 0;
int  ans6 = 1;
time_t t;
char choice, ans, ans2, ans3;
srand(time(&t));
do {
++diflev;
enemyhp = 5;
playerhp = 5;
if (diflev > 1)
{
enemyhp = (enemyhp) + (5 * diflev);
playerhp = (playerhp + 1) + (2 * diflev);
}
for (contest = 1; contest < 5; contest++)
{
do {
printf("Welcome to Fight Text %d, opponents fight for victory, and the chance to become the Fight Text Champion!\n\n", contest);//++ to increment tournament number here, eg. ++contest
printf("Player HP at %d\n", playerhp);
printf("Opponent HP at %d\n\n", enemyhp);
if (diflev > 1)
{
printf("Text Level: %d\n\n", diflev);
}
if (ctr2 > 0)
{
printf("Total Rounds Played: %d\n\n", ctr2);
}
do {
if (posdef > 0)
{
printf("\n\nEnter the Text Fighter!\n\n");
ans = 'y';
}
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
printf("Don't be a chicken, you have to fight!\n");
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
do {
printf("\n\nRound %d\n\n\n", ++ctr);
printf("Will you choose Attack, Magic or Special Attack?\n\n");
printf("Press (n) for Attack, (m) for Magic Heal, (s) for Special Attack\n\n");
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
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
dice1 = (rand() % 7) + 1;//was 6
dice2 = (rand() % 5) + 1;
}
if (dice1 > dice2) // && (normag < 1))
{
printf("\nYour attack succeeded, enemy attack failed!\n");
enemyhp = (enemyhp - 2);
printf("Enemy HP at %d\n", enemyhp);
consecvic = (consecvic + 1);
++consectr;
if (enemyhp < 1)
{
printf ("You defeated the enemy, you win!\n\n");
if (ctr < 8)
printf("Not bad!\n");
printf ("You won in %d rounds\n\n", ctr);
break;
}
if (consecvic > 2) //&& (normag < 1) && (normag > 0))
{
enemyhp = (enemyhp - 1);
printf("\nYou get a Bonus Attack!\n");
printf("Enemy damaged!\n");
printf("Enemy HP at %d\n", enemyhp);
++consectr;
++spctrbon; //TOOK THIS OFF LATE 16 OCT
}
if ((normag > 0) && (enemyhp > 0))
{
enemyhp = (enemyhp - 2);
printf("\nYou get the Magic Bonus Attack!\n");
printf("Enemy HP at %d\n", enemyhp);
++spmag;
++consectr;
normag = 0;
++sumag;
}
}//taken}
if (enemyhp < 1)
{
printf ("You defeated the enemy, you win!\n\n");
if (ctr < 8)
printf("Nice moves!\n");
printf ("You won in %d rounds\n", ctr);
printf("Good going!\n\n");
break;
}
if (dice2 > dice1)
{
printf("\nYour attack failed, enemy attack succeeded!\n");
printf("Your HP at %d\n", --playerhp);
consecvic = 0;
consecvic2 = 0;
normag = 0;
--consectr;
magsp = 0;
sumag = 0;
sumag2 = 0;
}
if (dice1 == dice2)
{
printf("\nYour attack failed, enemy attack failed\n");
consecvic = 0;
consecvic2 = 0;
normag = 0;
magsp = 0;
sumag = 0;
sumag2 = 0;
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
++consecvic;
++normag;
++magsp;
++consectr;
}//put here????????????????
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1)) //&& (spact2 == 1)) //&& (sumag2 != 1))
{
playerhp = (playerhp + 3);
printf("\nYour magic heal succeeded, enemy attack failed!\n");
printf("Player HP at %d\n", playerhp);
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1)) //&& (spact2 == 1))
{
playerhp = (playerhp + 6);
printf("\nYour magic heal succeeded, enemy attack failed!\n");
printf("You get a Magic Heal Bonus!\n");
printf("Player HP at %d\n", playerhp);
spmag = 0;
++consectr;
++sumag;
}
if (magsp2 > 0)//NEW BLOCK WITH BRACES STARTS
{
++magsp3;
}//NEW BLOCK WITH BRACES ENDS
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (enemyhp > 12) && (spmag >= 0))// && (magsp >= 0))// IMPORTANT change last condition back to (magsp >= 0) ????????bug fix
{
printf("\nYou activate the ALPHA MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("The Ultimate Magic Attack!\n");
magcom = 1;
}
if ((dice3 > dice4) && (spmag2 > 3) && (sumag >= 0) && (spmag >= 0))
{
enemyhp = (enemyhp - 12);
printf("\nYou execute the MAGIC SUPER ATTACK!\n");
printf("Enemy in trouble!\n");//print damage??? would be good!
printf("Enemy HP at %d\n", enemyhp);
spmag = 0;
spmag2 = 0;
}
if (enemyhp < 1)
{
printf ("Enemy completely defeated!\n\n");
printf("A very skilled technique!\n");
printf("You won in %d rounds, with the Magic Super Attack Victory!\n", ctr);
printf("Amazing outcome!!\n\n");
break;//this should work if not get rid of
}
if ((dice3 > dice4) && (sumag2 > 0) && (sumag >= 0) && (spmag2 >= 0) && (spmag >= 0))// && (spact2 == 0))
{
enemyhp = (enemyhp - 20);
printf("\nYou execute the MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("Enemy under intense attack!\n");//print damage??? would be good!
printf("Enemy HP at %d\n", enemyhp);
sumag2 = 0;
spmag = 1;
spmag2 = 3;
magsp3 = 0;
}
if (enemyhp > 0)
{
magcom = 0;
}
if ((enemyhp < 1) && (magcom == 0))
{
printf("Enemy completely defeated!\n\n");
printf("Did you see that!\n");
printf("You won in %d rounds, with the Magic Super Special Combo Attack Victory!\n", ctr);
printf("Amazing combination!!\n\n");
break;//this should work if not get rid of
}
if ((enemyhp < 1) && (magcom == 1))//or just supcomb == 1
{
printf("\nThat was amazing!\n");
printf("You won in %d rounds, with the Super Special Magic Combo Attack Victory!\n", ctr);
printf("What can match that power?\n");
printf("That was pure skill!\n");
printf("\nSpectacular!\n\n");
magcom = 0;
break;
}
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2);
printf("\nYour magic heal failed, enemy attack succeeded!\n");
printf("Player HP at %d\n", playerhp);
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
sumag = 0;
sumag2 = 0;
magsp3 = 0;
--consectr;
}
if (dice3 == dice4)
{
printf("\nYour magic heal failed, enemy attack failed\n");
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
sumag = 0;
sumag2 = 0;
magsp3 = 0;
}
if (choice == 's')
{
{
dice5 = (rand() % 28) + 1;// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6) //&& (consecvic2 < 3) && (spctrbon < 2))
{
consecvic2 = (consecvic2 + 1);
++consectr;
}
if (magsp3 == 1)
{
spctrbon = 0;
consecvic2 = 0;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp < 1) && (magsp3 < 1))
{
printf("\nYour special attack succeeded, enemy attack failed!\n");
enemyhp = (enemyhp - 5); //was minus 4, before that minus 5
printf("Enemy HP at %d\n", enemyhp);
sumag2 = 0;
}
if (enemyhp < 1)
{
printf ("You defeated the enemy, you win!\n\n");
if (ctr < 3)
printf("Amazing!\n");
printf ("You won, with the Special Attack, in round %d!\n", ctr);
printf("Very impressive!\n\n");
break;//not here? maybe GOT IN MESS EARLIER//break here, gonna work?????
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp > 0) && (magsp3 < 1)) //magsp > 0 bug fix prob super special counter combo conflict
{
printf("\nYour Magic Special Attack succeeded, enemy attack failed!\n");
enemyhp = (enemyhp - 7); //was minus 4, before that minus 5 was7
printf("Enemy HP at %d\n", enemyhp);
++spmag2;
++spmag;
magsp = 0;
++magsp2;
++normag;
if (sumag > 0)
{
++sumag2;
sumag = 0;
}
}
if (enemyhp < 1)
{
printf ("You defeated the enemy, you win!\n\n");
if (ctr < 3)
printf("A stylish finish!\n");
printf ("You won, with the Magic Special Attack, in round %d!\n", ctr);
printf("Good skill!\n\n");
break;//not here? maybe GOT IN MESS EARLIER//break here, gonna work?????
}
if ((consecvic2 > 2) && (spctrbon > 1) && (dice5 > dice6) && (enemyhp > 10) && (magsp3 < 1) && (magsp >= 0))// IMPORTANT change last condition back to (magsp >= 0) ????????bug fix
{
printf("\nYou activate the SUPER SPECIAL COUNTER COMBO ATTACK!\n");
printf("The Ultimate Special Attack!\n");
supcomb = 1;
++consecvic;//++spmag;++spmag2;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0))
{
enemyhp = (enemyhp - 10);//was 8
printf("\nYou execute the SPECIAL COUNTER BONUS ATTACK!\n");
printf("Enemy in danger!\n");//print damage??? would be good!
printf("Enemy HP at %d\n", enemyhp);
spctrbon = 0;//++spmag;
sumag2 = 0;
}
if (enemyhp < 1)
{
printf ("You heavily defeated the enemy!\n");
if (ctr < 6)
printf("Those are serious moves!\n");
printf("You won in %d rounds, with the Special Counter Bonus Attack Victory!\n", ctr);
printf("\nThat really was something!\n\n");
break;//this should work if not get rid of
}
if ((consecvic2 > 2) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0))
{
enemyhp = (enemyhp - 15); //was 11 12
printf("\nYou perform the SUPER BONUS SPECIAL ATTACK!\n");
printf("Enemy heavily attacked!\n");//print damage??? would be good!
printf("Enemy HP at %d\n", enemyhp);
consecvic2 = 0;
sumag2 = 0;//
}
if (enemyhp > 0)
{
supcomb = 0;
}//added
if ((enemyhp < 1) && (supcomb == 0))
{//added
printf("Unbelievable!\n");
printf("You won in %d rounds, with the Super Special Attack Bonus Victory!\n", ctr);
printf("How did you do that?\n");
printf("\nThat really was crazy!\n\n");
break;//this should work if not get rid of
}
if ((enemyhp < 1) && (supcomb == 1))//or just supcomb == 1
{
printf("\nCompletely astounding!\n");
printf("You won in %d rounds, with the Super Special Counter Combo Attack Victory!\n", ctr);
printf("I cannot believe what just happened?\n");
printf("That was completely insane!\n");
printf("\nAwesome!\n\n");
supcomb = 0;
break;
}
if ((consecvic2 < 1) && (spctrbon < 1) && (dice5 > dice6) && (magsp >= 0) && (magsp3 > 0))
{
enemyhp = (enemyhp - 18);//was 14
printf("\nYou perform the SUPER SPECIAL MAGIC COMBO ATTACK!\n");
printf("Enemy under severe pressure!\n");//print damage??? would be good!
printf("Enemy HP at %d\n", enemyhp);
magsp3 = 0;//spmag2 = 1;
magsp2 = 0;//magsp = 0;
spmag = 1;
spmag2 = 3;//++spmag; ++consectr;
++consecvic2;
++spctrbon;
sumag2 = 0;
if (enemyhp < 1)
{
printf("You completely overwhelmed the enemy!\n\n");
printf("That was a very nice combo!\n");
printf("Great skill!\n");
printf("You won in %d rounds, with the Super Special Magic Combo Attack Victory!\n", ctr);
printf("Brilliant tactics!\n\n");
printf("What a powerful technique!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2);
printf("\nYour special attack failed, enemy attack succeeded!\n");
printf("Your HP at %d\n", playerhp);
consecvic = 0;
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
--consectr;
}
if (dice5 == dice6)
{
printf("\nYour special attack failed, enemy attack failed\n");
consecvic = 0;
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
}
}
if ((enemyhp > 0) && (playerhp > 0))
printf("\nThe enemy attacks again!\n\n");
diceB = (rand() % 10) + 1;
if ((diceB >= 2) && (diceB <= 5) && (playerhp > 0))
{
playerhp = (playerhp - 1);
printf("Enemy attack succeeded!\n");
printf("Your HP at %d\n", playerhp);
}
if (playerhp < 1)
{
diceE = 15;
}//added
else
{//added
diceE = (rand() % 24) + 1;//20 23 turn down??? just by one if at all
}
if  ((diceE > 16) && (diceB >= 4) && (diceB <= 5) && (playerhp > 0)) //diceE was > 18 then 17
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
playerhp = (playerhp - 4);
printf("\nEnemy executed their SPECIAL ATTACK!\n\n");
printf("Your HP at %d\n\n", playerhp);
printf("This opponent is tough!\n");
if (playerhp < 1)
{
printf("\nThat's a great finish!\n");
}
spatt = 1;
}
if (playerhp < 1)
{
diceF = 15;
}//added
else
{//added
diceF = (rand() % 32) + 1;//100 then 300 test 17 and code change is 100? was 30 was 36 34 32
}
if  ((diceF > 16) && (diceB == 5) && (playerhp > 0))
{
playerhp = (playerhp - 6);//was 6
printf("\nEnemy executed their SUPER SPECIAL ATTACK!\n\n");
printf("Your HP at %d\n\n", playerhp);
printf("This opponent is unreal!\n");
if (playerhp < 1)
{
printf("\nA decisive victory!\n");
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
diceC = (rand() % 26) + 1;//100 then 300 test 17 and code change is 100? was 30 was 23 24 25 maybe turn down one
}//added
if  ((diceC > 16) && (diceB == 5) && (playerhp > 0))
{
playerhp = (playerhp - 8);//was 8
printf("\nEnemy executed their HYPER SUPER SPECIAL ATTACK!\n\n");
printf("You are put under a devastating attack!\n");
printf("Your HP at %d\n\n", playerhp);
printf("THIS OPPONENT IS UNBEATABLE!\n");
if (playerhp < 1)
{
printf("THE GAME IS OVER!\n");
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
printf("THE ENEMY ULTRA HYPER SUPER SPECIAL COMBO!\n\n");
printf("THE ULTIMATE ENEMY COMBO!\n");
printf("JUST INCREDIBLE!\n");
if (playerhp < 1)
{
printf("GREAT ACTION! AND THE ULTIMATE FINISHER!\n");
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
printf("\nTHE ENEMY SUPER SPECIAL COMBO!\n\n");
if (playerhp < 1)
{
printf("WHAT AN AMAZING ENEMY COMBO VICTORY!\n");
}
spatt = 0;
supspatt = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 5)) && ((diceC > 16) && (diceB == 5)))
{
printf("\nTHE ENEMY HYPER SPECIAL COMBO!\n\n");
if (playerhp < 1)
{
printf("AND THAT'S A MEAN ENEMY COMBO FINISH!\n");
}
spatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceC > 16) && (diceB == 5)) && ((diceF > 16) && (diceB == 5)))
{
printf("\nTHE ENEMY HYPER SUPER SPECIAL COMBO!\n");
printf("THAT WAS A VERY POWERFUL ENEMY COMBO!\n\n");
if (playerhp < 1)
{
printf("FANTASTIC FINISHING MOVES!\n");
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
printf("You countered, enemy attack failed!\n");
printf("Enemy HP at %d\n", enemyhp);
diceG = (rand() % 11) + 1; //WAS 10
if (diceG > 5)//was 6
consectr = (consectr + 2);
}
if (enemyhp < 1)
{
printf ("\nYou defeated the enemy!\n");
printf("You won with the counter!\n");
printf("Nice move!\n\n");
break;
}
if ((consectr > 2) && (diceB > 5) && (playerhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\nYou attack the enemy with the Counter Bonus!\n");
printf("Enemy HP at %d\n", enemyhp);
++ctrbonon;
++consecvic;
++spctrbon;
--consectr;
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
printf ("\nYou defeated the enemy with the Counter Bonus Attack!\n");
printf("\nOutstanding finish!\n\n");
break;
}
if ((diceB == 1) && (playerhp > 0))
{
printf("Enemy attack failed, your counter failed\n");
}
if (playerhp < 1)
{
printf("\n\n\nYou lost the contest!\n\n");
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
printf("\nThe next round begins!\n\n");
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
++posdef;
if (diflev > 1)
{
enemyhp = (enemyhp) + (5 * diflev);
playerhp = (playerhp + 1) + (2 * diflev);
}
if (contest != 5)
printf("\nHave you got what it takes to win the Tournament? Will you rise to the challenge?\n\n\n");
} while (contest != 5);
printf("\nYou won the Tournament! Congratulations!\n\n\n");
printf("You are the Text Fighter Champion!\n\n\n");
if (diflev > 1)
{
printf("Text Level: %d\n\n", diflev);
}
printf("Total Rounds Played: %d", ctr2);
printf("\n\n\nGAME OVER!\n\n\n");
}
printf("\nEnter (e) to exit, any other key to continue\n\n\n");
scanf( " %c", &ans);
if (ans == 'E')
{
ans = 'e';
}
if (ans != 'e')
{
printf("\nGet Ready For The Next Text Level!\n\n\n\n\n");
}
} while (ans != 'e');
if (ans != 'e')
{
return(main);
}
return(0);
}
