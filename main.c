#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char line[100];
int character;
int accept;
int accept2;
int character2;
int character3;
int character4;
int character5;
int character6;
int character7;
int character8;
int at1;
int at2;
int at3;
int at4;
int at5;
int at6;
int attribute;
int str;
int dex;
int con;
int int2;
int wis;
int cha;
int gaah;
int strength;
int dexterity;
int intelligence;
int charisma;
int wisdom;
int constitution;
int skill;
int skill2;
int wgp;
int sgp;
int rgp;
int wac;
int sac;
int rac;
int nstr;
int ndex;
int ncon;
int nint;
int nwis;
int ncha;
int wdmg;
int sdmg;
int rdmg;
int whp;
int shp;
int rhp;
int ok1;
int ok2;
int ok3;
int ok4;
int ok5;
int ok6;
int ok7;
int ok8;
int ok9;

int mod[16];

int roll_d4()
{
	return(rand() % 4 + 1);
}

int roll_2d4()
{
	return roll_d4()+roll_d4();
}

int roll_3d4()
{
	return roll_d4()+roll_d4()+roll_d4();
}

int roll_4d4()
{
	return roll_d4()+roll_d4()+roll_d4()+roll_d4();
}

int roll_d10()
{
	return(rand() % 10 + 1);
}

int roll_dice()
{
	return(rand() % 6 + 1);
}

int roll_3dice()
{
	return roll_dice()+roll_dice()+roll_dice();
}

int main()
{


mod[3] = -4;
mod[4] = -3;
mod[5] = -3;
mod[6] = -2;
mod[7] = -2;
mod[8] = -1;
mod[9] = -1;
mod[10] = +0;
mod[11] = +0;
mod[12] = +1;
mod[13] = +1;
mod[14] = +2;
mod[15] = +2;
mod[16] = +3;
mod[17] = +3;
mod[18] = +4;




srand(time(NULL));  //seed


printf("Welcome to this D&D character generator.\nThis will help you to quickly get a character.\n");

do {

	printf("First, you must chose your race: \nThe following races are selectable: \n1.Human\n2.Elf\n3.Dwarf\n4.Gnome\nType the number of the wanted class:\n"); 
		

	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character);



	switch (character) 
	{

		case 1:
			printf("You have chosen the Human.\nHumans are a neutral race and they are average in all areas.\nNo penaltys or bonuses\n"); 
			break;

		case 2:
			printf("Ah,you have chosen the elf.\nElfs are a mystical,magical race and they are very graceful. but frail.\n+2 Dexterity -2 Constitution\n"); 
			break;

		case 3:
			printf("You have chosen the dwarf.\nDwarfs are strong and sturdy,but quite gruff in some situations.\n+2 Constitution -2 Charisma\n"); 
			break;
	
		case 4: 
			printf(" You have chosen the gnome.\nGnomes are famous engineers who are tough but weak.\n +2 Constitution -2 Strenght");
			break;
	
	}


	printf("Press 1 To accept your race or 0 to choose a new race:\n");

		fgets(line,sizeof(line),stdin);
		sscanf(line,"%d",&accept);



} while (accept==0);


if (accept==1)
	printf("You have now chosen your race, it is time to set your abilities.\nPress 1 to continue:\n");


	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character2);


if (character2==1) {

	
	at1 = roll_3dice();
	at2 = roll_3dice();
	at3 = roll_3dice();
	at4 = roll_3dice();
	at5 = roll_3dice();
	at6 = roll_3dice();

	printf("1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\nThese are your ability scores.\nYou are going to chose which score that shall be put in which ability.\nThe abilities you can chose from are:\nStrenght(STR) \nDexterity(DEX) \nConstitution(CON) \nIntelligence(INT) \nWisdom(WIS) \nCharisma(CHA) \nPress 1 to continue:\n",at1,at2,at3,at4,at5,at6);
}

	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character3);



do{
ok1=1;

if(character3=1)
	printf("It is time to place the scores in the abilities.\nWe will begin with strenght.\nStrenght is an inportant factor to your damage in close combat.\nWhat ability score do you want to be used as your strenght?\nType the number (1-6) that is behind your ability score:\n");



	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&str);



	switch (str) {

		case 1:
			if (at1 >0) {
				strength = at1;
				at1=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}
			break;

		case 2:
			if (at2 >0) {
				strength = at2;
				at2=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}
			break;

		case 3:
			if (at3 >0) {
				strength = at3;
				at3=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}
			break;
	
	
		case 4:
			if (at4 >0) {
				strength = at4;
				at4=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}
			break;	
	

		case 5:
			if (at5 >0) {
				strength = at5;
				at5=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}
			break;

	
		case 6:
			if (at6 >0) {
				strength = at6;
				at6=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok1=0;
			}	
			break;


		default:
			printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
		ok1=0;
		break;

	}



} while (ok1==0);


do{
ok2=1;


	printf("Your strenght is now %d\nLets continue with dexterity, do the same thing here.\nDexterity is what makes your agility and reflexes good:\n",strength);


	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&dex);


	switch (dex) {




		case 1:
			if (at1 >0) {
				dexterity = at1;
				at1=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}
			break;


	
		case 2:
			if (at2 >0) {
				dexterity = at2;
				at2=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}	
			break;


	
		case 3:
			if (at3 >0) {
				dexterity = at3;
				at3=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}
			break;
	

	
		case 4:
			if (at4 >0) {
				dexterity = at4;
				at4=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}
			break;


	
		case 5:
			if (at5 >0) {
				dexterity = at5;
				at5=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}
			break;

	
		case 6:
			if (at6 >0) {
				dexterity = at6;
				at6=-1;
			} else {
				printf("You can only use an attribute once\n");
				ok2=0;
			}
			break;

		default:
				printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
			ok2=0;
			break;

	}	

} while (ok2==0);



do{
ok3=1;


printf("Your dexterity is now %d.\nOn to constitution, do the same thing again.\nConstitution represents your health and stamina:\n",dexterity);


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&con);


switch (con) {


	case 1:
		if (at1 >0) {
			constitution = at1;
			at1=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;


	case 2:
		if (at2 >0) {
			constitution = at2;
			at2=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;

	

	case 3:
		if (at3 >0) {
			constitution = at3;
			at3=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;

	

	case 4:
		if (at4 >0) {
			constitution = at4;
			at4=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;

	

	case 5:
		if (at5 >0) {
			constitution = at5;
			at5=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;

	

	case 6:
		if (at6 >0) {
			constitution = at6;
			at6=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok3=0;
		}
		break;


	default:
		printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
	ok3=0;
	break;

}


} while (ok3==0);



do{
ok4=1;

printf("Your constitution just became %d.\nLets move on with your intelligence (if you have any...).\nIntelligence is the intelligence of your character (big suprise):\n",constitution);


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&int2);


switch (int2) {


	case 1:
		if (at1 >0) {
			intelligence = at1;
			at1=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;


	case 2:
		if (at2 >0) {
			intelligence = at2;
			at2=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;
	
	case 3:
		if (at3 >0) {
			intelligence = at3;
			at3=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;
	
	case 4:
		if (at4 >0) {
			intelligence = at4;
			at4=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;

	
	case 5:
		if (at5 >0) {
			intelligence = at5;
			at5=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;

	
	case 6:
		if (at6 >0) {
			intelligence = at6;
			at6=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok4=0;
		}
		break;


	default:
		printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
	ok4=0;
	break;

}


} while (ok4==0);



do{
ok5=1;


printf("Your IQ is now %d....or was it your intelligence...?\nAaaaaanyway, on to your wisdom.\nWisdom describes your common sense and perception:\n",intelligence);



fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&wis);


switch (wis) {

	
	case 1:
		if (at1 >0) {
			wisdom = at1;
			at1=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;

	
	case 2:
		if (at2 >0) {
			wisdom = at2;
			at1=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;
	
	case 3:
		if (at3 >0) {
			wisdom = at3;
			at3=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;
	
	case 4:
		if (at4 >0) {
			wisdom = at4;
			at4=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;

	case 5:
		if (at5 >0) {
			wisdom = at5;
			at5=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;

	
	case 6:
		if (at6 >0) {
			wisdom = at6;
			at6=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok5=0;
		}
		break;


	default:
		printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
	ok5=0;
	break;

}

} while (ok5==0);



do{
ok6=1;


printf("%d is the wisdom score of your character.\nThe last atribute is charisma.\nIt is your personal magnetism, force of personality and persuasiveness:\n",wisdom);


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&cha);


switch (cha) {

	
	case 1:
		if (at1 >0) {
			charisma = at1;
			at1=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;

	case 2:
		if (at2 >0) {
			charisma = at2;
			at2=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;

	
	case 3:
		if (at3 >0) {
			charisma = at3;
			at3=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;

	
	case 4:
		if (at4 >0) {
			charisma = at4;
			at4=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;
	
	case 5:
		if (at5 >0) {
			charisma = at5;
			at5=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;
	
	case 6:
		if (at6 >0) {
			charisma = at6;
			at6=-1;
		} else {
			printf("You can only use an attribute once\n");
			ok6=0;
		}
		break;


	default:
		printf("Eh...even if you don't 'need' this ability the mechanics of this program forces you to have it..\n");
	ok6=0;
	break;
}


} while (ok6==0);

printf("And your final score, will say charisma is %d.\nPress 1 to continue:\n",charisma);

fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&gaah);





if(gaah==1)


switch (character) {

case 1:

printf("Strenght= %d\n",strength);
printf("Dexterity= %d\n",dexterity);
printf("Constitution= %d\n",constitution);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);

break;


case 2:
		

printf("Strenght= %d\n",strength);
printf("Dexterity= %d +2 (Racial)\n",dexterity);
printf("Constitution= %d -2 (Racial)\n",constitution);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);
		
break;


case 3:
		
printf("Strenght= %d\n",strength);
printf("Dexterity= %d\n",dexterity);
printf("Constitution= %d +2 (Racial)\n",constitution);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d -2 (Racial)\n",charisma);

break;


case 4:
		
printf("Strenght= %d  -2 (Racial)\n",strength);
printf("Dexterity= %d\n",dexterity);
printf("Constitution= %d +2 (Racial)\n",constitution);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);

break;


}

printf("\nIt is now time to chose your class.\nThe following classes are selectable:\n");

do{

printf("1.Warrior\n2.Sorcerer\n3.Rogue\n");


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character4);

switch (character4) {

case 1:
printf("The warrior is a strong and (often) fearless close combat fighter\n");

break;


case 2:
printf("The sorcerer is a spellcaster who prefer ranged combat\n");

break;


case 3:
printf("The rogue is also a close combat fighter but he relies on speed and stealth instead of strenght\n");

break;


}


printf("Press 1 To accept your class or 0 to choose a new one:\n");

	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&accept2);


    } while (accept2==0);


if (accept2==1)
printf("You have now chosen your class.\nPress 1 to chose your abilities.\n");


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character5);

if (character5==1)


do {
ok7=1;


printf("You can chose two of the following abilities:\n1.Toughness (+3 hitpoints)\n2.Cleave (Gain an extra attack when your opponents hp drops below 0)\n3.Endurance (Tougher and more resistant to non-lethal damage, such as fatigue)\n4.Maximize spell (Your spell does its ultimate effect)\n5.Scribe scroll (Capable of sharing spells with others)\n6.Still spell (You can cast your spells without gestures)\n7.Stealthy (+2 on all hide- and move silently checks)\n8.Lightning reflexes (You make extra attacks of opportunity's)\n9.Alertness (+2 on all listen- and spot checks)\n");


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&skill);


switch (skill) {


case 1:
printf("Your first skill is Toughness.\n");

break;

case 2:
printf("Your first skill is Cleave.\n");

break;

case 3:
printf("Your first skill is Endurance.\n");

break;

case 4:
printf("Your first skill is Maximize spell.\n");

break;

case 5:
printf("Your first skill is Scribe scroll.\n");

break;

case 6:
printf("Your first skill is Still spell.\n");

break;

case 7:
printf("Your first skill is Stealthy.\n");

break;

case 8:
printf("Your first skill is Lightning reflexes.\n");

break;

case 9:
printf("Your first skill is Alertness.\n");

break;

default: 
printf("You have to pick a skill.\n");
ok7=0;
break;

}

} while (ok7==0);



printf("Press 1 to chose your second skill, not the same of course...\n");



fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character6);

if (character6==1)



do{
	ok8=1;

	printf("1.Toughness (+3 hitpoints)\n2.Cleave (Gain an extra attack when your opponents hp drops below 0)\n3.Endurance (Tougher and more resistant to non-lethal damage, such as fatigue)\n4.Maximize spell (Your spell does its ultimate effect)\n5.Scribe scroll (Capable of sharing spells with others)\n6.Still spell (You can cast your spells without gestures)\n7.Stealthy (+2 on all hide- and move silently checks)\n8.Lightning reflexes (You make extra attacks of opportunity's)\n9.Alertness (+2 on all listen- and spot checks)\n");


	fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&skill2);

	if (skill2==skill) {

		printf("You can only have one of each skill\n");
		ok8=0;

	} else {


	switch (skill2) {



	case 1:
		printf("Your second skill is Toughness.\n");
		break;

	case 2:
		printf("Your second skill is Cleave.\n");
		break;

	case 3:
		printf("Your second skill is Endurance.\n");
		break;

	case 4:
		printf("Your second skill is Maximize spell.\n");
		break;

	case 5:
		printf("Your second skill is Scribe scroll.\n");
		break;

	case 6:
		printf("Your second skill is Still spell.\n");
		break;

	case 7:
		printf("Your second skill is Stealthy.\n");
		break;

	case 8:
		printf("Your second skill is Lightning reflexes.\n");
		break;

	case 9:
		printf("Your second skill is Alertness.\n");
		break;

default:
printf("You have to pick a skill\n");
ok8=0;
break;

	}
}

} while (ok8==0);

printf("Press 1 to continue\n");


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character7);


if (character7==1)
printf("Your misc information is now being calculated, please wait...\nEstimated time remaining: 16 minutes...\nOr you could just press 1...\n");


fgets(line,sizeof(line),stdin);
	sscanf(line,"%d",&character8);

if (character8==1)





switch (character) {

case 1:
printf("\nHuman ");
break;

case 2:
printf("Elf ");
break;

case 3:
printf("Dwarf ");
break;

case 4:
printf("Gnome ");
break;

}


switch (character4) {

case 1:
printf("Warrior\n");
break;

case 2:
printf("Sorcerer\n");
break;

case 3:
printf("Rogue\n");
break;

}

printf("\nAtributes:\n");

switch (character) {
case 1:

ndex=dexterity;

break;

case 2:

ndex=dexterity+2;

break;

case 3:

ndex=dexterity;

break;

case 4:

ndex=dexterity;
}


switch (character) {
case 1:

ncon=constitution;
break;

case 2:

ncon=constitution-2;
break;

case 3:

ncon=constitution+2;
break;

case 4:

ncon=constitution+2;
break;

}


switch (character) {
case 1:

nstr=strength;
break;

case 2:

nstr=strength;
break;

case 3:

nstr=strength;
break;

case 4:

nstr=strength-2;
break;

}


switch (character) {




case 1:

printf("Strenght= %d\n",nstr);
printf("Dexterity= %d\n",ndex);
printf("Constitution= %d\n",constitution);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);

break;

case 2:
		

printf("Strenght= %d\n",nstr);
printf("Dexterity= %d\n",ndex);
printf("Constitution= %d\n",ncon);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);
		
break;

case 3:
		
printf("Strenght= %d\n",nstr);
printf("Dexterity= %d\n",ndex);
printf("Constitution= %d\n",ncon);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d -2 (Racial)\n",charisma);

break;

case 4:
		
printf("Strenght= %d\n",nstr);
printf("Dexterity= %d\n",ndex);
printf("Constitution= %d\n",ncon);
printf("Intelligence= %d\n",intelligence);
printf("Wisdom= %d\n",wisdom);
printf("Charisma= %d\n",charisma);

break;

}

printf("\nEquipment:\n");


switch (character4) {

case 1:
printf("Equipment:\nScale mail (+4 AC, speed 20ft)\nHeavy wooden shield (+2 AC)\nWaraxe (1d10 dmg, one-hand, slashing)\n");
break;

case 2:
printf("No armor (speed 30ft)\nShortspear (1d6 dmg, one-hand, piercing)\nFireball spell (1d6 dmg*level, range 400ft)\n");
break;

case 3:
printf("Leather armor (+2 AC, speed 20ft)\nShort Sword (1d4 dmg, one-hand, piercing)\nDagger (1d3 dmg, one-hand, piercing)\n");
break;

}


printf("\nMisc values:\n");


switch (character) {
case 1:

nstr=strength;
break;

case 2:

nstr=strength;
break;

case 3:

nstr=strength;
break;

case 4:

nstr=strength-2;
break;

}

wdmg = mod[nstr];
sdmg = mod[nstr];
rdmg = mod[nstr];

switch (character4) {

case 1:
printf("1d10 + %d Damage\n",wdmg);
break;

case 2:
printf("1d6 + %d Damage\n",sdmg);
break;

case 3:
printf("1d4 + %d Damage\n",rdmg);
break;

}



switch (character) {
case 1:

ndex=dexterity;

break;

case 2:

ndex=dexterity+2;

break;

case 3:

ndex=dexterity;

break;

case 4:

ndex=dexterity;

break;

}



wac = mod[ndex]+10+4+2;
sac = mod[ndex]+10;
rac = mod[ndex]+10+2;


switch (character4) {


case 1:
printf("Armor class %d\n",wac);
break;
						
case 2:
printf("Armor class %d\n",sac);
break;

case 3:
printf("Armor class %d\n",rac);
break;

}



switch (character) {

case 1:

ncon=constitution;

break;

case 2:

ncon=constitution-2;

break;

case 3:

ncon=constitution+2;

break;

case 4:

ncon=constitution+2;

break;

}

if (skill==1){

	whp = roll_d10()+10+mod[ncon]+3;
	shp = roll_d4()+4+mod[ncon]+3;
	rhp = roll_dice()+6+mod[ncon]+3;
	}

if (skill2==1){
	whp = roll_d10()+10+mod[ncon]+3;
	shp = roll_d4()+4+mod[ncon]+3;
	rhp = roll_dice()+6+mod[ncon]+3;
	}


else {
	whp = roll_d10()+10+mod[ncon];
	shp = roll_d4()+4+mod[ncon];
	rhp = roll_dice()+6+mod[ncon];
	}


switch (character4) {

case 1:
printf("%d Hit points\n",whp);
break;

case 2:
printf("%d Hit points\n",shp);
break;

case 3:
printf("%d Hit points\n",rhp);
break;

}



wgp = roll_2d4();
sgp = roll_3d4();
rgp = roll_4d4();

switch (character4) {

case 1:
printf("%d Gold pieces\n",wgp);
break;

case 2:
printf("%d Gold pieces\n",sgp);
break;

case 3:
printf("%d Gold pieces\n",rgp);
break;

}


printf("\nSkills:\n");


switch (skill) {


case 1:
printf("Toughness\n");

break;

case 2:
printf("Cleave\n");

break;

case 3:
printf("Endurance\n");

break;

case 4:
printf("Maximize spell\n");

break;

case 5:
printf("Scribe scroll\n");

break;

case 6:
printf("Still spell\n");

break;

case 7:
printf("Stealthy\n");

break;

case 8:
printf("Lightning reflexes\n");

break;

case 9:
printf("Alertness\n");

break;

}







switch (skill2) {


case 1:
printf("Toughness\n");

break;

case 2:
printf("Cleave\n");

break;

case 3:
printf("Endurance\n");

break;

case 4:
printf("Maximize spell\n");

break;

case 5:
printf("Scribe scroll\n");

break;

case 6:
printf("Still spell\n");

break;

case 7:
printf("Stealthy\n");

break;

case 8:
printf("Lightning reflexes\n");

break;

case 9:
printf("Alertness\n");

break;

}










return(0);
}




