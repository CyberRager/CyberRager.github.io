#include <iostream>
#include <ctime>

int health = 100;
int money = 0;
int drop;
int drop2;
int drop3;
int feather = 0;
int hide =0;
int xp;
int medpack = 0;
int banalc = 0;
char options;
char options2;
bool optionscond;
bool optionscond2;

bool globalenemies;
bool enemies;
char fightblock;

char selldec;
char buysell;

char runfight;
bool runaway;
void funkrunfight();
char runfightdec;
void funkrunfight2();

bool merchcond = false;
bool doccond = false;

bool specialcond = false;

int attack;
int punch;

int snakehealth;
int snakehealth2;
int eaglehealth;
int eaglehealth2;


char fightenemy;

void funkoptions();
void funkoptions2();
void funksnake();
void funkhealth();

void tradeloot();

void combatdisplay();
char combatoptions;

int snake = false;
int snake2 = false;
int eagle = false;
int eagle2 = false;

bool snake1dead = false;
bool snake2dead;
bool eagle1dead;
bool eagle2dead;

int attemptbill;

void funksnake2();
void funkeagle();
void funkeagle2();
void funkfight();

void funkfightspec();

void funkfight2();
void funkhealthcheck();
void funcdrop(){};


void quest1();
void quest2();
void quest3();
bool questdone1 = false;
bool questdone2 = false;
bool questdone3 = false;

void caseenemies();
int rankenemies;

int dynamite = 0;
bool rock = true;

bool combat = true;

void resetenemies();
bool enemiesblock2;
bool enemiesblock3;
bool enemiesblock4;
bool enemiesblock5;
bool enemiesblock6;
bool enemiesblock7;
bool enemiesblock8;
bool enemiesblock9;
bool enemiesblock10;
bool enemiesblock11;
bool enemieskilledblock2;
bool enemieskilledblock3;
bool enemieskilledblock4;
bool enemieskilledblock5;
bool enemieskilledblock6;
bool enemieskilledblock7;
bool enemieskilledblock8;
bool enemieskilledblock9;
bool enemieskilledblock10;
bool enemieskilledblock11;

void checksnake1();
void checksnake2();
void checkeagle1();
void checkeagle2();

bool jankyjimbob = true;
bool uglyufus = true;
bool thedustybastard = true;
bool horsefaceheb = true;

int main (){
    srand(time(NULL));
    int num = (rand() % 20)+1;

    char getup;
    char bar;
    char town;
    char merch;
    char doc;
    char wild;
    char wilddecision;
    
    char merch2;
    char doc2;

    char criminals;

    char dec2;
    char dec3;
    char dec4;
    char dec5;
    char dec6;
    char dec7;
    char dec8;
    char dec9;
    char dec10;
    char dec11;
    char dec12;
    char dec13;
    char dec14;

    bool run = true;
    bool towncond = false;
    bool intro = true;
    bool merchcond = false;
    bool doccond = false;
    bool bardcond = false;
    bool wildcond = false;

    bool block2 = false;
    bool block3 = false;
    bool block4 = false;
    bool block5 = false;
    bool block6 = false;
    bool block7 = false;
    bool block8 = false;
    bool block9 = false;
    bool block10 = false;
    bool block11 = false;
    bool block12 = false;
    bool block13 = false;
    bool block14 = false;

    bool simblock = false;




    int barkeepbill;
    bool barkeepsecret = false;

    int samurai = 0;
    bool revolver = false;
    int bb = 0;
    int plant = 0;

    while(run == true){
        
        while (intro == true)
        {std::cout<<"You wake up drunk in a bar, do you get up? Y/N"<<'\n';
        std::cin>> getup;
        std::cout<<'\n';
        
        switch (getup){
        case 'Y':
            std::cout<< "You got up and the bartender doesn't spit on you, tells you the story of the bar and tells you that you owe him 20 USD" << '\n'<< " He tells you about the villains also. ";
            std::cout<<"The barender tells you the inns and outs of the town, he tells you that you could get to work by punching Snakes and Eagles"<< '\n';
            barkeepbill = 20;
            intro = false; 
            bardcond = true; 
            break;
            case 'y':
            std::cout<< "You got up and the bartender doesn't spit on you, tells you the story of the bar and tells you that you owe him 20 USD " << '\n'<< " He tells you about the villains also. ";
            std::cout<<"The barender tells you the inns and outs of the town, he tells you that you could get to work by punching Snakes and Eagles"<< '\n';
            barkeepbill = 20;
            intro = false; 
            bardcond = true; 
            break;
            case 'N':
            std::cout<< "You got up and the bartender doesn't spit on you, tells you the story of the bar and tells you that you owe him 30 USD " << '\n'<< " He tells you about the villains also. ";
            std::cout<<"The barender tells you the inns and outs of the town, he tells you that you could get to work by punching Snakes and Eagles"<< '\n';
            barkeepbill = 30;
            intro = false; 
            bardcond = true; 
            break;
            case 'n':
            std::cout<< "You got up and the bartender spits on you, tells you the story of the bar and tells you that you owe him 30 USD " << '\n'<< " He tells you about the villains also. ";
            std::cout<<" The barender tells you the inns and outs of the town, he tells you that you could get to work by punching Snakes and Eagles"<< '\n';
            barkeepbill = 30;
            intro = false; 
            bardcond = true; 
            break;
        default:
        intro = true;
        bardcond = false;    
        break;}
        }
        
        
        
        

        


        while (bardcond == true){
            std::cout<<"You find yourself in a bar... do you"<<'\n' <<"Socialise (quests)         ------- Q"<<'\n' <<"Hear the bartender's story ------- S"<<'\n' <<"Leave to Town              ------- L"<<'\n' 
            <<"Pay for Damages            ------- P"<<'\n'          << "Check Options             ------- O" <<'\n';
            std::cin>> bar;
            std::cout<< ""<< '\n';
            
            switch (bar)
            {
            case 'Q':
                quest1();
                break;
            case 'q':
                quest1();
                break;
            case 'S':
                std::cout<< "Old bartender tells you his story"<< '\n'<< '\n';
                std::cout<< "The old bartender asks you whether you'd like to hear what he knows about the men who attacked you ------ Y/N" << '\n';
                std::cin>> criminals;
                switch (criminals)
                {
                case 'Y':
                    std::cout<< "The bartender tells you about the first criminal, Janky Jimbob." << '\n' << " I heard they call him Janky because one day he went to take a piss and a snake jumped out and bit him, and now his tool don't work no more (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<< "I heard that the bastard likes his own sister, a bit too much, the crazy redneck went nuts when the rumors spread and left his peaceful life guns blazin' (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"The bartender tells you about the second criminal, Ugly Ufus." << '\n' << " No clue why they call him that, but his ass is prettier than his face (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"The bartender tells you about the third criminal, Terry the Trigger." << '\n' << " They call him Trigger because he looks like a horse (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"Finally the toughest bastard in the west" << '\n' << " I've heard that his mother was a prostitute and the poor bastard got hassled so badly that one em days he robbed the sheriff of the town. Afterwards the tough bastard started cow rustling, on his own, several lawmen have tried to claim his bounty but they've all fallen before him. As an outlaw he impresses young men into his force and together they cause trouble for the neighborin towns. The law of the territory dares not step into these lands and it is too hostile, even so, they'd get ambushed by the Bastard's gang. We have payed our toll so he left us be, but it's just a matter of time he comes again (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    bardcond = true;
                    break;
                    case 'y':
                    std::cout<< "The bartender tells you about the first criminal, Janky Jimbob." << '\n' << " I heard they call him Janky because one day he went to take a piss and a snake jumped out and bit him, and now his tool don't work no more (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<< "I heard that the bastard likes his own sister, a bit too much, the crazy redneck went nuts when the rumors spread and left his peaceful life guns blazin' (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"The bartender tells you about the second criminal, Ugly Ufus." << '\n' << " No clue why they call him that, but his ass is prettier than his face (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"The bartender tells you about the third criminal, Terry the Trigger." << '\n' << " They call him Trigger because he looks like a horse (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    std::cout<<"Finally the toughest bastard in the west" << '\n' << " I've heard that his mother was a prostitute and the poor bastard got hassled so badly that one em days he robbed the sheriff of the town. Afterwards the tough bastard started cow rustling, on his own, several lawmen have tried to claim his bounty but they've all fallen before him. As an outlaw he impresses young men into his force and together they cause trouble for the neighborin towns. The law of the territory dares not step into these lands and it is too hostile, even so, they'd get ambushed by the Bastard's gang. We have payed our toll so he left us be, but it's just a matter of time he comes again (ENTER ANY KEY to continue)" << '\n';
                    std::cin>>criminals;
                    bardcond = true;
                    break;
                    break;
                    case 'N':
                    std::cout<< "You skip the most valuable intro of the game, are you even playing???" << '\n';
                    bardcond = true;
                    break;
                    case 'n':
                    std::cout<< "You skip the most valuable intro of the game, are you even playing???" << '\n';
                    bardcond = true;
                    break;
                
                default:
                    break;
                }

                break;
             case 's':
                std::cout<< "Old bartender tells you his story"<< '\n'<< '\n';
                break;
            case 'L':
            towncond = true;
            bardcond = false;
                std::cout<< "You leave to the town outside"<< '\n';
            case 'l':
            towncond = true;
            bardcond = false;
                std::cout<< "You leave to the town outside"<< '\n';
                break;
                case 'O':
                funkoptions();
                break;
                case 'o':
                funkoptions();
                break;
        
            case 'P':
                if ((money >=  barkeepbill) && (barkeepsecret == false))
                {
                    std::cout<< "The barkeep is glad that you have paid your dues, he tells you about his adventures from the wildresness... During the story, you overhear information relevant to bandits you learn a secret way to take to hunt down those ruffians and ambush them from the side!"<< '\n' << '\n' ;
                    money = money - barkeepbill;
                    barkeepsecret = true;
                    bardcond = true;
                }
                else if (money <= barkeepbill){
                    std::cout<< "You have no money, idiot"<< '\n' << '\n';
                    bardcond = true;
                    attemptbill+=1;
                    if (attemptbill == 2){
                        std::cout<< "You nag the barkeep into lowering your bill, you bully him and he lowers your bill by 5 USD" << '\n';
                        barkeepbill-=5;
                        std::cout<< "Your bill is now " << barkeepbill << " USD" << '\n';
                    }
                }
                else
                {
                    std::cout<< "You have payed your bill already, moron! " << '\n'<< '\n';
                    bardcond = true;
                }
                break;
        case 'p':
                if ((money >=  barkeepbill) && (barkeepsecret == false))
                {
                    std::cout<< "The barkeep is glad that you have paid your dues, he tells you about his adventures from the wildresness... During the story, you overhear information relevant to bandits you learn a secret way to take to hunt down those ruffians and ambush them from the side!"<< '\n' << '\n' ;
                    money = money - barkeepbill;
                    barkeepsecret = true;
                    bardcond = true;
                }
                else if (money <= barkeepbill){
                    std::cout<< "You have no money, idiot"<< '\n' << '\n';
                    bardcond = true;
                    attemptbill+=1;
                    if (attemptbill == 2){
                        std::cout<< "You nag the barkeep into lowering your bill, you bully him and he lowers your bill by 5 USD" << '\n';
                        barkeepbill-=5;
                        std::cout<< "Your bill is now " << barkeepbill << " USD" << '\n';
                    }

                }
                else
                {
                    std::cout<< "You have payed your bill already, moron! " << '\n'<< '\n';
                    bardcond = true;
                }
                break;
            

            default:
                break;
            }
        }
        
        


        while (towncond == true){
            globalenemies = true;
            resetenemies();
            std::cout<<"You find yourself in the town... do you"<<'\n' <<"Visit the Doctor    ------- D"<<'\n' <<"Visit the Merchant  ------- M"<<'\n' <<"Visit the Saloon    ------- S"<<'\n' <<"Visit the Wilderness------- W"<<'\n';
            std::cout<<"Check Options ----- O" << '\n';
            std::cin>> town;
            std::cout<< ""<< '\n';
            
            switch (town)
            {
            case 'D':
            doccond = true;
             towncond = false;
                std::cout<< "You visit the Doctor"<< '\n'<< '\n';
                break;
            case 'd':
            doccond = true;
             towncond = false;
                std::cout<< "You visit the Doctor"<< '\n'<< '\n';
                break;
            case 'M':
            merchcond = true;
             towncond = false;
                std::cout<< "You visit the Merchant"<< '\n'<< '\n';
                break;
             case 'm':
             merchcond = true;
             towncond = false;
                std::cout<< "You visit the Merchant"<< '\n'<< '\n';
                break;
            case 'S':
            towncond = false;
            bardcond = true;
                std::cout<< "You visit the Saloon "<< '\n'<< '\n';
                break;
            case 's':
            towncond = false;
            bardcond = true;
            std::cout<< "You visit the Saloon"<< '\n'<< '\n';

                case 'W':
                towncond = false;
                wildcond = true;
                    std::cout<< "You visit the Wilderness "<< '\n'<< '\n';
                    break;
                case 'w':
                towncond = false;
                wildcond = true;
                    std::cout<< "You visit the Wildrerness"<< '\n'<< '\n';
                break;
                case 'O':
                funkoptions();
                break;
                case 'o':
                funkoptions();
                break;
            default:
            towncond = true;
                break;
            }
        }




        



        while (merchcond == true){
            std::cout<<"You find yourself in the shop... do you"<<'\n' <<"Seek for quests            ------- Q"<<'\n' <<"Hear the merchant's story  ------- S"<<'\n' <<"Trade items             ------- T"<<'\n' <<"Leave the store            ------- L"<<'\n';
            std::cin>> merch;
            std::cout<< ""<< '\n';
            
            switch (merch)
            {
            case 'Q':
                quest2();
                break;
            case 'q':
                quest2();
                break;
            case 'S':
                std::cout<< "You visit the Merchant, he tells you his story"<< '\n'<< '\n';
                break;
             case 's':
                std::cout<< "You visit the Merchant, he tells you his story"<< '\n'<< '\n';
                break;
            case 'O':
                funkoptions();
                break;
            case 'o':
                funkoptions();
                break;


            case 't':
            std::cout<<"Would you like to buy or sell tiems?" << '\n';
            std::cout<<"Buy  items ------ B" << '\n';
            std::cout<<"Sell items ------ S" << '\n';
            std::cin>> buysell;
            switch (buysell)
            {
            case 'B':
            std::cout<< "What would you like to buy? "<< '\n'<< '\n';
            std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
            std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
            std::cin>> merch2;
            switch (merch2)
            {
        case 'r':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                    merchcond = true;
                }
                break;
        case 'R':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                    merchcond = true;
                }
                break;
        
        case 'D':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n';
                    merchcond = true;
                }
                break;
        case 'd':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                    merchcond = true;
                }
                break;


            default:
                break;
            }
            break;
    case 'b':
            std::cout<< "What would you like to buy? "<< '\n'<< '\n';
            std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
            std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
            std::cin>> merch2;
            switch (merch2)
            {
        case 'r':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                    merchcond = true;
                }
                break;
        case 'R':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                    merchcond = true;
                }
                break;
        
        case 'D':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n';
                    merchcond = true;
                }
                break;
        case 'd':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                    merchcond = true;
                }
                break;


            default:
                break;
            }
            break;
            case 'S':
            tradeloot();
            break;
            case 's':
            tradeloot();
            break;
            
            default:
                merchcond = true;
                break;
            }

            break;
            case 'T':
            std::cout<<"Would you like to buy or sell tiems?" << '\n';
            std::cout<<"Buy  items ------ B" << '\n';
            std::cout<<"Sell items ------ S" << '\n';
            std::cin>> buysell;
            switch (buysell)
            {
            case 'B':
            std::cout<< "What would you like to buy? "<< '\n'<< '\n';
            std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
            std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
            std::cin>> merch2;
            switch (merch2)
            {
        case 'r':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                    merchcond = true;
                }
                break;
        case 'R':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                    merchcond = true;
                }
                break;
        
        case 'D':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n';
                    merchcond = true;
                }
                break;
        case 'd':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                    merchcond = true;
                }
                break;


            default:
                break;
            }
            break;
    case 'b':
            std::cout<< "What would you like to buy? "<< '\n'<< '\n';
            std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
            std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
            std::cin>> merch2;
            switch (merch2)
            {
        case 'r':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                    merchcond = true;
                }
                break;
        case 'R':
                if ((money >=  20) && (revolver == false))
                {
                    std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                    money = money - 20;
                    revolver = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                    merchcond = true;
                }
                break;
        
        case 'D':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n';
                    merchcond = true;
                }
                break;
        case 'd':
                if ((money >=  30) && (dynamite == false))
                {
                    std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                    money = money - 30;
                    dynamite = true;
                    merchcond = true;
                }
                else
                {
                    std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                    merchcond = true;
                }
                break;


            default:
                break;
            }
            break;
            case 'S':
            tradeloot();
            break;
            case 's':
            tradeloot();
            break;
            
            default:
                merchcond = true;
                break;
            }
            break;






    case 'P':
                std::cout<< "What would you like to buy? "<< '\n'<< '\n';
                std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
                std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
                std::cin>> merch2;
                switch (merch2)
                {
            case 'r':
                    if ((money >=  20) && (revolver == false))
                    {
                        std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                        money = money - 20;
                        revolver = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                        merchcond = true;
                    }
                    break;
            case 'R':
                    if ((money >=  20) && (revolver == false))
                    {
                        std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                        money = money - 20;
                        revolver = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                        merchcond = true;
                    }
                    break;
            
            case 'D':
                    if ((money >=  30) && (dynamite == false))
                    {
                        std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                        money = money - 30;
                        dynamite = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own Dynamite!" << '\n';
                        merchcond = true;
                    }
                    break;
            case 'd':
                    if ((money >=  30) && (dynamite == false))
                    {
                        std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                        money = money - 30;
                        dynamite = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                        merchcond = true;
                    }
                    break;


                default:
                    break;
                }
                break;
    case 'p':
            std::cout<< "What would you like to buy? "<< '\n'<< '\n';
                std::cout<< "Purchase Revolver(R) ----- 20USD "<< '\n' ;
                std::cout<< "Purchase Dynamite(D) ----- 30USD "<< '\n' ;
                std::cin>> merch2;
                switch (merch2)
                {
            case 'r':
                    if ((money >=  20) && (revolver == false))
                    {
                        std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                        money = money - 20;
                        revolver = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own a revolver!" << '\n' << '\n';
                        merchcond = true;
                    }
                    break;
            case 'R':
                    if ((money >=  20) && (revolver == false))
                    {
                        std::cout<< "You now have a revolver, however you'll still have to punch enemies to death since even this big iron is useless against them..."<< '\n' << '\n' ;
                        money = money - 20;
                        revolver = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own a revolver!" << '\n'<< '\n';
                        merchcond = true;
                    }
                    break;
            
            case 'D':
                    if ((money >=  30) && (dynamite == false))
                    {
                        std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n' ;
                        money = money - 30;
                        dynamite = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own Dynamite!" << '\n';
                        merchcond = true;
                    }
                    break;
            case 'd':
                    if ((money >=  30) && (dynamite == false))
                    {
                        std::cout<< "You now have a couple sticks of dynamite, blasts the ruffians away with this EXPLOSIVE JUSTICE!!!"<< '\n' << '\n';
                        money = money - 30;
                        dynamite = true;
                        merchcond = true;
                    }
                    else
                    {
                        std::cout<< "You either have no money or own Dynamite!" << '\n' << '\n';
                        merchcond = true;
                    }
                    break;


                default:
                    break;
                }
                break;


            








            case 'L':
                merchcond = false;
                towncond = true;
                std::cout<< "You leave the store and head to the town "<< '\n'<< '\n';
                break;
            case 'l':
                merchcond = false;
                towncond = true;
                std::cout<< "You leave the store and head to the town"<< '\n'<< '\n';
                break;
            default:
            merchcond = true;
                break;
            }
        }

        while (doccond == true){
            std::cout<<"You find yourself in the doc's office... do you"<<'\n' <<"Seek for quests       ------- Q"<<'\n' <<"Hear the doc's story  ------- S"<<'\n' <<"Purchase items        ------- P"<<'\n' <<"Leave the store       ------- L"<<'\n';
            if ((samurai == 1)||(samurai == 2)){std::cout<<"Ask about Samurai ----- A"<< '\n';
            }
            if (samurai == 2){std::cout<<"Pay for compensation ----- C"<< '\n';
            }
            std::cin>> doc;
            std::cout<< ""<< '\n';


            switch (doc)
            {
            case 'Q':
                quest3();
                break;
            case 'q':
                quest3();
                break;
            case 'S':
                std::cout<< "You visit the Doc, he tells you his story"<< '\n'<< '\n';
                break;
             case 's':
                std::cout<< "You visit the Doc, he tells you his story"<< '\n'<< '\n';
                break;
            case 'O':
                funkoptions();
                break;
            case 'o':
                funkoptions();
                break;
            case 'L':
                doccond = false;
                towncond = true;
                std::cout<< "You leave the doc and head to the town "<< '\n'<< '\n';
                    break;
            case 'l':
                doccond = false;
                towncond = true;
                    std::cout<< "You leave the doc and head to the town"<< '\n'<< '\n';
            case 'P':
                std::cout<< "What would you like to buy? (R for return) "<< '\n'<< '\n';
                std::cout<< "Purchase Healing Pack        (75HP)      (H) ----- 20USD "<< '\n' ;
                std::cout<< "Purchase Bandages & Alcohol  (30HP)      (B) ----- 10USD "<< '\n' ;
                std::cout<< "Heal wounds                 (100HP)      (W) -----  8USD "<< '\n' << '\n' ;
                std::cout<< "You have "<< banalc << " Bandages and Alcohol(s) and "<< medpack << " Healing Packs" << '\n' << '\n' ;
                std::cin>> doc2;
                switch (doc2)
                {
            case 'H':
                    if ((money >=  20))
                    {
                        std::cout<< "You have purchased a medpack, you can heal yourself for 75 HP with it! "<< '\n' ;
                        money = money - 20;
                        medpack+=1;
                        std::cout<< "You have "<< medpack << " Healing Packs" << '\n' << '\n' ;
                        doccond = true;
                    }
                    else
                    {
                        std::cout<< "This is United States of America, you can't afford healthcare!" << '\n' << '\n';
                        doccond = true;
                    }
                    break;
            case 'h':
                    if ((money >=  20))
                    {
                        std::cout<< "You have purchased a medpack, you can heal yourself for 75 HP with it! "<< '\n' ;
                        
                        money = money - 20;
                        medpack+=1;
                        std::cout<< "You have "<< medpack << " Healing Packs" << '\n' << '\n' ;
                        doccond = true;
                    }
                    else
                    {
                        std::cout<< "This is United States of America, you can't afford healthcare! " << '\n' << '\n';
                        doccond = true;
                     }
                    break;
            
            case 'B':
            if ((money >=  10))
            {
             std::cout<< "You have purchased a Bandages & Alcohol, you can heal yourself for 30 HP with it! "<< '\n' ;
            money = money - 10;
            banalc+=1;
            std::cout<< "You have "<< banalc << " Bandages and Alcohol(s)" << '\n' << '\n' ;
            doccond = true;
            }
            else
            {
                std::cout<< "You do not have enough money for this item! " << '\n' << '\n';
                doccond = true;
             }
            break;
            case 'b':
            if ((money >=  10))
            {
             std::cout<< "You have purchased a Bandages & Alcohol, you can heal yourself for 30 HP with it! "<< '\n' ;
            money = money - 10;
            banalc+=1;
            std::cout<< "You have "<< banalc << " Bandages and Alcohol(s)" << '\n' << '\n' ;
            doccond = true;
            }
            else
            {
                std::cout<< "You do not have enough money for this item! " << '\n' << '\n';
                doccond = true;
             }
            break;

            case 'W':
            if ((money >=  8) && (health < 100))
            {
                std::cout<< "For a small price of 8 USD, Doc patches you up as best as he can, your health is restored!"<< '\n' << '\n';
                money = money - 8;
                health = 100;
                doccond = true;
            }
            else
            {
                std::cout<< "This is United States of America, you can't afford healthcare, besies, you may be healthy as it is!" << '\n' << '\n';
                doccond = true;
            }
            break;

                    break;
            case 'w':
                    if ((money >=  8) && (health < 100))
                    {
                        std::cout<< "For a small price of 8 USD, Doc patches you up as best as he can, your health is restored!"<< '\n' << '\n';
                        money = money - 8;
                        health = 100;
                        doccond = true;
                    }
                    else
                    {
                        std::cout<< "This is United States of America, you can't afford healthcare, besies, you may be healthy as it is!" << '\n' << '\n';
                        doccond = true;
                    }
                    break;
                case 'p':
                std::cout<< " Capital P please "<< '\n'<< '\n';
                break;
                default:
                doccond = true;
            }
            
            if ((samurai == 1) || (samurai == 2)){
                case 'A':
                std::cout<<"You ask about the samurai, the doctor mentions that there were old rivals and had both competed for a gal some time ago, since the samurai angered doc, he asks for 40 USD compensation" << '\n';
                samurai =2;
                break;
                case 'a':
                std::cout<<"You ask about the samurai, the doctor mentions that there were old rivals and had both competed for a gal some time ago, since the samurai angered doc, he asks for 40 USD compensation" << '\n';
                samurai =2;
                break;
                case 'c':
                if (money >= 40){
                    std::cout<<" You pay for compensation and you recieve a WAKIZASHI, Doctor informs you that his debts with the samurai are settled!" << '\n';
                    money = money - 40;
                    samurai = 3;
                    break;
                }
                else
                {
                    std::cout<<" You don't have enough money to pay for the compensation!" << '\n';
                    break;
                } break;
                case 'C':
                if (money >= 40){
                    std::cout<<" You pay for compensation and you recieve a WAKIZASHI, Doctor informs you that his debts with the samurai are settled!" << '\n';
                    money = money - 40;
                    samurai = 3;
                    break;
                }
                else
                {
                    std::cout<<" You don't have enough money to pay for the compensation!" << '\n';
                    break;
                } break;
                
                }

            default:
            doccond = true;
                break;
            
        }
    }
    // WILDERNESS 1, 1st block
        while (wildcond == true){
            std::cout<<"You find yourself in the Wildlands, the ways may be mysterious, so choose them wisely "<<'\n' <<"Leave ------- L"<<'\n' << "Go south ----- S" <<'\n';
            if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';};
            std::cout <<"       [  v ] [    ] [    ] [    ]" << '\n';
            std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"       [    ]                     " << '\n'<< '\n';

            std::cin>> wild;
            std::cout<< ""<< '\n';
            switch (wild)
            {
            case 'L':
            towncond = true;
            wildcond = false;
            break;
                std::cout<< "You leave back to town"<< '\n'<< '\n';
            case 'l':
            towncond = true;
                wildcond = false;
                break;
                std::cout<< "You leave back to town"<< '\n'<< '\n';
            case 'S':
            std::cout<< "You head down South"<< '\n'<< '\n';
                block2 = true;
                wildcond = false;
                break;
            case 's':
                    std::cout<< "You head down South"<< '\n'<< '\n';
                    block2 = true;
                    wildcond = false;
                    break;
            case 'O':
                    funkoptions();
                    break;
            case 'o':
                    funkoptions();
                    break;

                    if (plant == 1){
                        case 'P':
                        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            wildcond = true;
                            break;
                            case 'p':
                            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            wildcond = true;
                            break;}
            default:
                    wildcond = true;
                        break;
            }

        }
    
            // WILDERNESS 2, 2nd block
        while (block2 == true)

                    {
                    
                    while (enemiesblock2 == true){
                        
                        std::cout<<"You see a snake standing in your way, do you..."<< '\n';
                        std::cout<<"Fight         --------F"<< '\n';
                        std::cout<<"Run           --------R"<< '\n';
                        funkrunfight2();
                        if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
                        else {std::cout<<"You've been spotted by the enemies! "<< '\n';
                        combat = true;}
                        if (combat == true)
                        {snakehealth = 70;
                            combatdisplay();
                        if (snake1dead == true)
                        {enemiesblock2 = false;}}}

                    std::cout<<"Go Back North --------- N"<<'\n' 
                             <<"Go East       --------- E"<<'\n' 
                             <<"Go West       --------- W" <<'\n'
                             <<"Options       --------- O" <<'\n';
                    if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
                    std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
                    std::cout <<"[    ] [<^> ] [    ] [    ] [    ]" << '\n';
                    std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
                    std::cout <<"       [    ]                     " << '\n'<< '\n';

                    std::cin>> dec2;
                    std::cout<< ""<< '\n';
                    switch (dec2)
                    {
                    case 'N':
                    block2 = false;
                    wildcond = true;
                        std::cout<< "You leave back North"<< '\n'<< '\n';
                        break;
                    case 'n':
                    block2 = false;
                    wildcond = true;
                        std::cout<< "You leave back North"<< '\n'<< '\n';
                        break;
                case 'E':
                    std::cout<< "You head East"<< '\n'<< '\n';
                    block4 = true;
                    block2 = false;
                    break;
                case 'e':
                    std::cout<< "You head East"<< '\n'<< '\n';
                    block4 = true;
                    block2 = false;
                    break;
                    case 'W':
                    std::cout<< "You head West"<< '\n'<< '\n';
                    block3 = true;
                    block2 = false;
                    break;
                    case 'w':
                    std::cout<< "You head West"<< '\n'<< '\n';
                    block3 = true;
                    block2 = false;
                    break;
                    case 'O':
                    funkoptions();
                    break;
                    case 'o':
                    funkoptions();
                    break;
                    if (plant == 1){
                        case 'P':
                        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            block2 = true;
                            break;
                            case 'p':
                            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            block2 = true;
                            break;}
                    default:
                    block2= true;
                        break;
                    
                    
                }
            
        }

            while (block3 == true)
                {
                    while (enemiesblock3 == true){
                        std::cout<<"You see 2 snakes standing in your way, do you..."<< '\n';
                        std::cout<<"Fight           ------F"<< '\n';
                        std::cout<<"Run Back        ------R"<< '\n'
                                 <<"Options         ----- O" <<'\n';;
                        funkrunfight2();
                        if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
                        else {std::cout<<"You've been spotted by the enemies! "<< '\n';
                            combat = true;}
                            if (combat == true)
                            {snakehealth = 70;
                                combatdisplay();
                            if (snake1dead == true)
                            {enemiesblock3 = false;}}}
                std::cout<<"Go back east  --------- E" <<'\n'
                <<         "Options       --------- O" <<'\n';
                if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';};
            std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"[  > ] [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"       [    ]                     " << '\n'<< '\n';
                std::cin>> dec3;
                std::cout<< ""<< '\n';
                switch (dec3)
                {
            case 'E':
                std::cout<< "You head back West" << '\n'<< '\n';
                block2= true;
                block3 = false;
                break;
            case 'O':
                funkoptions();
                break;
            case 'o':
                funkoptions();
                break;
            case 'e':
                        std::cout<< "You head back West" << '\n'<< '\n';
                        block2= true;
                        block3 = false;
                        break;
                if (plant == 1);
                case 'P':
                    std::cout<< "YOU HAVE FOUND THE PANT!!!" << '\n';
                    std::cout<< "BROTHER BEAR CAN BE HEALED NOW!!!" << '\n';
                    plant = 2;
            break;
            case 'p':
            std::cout<< "YOU HAVE FOUND THE PANT!!!" << '\n';
            std::cout<< "BROTHER BEAR CAN BE HEALED NOW!!!" << '\n';
            plant = 2;
    break;
                default:
                block3= true;
                    break;
                }
                
            

        }

            while (block4 == true)
            {
                while (enemiesblock4 == true){
                    std::cout<<"You see 2 snakes standing in your way, do you..."<< '\n';
                    std::cout<<"Fight         --------F"<< '\n';
                    std::cout<<"Run Back      --------R"<< '\n' 
                             <<"Options       --------O" <<'\n';
                    funkrunfight2();
                    if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
                    else {std::cout<<"You've been spotted by the enemies! "<< '\n';
                        combat = true;}
                        if (combat == true)
                        {snakehealth = 70;
                            combatdisplay();
                        if (snake1dead == true)
                        {enemiesblock4 = false;}}}
            if (block4 == true){
            std::cout<<"Go North     --------- N"<<'\n'
                     <<"Go East      --------- E"<<'\n' 
                     <<"Go back West --------- W" << '\n'
                     <<"Go South     --------- S" <<'\n'
                     <<"Options      --------- O" <<'\n';
            if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
            std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"[    ] [    ] [<^v>] [    ] [    ]" << '\n';
            std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
            std::cout <<"       [    ]                     " << '\n'<< '\n';
            std::cin>> dec4;
            std::cout<< ""<< '\n';
            switch (dec4)
            {
            case 'N':
            block5 = true;
            block4 = false;
                std::cout<< "You head North"<< '\n'<< '\n';
                break;
            case 'n':
            block5 = true;
            block4 = false;
                std::cout<< "You head North"<< '\n'<< '\n';
                break;
            case 'E':
                block6 = true;
                block4 = false;
                    std::cout<< "You head East"<< '\n'<< '\n';
                    break;
            case 'e':
                    block6 = true;
                    block4 = false;
                        std::cout<< "You head East"<< '\n'<< '\n';
                        break;
            case 'W':
                    block2= true;
                    block4 = false;
                    std::cout<< "You head back West" << '\n'<< '\n';
                    break;
            case 'w':
                    block2= true;
                    block4 = false;
                    std::cout<< "You head back West" << '\n'<< '\n';
                    break;
            case 'S':
                    block10 = true;
                    block4 = false;
                    std::cout<< "You head South" << '\n'<< '\n';
                    break;

            case 's':
                    block10 = true;
                    block4 = false;
                    std::cout<< "You head South" << '\n'<< '\n';
                    break;
            case 'O':
                    funkoptions();
                    break;
            case 'o':
                    funkoptions();
                    break;

                    if (plant == 1){
                        case 'P':
                        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            block4 = true;
                            break;
                            case 'p':
                            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                            block4 = true;
                            break;}
            default:
            block2= true;
                break;
            }
            
        }
    }


        while (block5 == true)
        {
            while (enemiesblock5 == true){
                std::cout<<"You see 2 snakes standing in your way, do you..."<< '\n';
                std::cout<<"Fight         --------F"<< '\n';
                std::cout<<"Run Back      --------R"<< '\n'
                         <<"Options       --------O" <<'\n';
                funkrunfight2();
                if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
                else {std::cout<<"You've been spotted by the enemies! "<< '\n';
                    combat = true;}
                    if (combat == true)
                    {snakehealth = 70;
                        combatdisplay();
                    if (snake1dead == true)
                    {enemiesblock5 = false;}}}
        if (block5 == true){
        std::cout<<"Go Back South --------- S" <<'\n'
                 <<"Options       --------- O" <<'\n';
        if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
        std::cout <<"       [    ] [  v ] [    ] [    ]" << '\n';
        std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
        std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
        std::cout <<"       [    ]                     " << '\n'<< '\n';
        std::cin>> dec5;
        std::cout<< ""<< '\n';
        switch (dec5)
        {
        case 'S':
            std::cout<< "You head back South" << '\n'<< '\n';
            block4= true;
            block5 = false;
            break;
        case 's':
                std::cout<< "You head back South" << '\n'<< '\n';
                block4= true;
                block5 = false;
                break;
        case 'O':
                funkoptions();
                break;
        case 'o':
                funkoptions();
                break;
                if (plant == 1){
                    case 'P':
                    std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                        block5 = true;
                        break;
                        case 'p':
                        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                        block5 = true;
                        break;}
        default:
        block5= true;
            break;
        }
        
    }
}
    
    while (block6 == true)
    {                     while (enemiesblock6 == true){
        std::cout<<"You see 2 snakes standing in your way, do you..."<< '\n';
        std::cout<<"Fight         --------F"<< '\n';
        std::cout<<"Run Back      --------R"<< '\n'
                 <<"Options       --------O" <<'\n';
        funkrunfight2();
        if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
        else {std::cout<<"You've been spotted by the enemies! "<< '\n';
            combat = true;}
            if (combat == true)
            {snakehealth = 70;
                combatdisplay();
            if (snake1dead == true)
            {enemiesblock6 = false;}}}

    std::cout<<"Go North        --------- N"<<'\n' 
             <<"Go East         --------- E"<<'\n' 
             << "Go back West   --------- W" <<'\n'
             <<"Options         --------- O" <<'\n';
    if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
    std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
    std::cout <<"[    ] [    ] [    ] [<^> ] [    ]" << '\n';
    std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
    std::cout <<"       [    ]                     " << '\n'<< '\n';
    std::cin>> dec6;
    std::cout<< ""<< '\n';
    switch (dec6)
    {
    case 'N':
    block6 = false;
    block7 = true;
        std::cout<< "You head North"<< '\n'<< '\n';
        break;
    case 'n':
    block6 = false;
    block7 = true;
        std::cout<< "You head North"<< '\n'<< '\n';
        break;
    case 'W':
        block4 = true;
        block6 = false;
            std::cout<< "You head back West"<< '\n'<< '\n';
            break;
    case 'w':
            block4 = true;
            block6= false;
                std::cout<< "You head back West"<< '\n'<< '\n';
                break;
    case 'E':
            block8 = true;
            block6=false;
             std::cout<< "You head East" << '\n'<< '\n';
            break;
    case 'e':
            block8 = true;
            block6=false;
            std::cout<< "You head East" << '\n'<< '\n';
            break;

    case 'O':
            funkoptions();
            break;
    case 'o':
            funkoptions();
            break;
            if (plant == 1){
                case 'P':
                std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block6 = true;
                    break;
                    case 'p':
                    std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block6 = true;
                    break;}
    default:
    block6= true;
        break;
    }
    
    }

while (block7 == true)
{                     while (enemiesblock7 == true){
    std::cout<<"You see a snake and an eagle standing in your way, do you..."<< '\n';
    std::cout<<"Fight         --------F"<< '\n';
    std::cout<<"Run Back      --------R"<< '\n'
             <<"Options       --------O" <<'\n';
    funkrunfight2();
    if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
    else {std::cout<<"You've been spotted by the enemies! "<< '\n';
        combat = true;}
        if (combat == true)
        {snakehealth = 70;
            combatdisplay();
        if (snake1dead == true)
        {enemiesblock7 = false;}}}
    
    std::cout<<"Go Back South --------- S" <<'\n'
             <<"Options       --------- O" <<'\n';
    if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
        std::cout <<"       [    ] [    ] [ v  ] [    ]" << '\n';
        std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
        std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
        std::cout <<"       [    ]                     " << '\n'<< '\n';
    std::cin>> dec7;
    std::cout<< ""<< '\n';
    switch (dec7)
    {
    case 'S':
        std::cout<< "You head back South" << '\n'<< '\n';
        block6= true;
        block7 = false;
        break;
    case 's':
            std::cout<< "You head back South" << '\n'<< '\n';
            block6= true;
            block7 = false;
            break;

    case 'O':
            funkoptions();
            break;
    case 'o':
            funkoptions();
            break;
            if (plant == 1){
                case 'P':
                std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block7 = true;
                    break;
                    case 'p':
                    std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block7 = true;
                    break;}
    default:
    block7= true;
        break;
    }

}

while (block8 == true)
{                    while (enemiesblock8 == true){
    std::cout<<"You see an eagle blocking your way, do you..."<< '\n';
    std::cout<<"Fight         --------F"<< '\n';
    std::cout<<"Run Back      --------R"<< '\n'
             <<"Options       --------O" <<'\n';
    funkrunfight2();
    if (runaway == true){ std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
    else {std::cout<<"You've been spotted by the enemies! "<< '\n';
        combat = true;}
        if (combat == true)
        {snakehealth = 70;
            combatdisplay();
        if (snake1dead == true)
        {enemiesblock8 = false;}}}

std::cout<<"Go North     --------- N"<<'\n' 
         <<"Go back West --------- W"<<'\n'
         <<"Options      --------- O" <<'\n';
if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"[    ] [    ] [    ] [    ] [ <^ ]" << '\n';
std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [    ]                     " << '\n'<< '\n';
std::cin>> dec8;
std::cout<< ""<< '\n';
switch (dec8)
{
case 'N':
block9 = true;
block8 = false;
    std::cout<< "You head North"<< '\n'<< '\n';
    break;
case 'n':
block9 = true;
block8 = false;
    std::cout<< "You head North"<< '\n'<< '\n';
    break;
case 'W':
    block6 = true;
    block8 = false;
        std::cout<< "You head back West"<< '\n'<< '\n';
        break;
case 'w':
    block6 = true;
    block8 = false;
        std::cout<< "You head back West"<< '\n'<< '\n';
        break;

case 'O':
        funkoptions();
        break;
case 'o':
        funkoptions();
        break;
        if (plant == 1){
        case 'P':
        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block8 = true;
            break;
            case 'p':
            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block8 = true;
            break;}

default:
block8= true;
    break;
}

}

while (block9 == true)
{

    while (true){
        std::cout<<"You find a strange mansitting on a nearby rock, despite the scorching heat he can be seen in armour. His eyes look strange and misty, his appearance strange. This is a fricking JAPANESE SAMURAI, and you figure he can help you hunt down the ruffians who beat you" <<'\n';
        break;
    }
    if (samurai == 2){
        std::cout<<"The Smurai agrees to help you in your endevour, you will have an easier time fighting the bandits!";
    }
    std::cout<<"Go Back South --------- S" <<'\n'
             <<"Options       --------- O" <<'\n';
    if (samurai < 3){  std::cout<<"Ask the Samurai to help you --------- Q" <<'\n';}
    else
    {
        std::cout<<"Give Samurai his Wakizashi and inform him that the blood feud with doc hhas ended --------- G"<< '\n';
    }
    
    if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
    std::cout <<"       [    ] [    ] [    ] [ v  ]" << '\n';
    std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
    std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
    std::cout <<"       [    ]                     " << '\n'<< '\n';
    std::cin>> dec9;
    std::cout<< ""<< '\n';
    switch (dec9)
    {
    case 'S':
        std::cout<< "You head back South" << '\n'<< '\n';
        block8= true;
        block9 = false;
        break;
    case 's':
            std::cout<< "You head back South" << '\n'<< '\n';
            block8= true;
            block9 = false;
            break;
    if (samurai < 3){
            case 'Q':
            std::cout<< "The samurai explains his story, he has had bad blood with the town's doctor, if you can convince the doctor to reconcile with the Samurai and give him back his wakizashi, the samurai has promised to help you" << '\n'<< '\n';
            block9 = true;
            samurai = 1;
            break;
        case 'q':
                std::cout<< "The samurai explains his story, he has had bad blood with the town's doctor, if you can convince the doctor to reconcile with the Samurai and give him back his wakizashi, the samurai has promised to help you" << '\n'<< '\n';
                block9 = true;
                samurai = 1;
                break;
    }
    else{
        case 'G':
        std::cout<< "The samurai is now convinced that you are willing to help, he is all in for helping you!" << '\n'<< '\n';
        block9 = true;
        samurai = 3;
        break;
    case 'g':
            std::cout<< "The samurai is now convinced that you are willing to help, he is all in for helping you!" << '\n'<< '\n';
            block9 = true;
            samurai = 3;
            break;
}
case 'O':
funkoptions();
break;
case 'o':
funkoptions();
break;
                if (plant == 1);
                case 'P':
                std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block9 = true;
                    break;
                    case 'p':
                    std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
                    block9 = true;
                    break;
    default:
    block9= true;
        break;
    }
}

while (block10 == true)
{
    while (enemiesblock10 == true){
        std::cout<<"You see a snake an an eagle standing in your way, meanicingly, do you..."<< '\n';
        std::cout<<"Fight         --------F"<< '\n';
        std::cout<<"Run           --------R"<< '\n'
                 <<"Options       --------O" <<'\n';
        funkrunfight2();
        if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
                        else {std::cout<<"You've been spotted by the enemies! "<< '\n';
                        combat = true;}
                        if (combat == true)
                        {snakehealth = 70;
                            combatdisplay();
                        if (snake1dead == true)
                        {enemiesblock10 = false;}}}

std::cout<<"Go back North --------- N"<<'\n' 
         <<"Go East       --------- E"<<'\n' 
         <<"Go West       --------- W" <<'\n'
         <<"Options       --------- O" <<'\n';
if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [    ] [<^> ] [    ] [    ]" << '\n';
std::cout <<"       [    ]                     " << '\n'<< '\n';
std::cin>> dec10;
std::cout<< ""<< '\n';
switch (dec10)
{
case 'N':
block4 = true;
block10 = false;
    std::cout<< "You leave back North"<< '\n'<< '\n';
    break;
case 'n':
block4 = true;
block10 = false;
    std::cout<< "You leave back North"<< '\n'<< '\n';
    break;
case 'E':
block11 = true;
block10 = false;
        std::cout<< "You head East"<< '\n'<< '\n';
        break;
        case 'e':
block11 = true;
block10 = false;
        std::cout<< "You head East"<< '\n'<< '\n';
        break;
case 'W':
        block13 = true;
        block10 = false;
       std::cout<< "You head West" << '\n'<< '\n';
        break;
case 'w':
        block13 = true;
        block10 = false;
        std::cout<< "You head West" << '\n'<< '\n';
        break;

        case 'O':
        funkoptions();
        break;
        case 'o':
        funkoptions();
        break;

        if (plant == 1);
        case 'P':
        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block10 = true;
            break;
            case 'p':
            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block10 = true;
            break;
default:
block10 = true;
    break;
    }
}

    
while (block11 == true)
{                    while (enemiesblock11 == true){
    std::cout<<"You see 2 eagles standing in your way, do you..."<< '\n';
    std::cout<<"Fight         --------F"<< '\n';
    std::cout<<"Run Back      --------R"<< '\n'
             <<"Options       --------O" <<'\n';
    funkrunfight2();
    if (runaway == true){std::cout<<"You successfully avoid the enemies!"<< '\n';break;}
    else {std::cout<<"You've been spotted by the enemies! "<< '\n';
        combat = true;}
        if (combat == true)
        {snakehealth = 70;
            combatdisplay();
        if (snake1dead == true)
        {enemiesblock11 = false;}}}

std::cout <<"Go East        --------- E"<<'\n' 
          << "Go back West  --------- W" <<'\n'
          <<"Options        --------- O" <<'\n';
if (plant ==1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [    ] [    ] [ <> ] [    ]" << '\n';
std::cout <<"       [    ]                     " << '\n'<< '\n';
std::cin>> dec11;
std::cout<< ""<< '\n';
switch (dec11)
{

case 'E':
    block12 = true;
    block11 = false;
        std::cout<< "You head East"<< '\n'<< '\n';
        break;
        case 'e':
    block12 = true;
    block11 = false;
        std::cout<< "You head East"<< '\n'<< '\n';
        break;
case 'W':
        block11 = false;
        block10 = true;
        std::cout<< "You head back West" << '\n'<< '\n';
        break;
        case 'w':
        block11 = false;
        block10 = true;
        std::cout<< "You head back West" << '\n'<< '\n';
        break;

        case 'O':
        funkoptions();
        break;
        case 'o':
        funkoptions();
        break;


        if (plant == 1);
        case 'P':
        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block11 = true;
            break;
            case 'p':
            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block11 = true;
            break;
default:
block11= true;
    break;}}


    

while (block12 == true){
    while ((plant == 1) ||(plant == 0)){
        std::cout<<"You find trails of blood leading to the back of a tree where a sick indian man lays. The man is of taller stature and looks like he's mastered the life in these parts, he could surely be of use to you in getting revenge" <<'\n';
        break;
    }

std::cout<<"Go back West  --------- W" <<'\n'
         <<"Options       --------- O" <<'\n';

if (plant == 0){
    std::cout<< "Ask the man for help --------- Q" <<'\n';
}


if (plant == 1){
    std::cout<<"Search for the plant ---- P"<< '\n';
}
if (plant == 2){
    std::cout<<"Give the healing peyote plant to Brother Bear --------- G" << '\n';
}

std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [    ] [    ] [    ] [ <  ]" << '\n';
std::cout <<"       [    ]                     " << '\n'<< '\n';
std::cin>> dec12;
std::cout<< plant << '\n';
std::cout<< ""<< '\n';

switch (dec12)
{
case 'W':
    block11 = true;
    block12 = false;
   std::cout<< "You head back West" << '\n'<< '\n';
    break;
case 'w':
    block11 = true;
    block12 = false;
    std::cout<< "You head back West" << '\n'<< '\n';
    break;
case 'Q':
    std::cout<< "The man immediately recognises that you had fought the rustlers, he had come into contact with them just a few days ago. You learn that Brother Bear was offered material goods in exchange for leading the rustlers into saftey, however with the rustler's reluctance to deliver on their promise, this tale ended in a gunfight, leaving the Brother Bear out there bleeding. Brother Bear would survive, and is enthusiastic to help you on your quest, ask long as you can provide him with a rare HEALING PEYOTE PLANT which grows in these parts, but is rare. If you help Brother Bear out, he'll certanly owe you a favor!" << '\n'<< '\n';
    block12 = true;
    plant = 1;
    break;
case 'q':
    std::cout<< "The man immediately recognises that you had fought the rustlers, he had come into contact with them just a few days ago. You learn that Brother Bear was offered material goods in exchange for leading the rustlers into saftey, however with the rustler's reluctance to deliver on their promise, this tale ended in a gunfight, leaving the Brother Bear out there bleeding. Brother Bear would survive, and is enthusiastic to help you on your quest, ask long as you can provide him with a rare HEALING PEYOTE PLANT which grows in these parts, but is rare. If you help Brother Bear out, he'll certanly owe you a favor!" << '\n'<< '\n';
    block12 = true;
    plant = 1;
    break;

    case 'O':
    funkoptions();
    break;
    case 'o':
    funkoptions();
    break;

if (plant == 1){
    case 'p':
    std::cout<<"Nothing here, Brother Bear would have found the plant already otherwise" << '\n';
    block12 = true;
    break;
    case 'P':
    std::cout<<"Nothing here, Brother Bear would have found the plant already otherwise" << '\n';
    block12 = true;
    break;
    }
if (plant ==2){
    case 'G':
    std::cout << "Brother Bear thanks you for your help and agrees to help you with the ruffians! " << '\n';
    bb = 1;
    break;
    case 'g':
    std::cout << "Brother Bear thanks you for your help and agrees to help you with the ruffians! " << '\n';
    bb = 1;
    break;}

default:
block12 = true;
break;
    }
}


    while (block13 == true)
{
specialcond = true;
std::cout<<"Go South     --------- S"<<'\n' 
         <<"Go back East --------- E"<<'\n'
         <<"Options      --------- O" <<'\n';
std::cout<< plant << '\n';
if (plant == 1 ){std::cout<<"Search for the Peyote Plant --------- P" << '\n';}
std::cout <<"       [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"[    ] [    ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [ v> ] [    ] [    ] [    ]" << '\n';
std::cout <<"       [    ]                     " << '\n'<< '\n';
std::cin>> dec13;
std::cout<< ""<< '\n';
switch (dec13)
{
case 'E':
    block10 = true;
    block13 = false;
        std::cout<< "You head East"<< '\n'<< '\n';
        break;
case 'e':
        block10 = true;
        block13 = false;
            std::cout<< "You head East"<< '\n'<< '\n';
            break;
case 'S':
        if (rock == true){
        block13 = true;
        std::cout<< "This way is blocked!" << '\n'<< '\n';
        break;
        }
        else
        {
            std::cout<< "You pass though the smitherines of the blasted rock, ready for the final showdown..." << '\n';
            block14=true;
            block13=false;
            break;
        }
        

case 's':
if (rock == true){
    block13 = true;
    std::cout<< "This way is blocked!" << '\n'<< '\n';
    break;
    }
    else
    {
        std::cout<< "You pass though the smitherines of the blasted rock, ready for the final showdown..." << '\n';
        block14=true;
        block13=false;
        break;
    }
    case 'O':
                funkoptions();
                break;
    case 'o':
                funkoptions();
                break;

if (plant == 1);
        case 'P':
        std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block13 = true;
            break;
            case 'p':
            std::cout<<"You search as much as you can, however no healing peyote plant could be found..." << '\n';
            block13 = true;
            break;
default:
block13= true;
    break;}}


    while (block14 == true)
{
std::cout<<"You are about to confront the ruffians who attacked you..." <<'\n';
if (barkeepsecret == true) {
    std::cout<< "You sneak around the overpass and ambush the criminals from behind and above, you give them a blind surprise and drop a huge rock on them!" << '\n';
    std::cout<< "That unperceptive idiot Ugly Ufus gets crushed by the rock!" << '\n';
    uglyufus = false;
}
if (dynamite == true){
    std::cout<< "You throw your remaining stick of dynamite at the bandit camp, cathcing them by full surprise" << '\n';
    std::cout<< "The dynamite OBLITERATES Janky Jimbob (REST IN PIECES MUAHAHAHHAHAHAHHAHAH)" << '\n';
    jankyjimbob = false;
}
if (revolver == true){
    std::cout<< "You unload your shooting iron in a second, you miss every single round like a dumbass but the bullets scatter the fireplace of the ruffian camp, charring the wooden wagon and cloth sacks, causing a fire, which englulfs all of the bandits!" << '\n';

}
if (samurai == 3){
    std::cout<< "The Samurai unsheaths his sword..." << '\n';
    std::cout<< "..." << '\n';
    std::cout<< "..." << '\n';
    std::cin>> dec14;
    std::cout<< "一刀流 ｢居合｣ 死・獅子歌歌!!!!!" << '\n';
    std::cout<< ""<< '\n';
    std::cout<< "THE SAMURAI OBLITERATES THE DUSTY BASTARD!!!!" << '\n';
    std::cout<< "Such was the ferocity which the samurai slashed the bastard, that his sword cracked hin half, The Dusty Batard, Still alive, smacks the samuai to the ground and knocks him out, before  losing his stance himself" << '\n';

}
if (bb == 1){
    std::cout<< "Brother Bear uses his last remaining strenght to draw his bow, like the heroes of old, he fights through the pain and begins pulling the string..."<< '\n' << "The arrow flies through the wind like a grey falcon, determined, dauntless and ready to hit its prey..." << '\n';
    std::cin>> dec14;
    std::cout<< "The arrow impales that degenerate Horface Heb STRAIGHT THROUGH THE BALLS!!! Terry the Trigger is on the ground, jawning in agony" << '\n';
    std::cout<< "Brother Bear falls... Exhaused, his wounds overpower him..." << '\n';

}
    std::cin>> dec14;
    std::cout<< "All your foes have been vanquished, you now roam the wildlands as an uncontested badass, waiting for mother nature to show its hands, be it pasisvely or through her many beasts" << '\n';
    std::cout<< "Your revenge has been achieved, but some wounds cannot be punched away..." << '\n';
    std::cin>> dec14;
    std::cout<< "As you leave you see a huge metal disc flying over you, vapours emitting themselves from whence you stand..." << '\n';
    std::cout<< "..." << '\n';
    std::cin>> dec14;
    std::cout<< "The samurai, gathering his last strenght watches, as the metal disc ascends you into the heavens..." << '\n';
    std::cout<< "See yo...u..." << '\n';
    std::cout<< "In sp...spaa...space" << '\n';
    std::cout<< "Cowboy..." << '\n';
    std::cin>> dec14;

while (((bb == 1)&&(samurai == 3))&&((dynamite == true)&&(barkeepsecret==true)))
    {
        std::cout<< "GG, you won!" << '\n' ;
    }
    while ((((bb == 1)&&(samurai == 3))&&((dynamite == true)&&(barkeepsecret==true))) == false)
    {
        std::cout<< "The criminals, cought by surprise, nontheless escape, you have failed in your mission" << '\n' ;
    }

    
std::cin>> dec14;
std::cout<< ""<< '\n';
switch (dec14)
{
case 'N':
block13 = true;
block14 = false;
    std::cout<< "You leave back North"<< '\n'<< '\n';
    break;
case 'n':
block13 = true;
block14 = false;
std::cout<< "You leave back North"<< '\n'<< '\n';
break;

default:
block14= true;
    break;}}




            }

        }
        



        void funkoptions2(){
            do{  
            std::cout<<"-----Use medical items-----" << '\n'<< '\n';
            std::cout<<"Bandages & Alcohol ------ B" << '\n';
            std::cout<<"Healing Packs      ------ H" << '\n';
            std::cout<<"Return             ------ R" << '\n';
            if (specialcond == true){
                std::cout<<"USE A BUNDLE OF DYNAMITE TO BLOW THE ROCK UP" << '\n';
                std::cout<<"......             ------ D" << '\n';
                }
            std::cin>> options2 ;
            switch (options2)
            {
        case 'B':
            if (banalc > 0){
                banalc-=1;
                health+=30;
                funkhealth();
                optionscond2 = true;
            }
            else
            {
                std::cout<<"-----You have no Bandages and Alcohol(s)!-----" << '\n';
                optionscond2 = true;
            }
                break;
        case 'b':
                if (banalc > 0){
                    banalc-=1;
                    health+=30;
                    funkhealth();
                    optionscond2 = true;
                }
                else
                {
                    std::cout<<"-----You have no Bandages and Alcohol(s)!-----" << '\n';
                    optionscond2 = true;
                }
                    break;
        case 'H':
            if (medpack > 0){
                medpack-=1;
                health+=75;
                funkhealth();
                optionscond2 = true;
            }
            else
            {
                std::cout<<"-----You have no Healing Pack(s)!-----" << '\n';
                optionscond2 = true;
            }
                break;

                case 'h':
                if (medpack > 0){
                    medpack-=1;
                    health+=75;
                    funkhealth();
                    optionscond2 = true;
                }
                else
                {
                    std::cout<<"-----You have no Healing Pack(s)!-----" << '\n';
                    optionscond2 = true;
                }
                    break;
            case 'R':
                optionscond2 = false;
                break;
            case 'r':
                optionscond2 = false;
                break;
                if ((specialcond == true)&&(dynamite == true)){
        case 'd':
            dynamite -=1;
            rock = false;
            std::cout<<"The rock standing between you and the bandits has been blasted away, prepare for the showdown..."<< '\n';
            optionscond2 = true;
            specialcond = false;
                break;
        case 'D':
                rock = false;
                std::cout<<"The rock standing between you and the bandits has been blasted away, prepare for the showdown..."<< '\n';
                optionscond2 = true;
                specialcond = false;
                break;
                }
            default:
            optionscond2 = true;
                break;
            }
        } while (optionscond2 == true);
        }

             
        void funkoptions(){

            do {
            std::cout<<"-----Options-----" << '\n';
            std::cout<<"Check Inventory  ----- I" << '\n';
            std::cout<<"Use items        ----- U" << '\n';
            std::cout<<"Go back          ----- B" << '\n';
            std::cin >> options;


            switch (options)
            {
            case 'I':
            std::cout<<"-----Miscellaneous-----" << '\n';
            std::cout<<"Your health is at: " << health <<'\n'<< '\n';
            std::cout<<"-----Essential items-----" << '\n';
            std::cout<<"You have: " << money << " USD" << '\n';
            std::cout<<"You have: " << hide << " Snake Hides" << '\n';
            std::cout<< "You have: " << feather << " Eagle's Feathers" << '\n' << '\n';
            std::cout<< "-----Medical items-----" << '\n';
            std::cout<<"You have: " << banalc << " Bandage & Alcohol(s)" << '\n';
            std::cout<<"You have: "<< medpack << " Health Pack(s)" << '\n' << '\n';
            optionscond= true;
                break;
            case 'i':
            std::cout<<"-----Miscellaneous-----" << '\n';
            std::cout<<"Your health is at: " << health <<'\n' << '\n';
            std::cout<<"-----Essential items-----" << '\n';
            std::cout<<"You have: " << money << " USD" << '\n';
            std::cout<<"You have: " << hide << " Snake Hides" << '\n';
            std::cout<< "You have: " << feather << " Eagle's Feathers" << '\n' << '\n';
            std::cout<< "-----Medical items-----" << '\n';
            std::cout<<"You have: " << banalc << " Bandage & Alcohol(s)" << '\n';
            std::cout<<"You have: "<< medpack << " Health Pack(s)" << '\n' << '\n';
            optionscond = true;
            break;
            case 'u':
                funkoptions2();

            break;
            
            case 'U':
                funkoptions2();
                

            
            break;
            
            case 'B':
            optionscond = false;
            break;
            case 'b':
            optionscond = false;
            break;
            default:
            optionscond = true;
                break;
            }
        } while (optionscond == true);

        }

    void  funkhealth(){
        if (health > 100){
            health = 100;
        }
    }


    void tradeloot(){
        std::cout<< "Sell your loot?     ------- Y/N"<< '\n';
        std::cout<< "You have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
        std::cin>> selldec;
        switch (selldec)
        {
        case 'Y':
            std::cout<< "You sell your loot..."<< '\n';
            hide = hide * 10;
            money = money + hide;
            hide = 0;
            feather = feather * 20;
            money = money + feather;
            feather = 0;
            std::cout<< "You have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
            break;
        case 'y':
            std::cout<< "You sell your loot..."<< '\n';
            hide = hide * 10;
            money = money + hide;
            hide = 0;
            feather = feather * 20;
            money = money + feather;
            feather = 0;
            std::cout<< "You have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
                break;   
        default:
        merchcond = true;
            break;
        }


    }


    void funkfight2(){

        srand(time(NULL));
        attack = (rand() % 60)+1;
        std::cout<<"You attack the snake and take off "<< punch << " Health points"<< '\n';
        snakehealth2 = snakehealth2 - punch;

    }

    void funkfight3(){

        srand(time(NULL));
        attack = (rand() % 60)+1;
        std::cout<<"You attack the eagle and take off "<< punch << " Health points"<< '\n';
        eaglehealth = eaglehealth - punch;


    }
    void funkfight4(){

        srand(time(NULL));
        attack = (rand() % 60)+1;
        std::cout<<"You attack the eagle and take off "<< punch << " Health points"<< '\n';
        eaglehealth2 = snakehealth2 - punch;

    }

    void funksnake2(
    ) {     srand(time(NULL));
            attack = (rand() % 10)+1;
            std::cout<<"The snake attacks you and takes off "<< attack << " Health points"<< '\n';
            health = health - attack;
    }
    void funkeagle2(
    ) {     srand(time(NULL));
            attack = (rand() % 15)+1;
            std::cout<<"The snake attacks you and takes off "<< attack << " Health points"<< '\n';
            health = health - attack;
    }

    void funkhealthcheck(){
        if (health <=0 ){
            std::cout<<"You have been killed!!!!!!"<< '\n';
            while (true){
                std::cout<<"Game over!" << '\n';
            }
        }
    }
    void dropfunk(){
        srand(time(NULL));
        drop = (rand() % 100)+1;
        if (drop <= 75 ){
            drop2 = true;
            std::cout<<"You have a drop!!"<<'\n';
            hide+=1;
            std::cout<<"You have recieved a snake hide!"<<'\n';
        }
    }
    void dropfunk2(){
        srand(time(NULL));
        drop = (rand() % 100)+1;
        if (drop <= 65 ){
            drop2 = true;
            std::cout<<"You have a drop!!"<<'\n';
            feather+=1;
            std::cout<<"You have recieved an eagle's feather!"<<'\n';
        }
    }

    void quest1(){
        if ((hide >= 3)&&(feather >= 1)&&(questdone1 == false)){
            hide -=3;
            feather -=1;
            money+=50;
            std::cout<< "The bartender takes 3 hides and 1 feather, he awards you with 50 USD!"<< '\n';
            std::cout<< "You now have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
            questdone1 = true;
        }
        else if (questdone1 == true) {
            std::cout<< "You have completed the bartender's quest, he's slightly less pissed off at you...." << '\n';
            std::cout<< "...." << '\n';
            std::cout<< "...." << '\n';
            std::cout<< "He still does not look happy with that broomstick of his and by the looks of it may stick it in your place where the sun don't shine, so you head your way..." << '\n';
        }
        else
        {
            std::cout<< "The barkeep tells you to give him 3 snake hides and 1 Eagle's feather for 50 USD"<< '\n'<< '\n';
        }
    }
    void quest2(){
        if ((feather >= 3)&&(questdone2 == false)){
            feather -=3;
            money+=60;
            std::cout<< "The merchant takes 3 feathers, he awards you with 60 USD!"<< '\n';
            std::cout<< "You now have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
            questdone2 = true;
        }
        else if (questdone2 == true) {
            std::cout<< "You have already completed the merchant's quest...." << '\n';
        }
        else
        {
            std::cout<< "Merchant tells you to give him 3 Eagle's feathers for 60 USD"<< '\n'<< '\n';
        }
        
    }
    void quest3(){
        if ((hide >= 3)&&(feather >= 1)&&(questdone3 == false)){
            feather -=10;
            money+=100;
            std::cout<< "The doc takes 10 snake hides, you yourself are afraid that one of them will come back and bite you in the ass since it's such a big amount of snake... the doc awards you with 100 USD!"<< '\n';
            std::cout<< "You now have "<< feather << " Feathers, " << hide << " Hides and " << money << " USD..." << '\n';
            questdone3 = true;
        }
        else if (questdone3 == true) {
            std::cout<< "You have already completed the doc's quest...." << '\n';
            std::cout<< "The bastard old doctor tells you to go annoy someone else...." << '\n';
            std::cout<< "You respond by saying that he needed so many snakes cuz the one in his pants wasn't working, HAHHA, erectyle dysfunction joke...." << '\n';
            std::cout<< "You stop laughing..." << '\n';
        }
        else
        {
            std::cout<< "The doc tells you that he will need 10 snake hides and will reward you 100 USD for your troubles, although you wonder why the old pervert needs so much snake skin, probably a fetish or something"<< '\n'<< '\n';
        }
    }

    void resetenemies(){
        if (globalenemies = true){
         enemiesblock2 = true;
         enemiesblock3 = true;
         enemiesblock4 = true;
         enemiesblock5 = true;
         enemiesblock6= true;
         enemiesblock7= true;
         enemiesblock8= true;
         enemiesblock9= true;
         enemiesblock10= true;
         enemiesblock11= true;
        }
    }







    void funkrunfight(){
        srand(time(NULL));
        runfight = (rand() % 100)+1;
        if (runfight >= 50){runaway = true;
        std::cout<< "You succesfully run back like a coward!"<< '\n';}
        else {runaway = false;}}




    void funkrunfight2(){
        runaway = false;
        std::cin>> runfightdec;
        switch (runfightdec)
        {
        case 'R':
        funkrunfight();
        if (runaway == true){
            combat = false;}
            break;
        case 'r':
        funkrunfight();
        if (runaway == true){
            combat = false;}
            break;
        case 'F':
        runaway = false;
        combat = true;
            break;
        case 'f':
        runaway = false;
        combat = true;
            break;
        default:
            break;
        }
    }

    void funksnake(
    ) {     srand(time(NULL));
            attack = (rand() % 10)+1;
            std::cout<<"The snake attacks you and takes off "<< attack << " Health points"<< '\n';
            health = health - attack;
            std::cout<<"Your HP is now: "<< health << '\n';
    }
    void funkeagle(
    ) {     srand(time(NULL));
            attack = (rand() % 25)+1;
            std::cout<<"The Eagle attacks you and takes off "<< attack << " Health points"<< '\n';
            health = health - attack;
            std::cout<<"Your HP is now: "<< health << '\n';
    }



     // MOST IMPORTANT ONE AS OF YET!!!

    void funkfightspec(){

        srand(time(NULL));
        punch = (rand() % 60)+1;
        std::cout<<"You attack the enemy and take off "<< punch << " Health points"<< '\n';
        checksnake1();
    }
        //     FIX IMMEDIATELY!!!!!!!
        void checksnake1(){
            snakehealth = snakehealth - punch;
            std::cout<< "The enemy's HP is now at..." << snakehealth << '\n';
            if (snakehealth <= 0){
             snake1dead = true;
             std::cout<< "You have killed the Snake!" << '\n';}}

        void checksnake2(){
                snakehealth2 = snakehealth2 - punch;
                std::cout<< "The enemy's HP is now at..." << snakehealth2 << '\n';
                if (snakehealth2 <= 0){
                 snake2dead = true;
                 std::cout<< "You have killed the Snake!" << '\n';}}
        void checkeagle1(){
                    eaglehealth = eaglehealth - punch;
                    std::cout<< "The enemy's HP is now at..." << eaglehealth << '\n';
                    if (eaglehealth <= 0){
                     eagle1dead = true;
                     std::cout<< "You have killed the Eagle!" << '\n';}}
        void checkeagle2(){
                        eaglehealth2 = eaglehealth2 - punch;
                        std::cout<< "The enemy's HP is now at..." << eaglehealth2 << '\n';
                        if (eaglehealth2 <= 0){
                         eagle2dead = true;
                         std::cout<< "You have killed the Eagle!" << '\n';}}






        void funkfight(){
            std::cout<<"Your health is at: " << health<< '\n';
            while (combat== true){
                std::cout << "-------Fight-------"<< '\n';
                std::cout << "Punch Snake -------1"<< '\n';
                std::cout << "Punch Snake -------2"<< '\n';
                std::cout << "Options     ------ O"<< '\n';
                std::cin>> combatoptions;
                switch (combatoptions){
                case 'F':
                    default:
                    combat== true;
                    break;}}}
        
        void combatdisplay(){
            while (combat== true){
                snake1dead = false;
                std::cout << "You are engaged in a fight"<< '\n';
                std::cout << "PUNCH    ----- P"<< '\n';
                std::cout << "Run Back ----- R"<< '\n';
                std::cout << "Options  ----- O"<< '\n';
                std::cin>> combatoptions;
                switch (combatoptions){
                case 'P':
                std::cout<< "You PUNCH the enemy!" << '\n';
                funkfightspec();
                std::cout<< "The enemy retaliates..." << '\n';
                funksnake();
                funkhealthcheck();
                if (snake1dead == true){
                    dropfunk();
                    combat = false;}

                break;
                case 'p':
                std::cout<< "You PUNCH the enemy!" << '\n';
                funkfightspec();
                std::cout<< "The enemy retaliates..." << '\n';
                funksnake();
                funkhealthcheck();
                if (snake1dead == true){dropfunk();
                    combat = false;}
                break;
                case 'O':
                funkoptions();
                break;
                case 'o':
                funkoptions();
                break;
                case 'R':
                funkrunfight();
                if (runaway == true)
                {combat = false;}
                break;
                case 'r':
                funkrunfight();
                if (runaway == true)
                {combat = false;}
                break;
                    default:
                    combat = true;
                    break;}} }


                    void combatdisplay1(){
                        while (combat== true){
                            snake1dead = false;
                            std::cout << "You are engaged in a fight"<< '\n';
                            std::cout << "PUNCH    ----- P"<< '\n';
                            std::cout << "Run Back ----- R"<< '\n';
                            std::cout << "Options  ----- O"<< '\n';
                            std::cin>> combatoptions;}}
                    void combatsnake(){
                        if (combat == true) {
                        while ((combatoptions == 'P')|| combatoptions == 'p'){
                            std::cout<< "You PUNCH the enemy!" << '\n';
                            funkfightspec();
                            std::cout<< "The enemy retaliates..." << '\n';
                            funksnake();
                            funkhealthcheck();
                            if (snake1dead == true){
                                dropfunk();
                                combat = false;}}}}
                    void combateagle(){
                        if (combat == true) {
                        while ((combatoptions == 'P')|| combatoptions == 'p'){
                                std::cout<< "You PUNCH the enemy!" << '\n';
                                funkfightspec();
                                std::cout<< "The enemy retaliates..." << '\n';
                                funkeagle();
                                funkhealthcheck();
                                if (eagle1dead == true){
                                dropfunk();
                                combat = false;}}}}








    /* void combatdisplay2(){
                        while (combat== true){
                            eagle1dead = false;
                            std::cout << "You are engaged in a fight"<< '\n';
                            std::cout << "PUNCH    ----- P"<< '\n';
                            std::cout << "Run Back ----- R"<< '\n';
                            std::cout << "Options  ----- O"<< '\n';
                            std::cin>> combatoptions;
                            switch (combatoptions){
                            case 'P':
                            std::cout<< "You PUNCH the enemy!" << '\n';
                            funkfightspec();
                            std::cout<< "The enemy retaliates..." << '\n';
                            funkeagle();
                            funkhealthcheck();
                            if (eagle1dead == true){
                                dropfunk();
                                combat = false;}
            
                            break;
                            case 'p':
                            std::cout<< "You PUNCH the enemy!" << '\n';
                            funkfightspec();
                            std::cout<< "The enemy retaliates..." << '\n';
                            funksnake();
                            funkhealthcheck();
                            if (eagle1dead == true){dropfunk();
                                combat = false;}
                            break;
                            case 'O':
                            funkoptions();
                            break;
                            case 'o':
                            funkoptions();
                            break;
                            case 'R':
                            funkrunfight();
                            if (runaway == true)
                            {combat = false;}
                            break;
                            case 'r':
                            funkrunfight();
                            if (runaway == true)
                            {combat = false;}
                            break;
                                default:
                                combat = true;
                                break;}} }        */



    /* void caseenemies(){
        if ((snake == true) && (snake2 == true)){
            rankenemies = 2;
        }
        else if ((snake == true)){
            rankenemies = 1;
        }
        else if ((snake2 == true)){
            rankenemies = 3;
        }
        if ((eagle == true)|| (eagle2 == true)){
            rankenemies = 4;
        }
        else if (eagle == true){
            rankenemies = 5;
        }
        else if (eagle2 == true){
            rankenemies = 6;
        }
        if ((snake== true)||(eagle== true)){
            rankenemies = 7;
        }
        switch (rankenemies)
        {
        case 1:
        while (combat== true){
            snake1dead = false;
            std::cout << "You are engaged in a fight"<< '\n';
            std::cout << "PUNCH    ----- P"<< '\n';
            std::cout << "Run Back ----- R"<< '\n';
            std::cout << "Options  ----- O"<< '\n';
            std::cin>> combatoptions;
            switch (combatoptions){
            case 'P':
            std::cout<< "You PUNCH the enemy!" << '\n';
            funkfightspec();
            std::cout<< "The enemy retaliates..." << '\n';
            funksnake();
            funkhealthcheck();
            if (snake1dead == true){
                dropfunk();
                combat = false;}

            break;
            case 'p':
            std::cout<< "You PUNCH the enemy!" << '\n';
            funkfightspec();
            std::cout<< "The enemy retaliates..." << '\n';
            funksnake();
            funkhealthcheck();
            if (snake1dead == true){dropfunk();
                snake = false;
                combat = false;}
            break;
            case 'O':
            funkoptions();
            break;
            case 'o':
            funkoptions();
            break;
            case 'R':
            funkrunfight();
            if (runaway == true)
            {combat = false;}
            break;
            case 'r':
            funkrunfight();
            if (runaway == true)
            {combat = false;}
            break;
                default:
                combat = true;
                break;}}
            break;
        
        default:
        combat == true;
            break;
        }
    } */
