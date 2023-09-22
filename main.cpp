#include <iostream>
#include <thread>
using namespace std;

int main() {


  //These are the color markers, they match with a color
  // Name            FG  BG
  // Black           30  40
  // Red             31  41
  // Green           32  42
  // Yellow          33  43
  // Blue            34  44
  // Magenta         35  45
  // Cyan            36  46
  // White           37  47
  // Bright Black    90  100
  // Bright Red      91  101
  // Bright Green    92  102
  // Bright Yellow   93  103
  // Bright Blue     94  104
  // Bright Magenta  95  105
  // Bright Cyan     96  106
  // Bright White    97  107

  
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

  //sleep_for(seconds(5));
  //sleep_until(system_clock::now());

  //Uses name for the story and game functin
  string name;
  cout << "What is your name :";
  cin >> name;
  cout << "\n";

  //Title
  cout << "|------------------------------------------------------|\n";
  cout << "|   .------..------..------..------..------..------.   |\n";
  cout << "|   |\033[0;31mZ\033[0;37m.--. ||\033[0;30mO\033[0;37m.--. ||\033[0;31mL\033[0;37m.--. ||\033[0;30mT\033[0;37m.--. ||\033[0;31mA\033[0;37m.--. ||\033[0;30mR\033[0;37m.--. |   |\n";
  cout << "|   | :(): || :/\:  || :/\:  || :/\:  || (\/)  || :(): |   |\n";
  cout << "|   | ()() || :\/:  || (__) || (__) || :\/:  || ()() |   |\n";
  cout << "|   | '--'\033[0;31mZ\033[0;37m|| '--'\033[0;30mO\033[0;37m|| '--'\033[0;31mL\033[0;37m|| '--'\033[0;30mT\033[0;37m|| '--'\033[0;31mA\033[0;37m|| '--'\033[0;30mR\033[0;37m|   |\n";
  cout << "|   `------'`------'`------'`------'`------'`------'   |\n";
  cout << "|------------------------------------------------------|\033[0;37m\n";


  cout <<"\n";  
  cout <<"\n";

  //Introduces You the Main character
  //It's also the start of the story
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  system("clear");
  cout << "???---Hello my name is " << "\033[0;34m" << name << "\033[0;37m" << " , This is the story on how I met a Fortune Teller and almost lost it all\n";

  cout <<"\n";

  sleep_for(seconds(5));
  sleep_until(system_clock::now());


  cout << "\033[0;34m" << name << "\033[0;37m" << "---I was walking down the pier one day and saw a old coin machine called \"Zoltar the Fortune Teller\". It looked to be ancient and saw a Button that said   Press me, Next it said this...\n";
  cout <<"\n";
  
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  
  string coin;
  
  cout << "\033[0;31mZoltar\033[0;37m---I am Zoltar the Fortune Teller, insert 4 Quarters to start my prediction\n";
  cout << "Mic---Please insert 4 quarters I say... (yes or no) :";
  cin >> coin;
  cout <<"\n";
  
  if(coin != "yes" && coin != "Yes"){
    cout << "\033[0;34m" << name << "\033[0;37m" << "---\033[0;93mI decided not to use my hard earned 4 quarters I stole from my grandmas purse without her knowing on a ancient relic that probally won't work.\033[0;37m---\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << "\033[0;35m----------Chapter 1 (Lucky Madness)----------\033[0;37m\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " goes home and try's to go to sleep but can't get \033[0;31mZoltar\033[0;37m out of their head.\n";
    
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "Days go by yet " << "\033[0;34m" << name << "\033[0;37m" << " can't get him out of their...";
    int loop1 = 1;
    while(loop1 == 1){
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      loop1 += 1;
    }
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << "\033[0;35m----------Chapter 2 (Crazy Coin Toss)----------\033[0;37m\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " has been slowly going insane thinking of HIM. You run to the peir where yuou first met him....with a Iron bat\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\033[0;34m" << name << "\033[0;37m" << "---IV'E HAD IT WITH YOU AND NOW IM ENDING THIS!!!\n";
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " starts beating the machine to a pulp but when you finally finish beating him....Security and the Police show up!\n";
    sleep_for(seconds(5));
      sleep_until(system_clock::now());
    cout << "\n";
    cout << "---Turn's out \"The Machine made me do it!\" doesn't hold up in court well so here we are. In a mental institution waiting to be let out or ZOLTAR COMES AND GETS ME.\n";
    sleep_for(seconds(8));
    sleep_until(system_clock::now());
    system("clear");
    cout << ".------..------..------.     .------..------..------.\n";
    cout << "|\033[0;30mT\033[0;37m.--. ||\033[0;31mH\033[0;37m.--. ||\033[0;30mE\033[0;37m.--. |.-.  |\033[0;31mE\033[0;37m.--. ||\033[0;30mN\033[0;37m.--. ||\033[0;31mD\033[0;37m.--. |\n";
    cout << "| :/\\: || :/\\: || (\\/) ((5)) | (\\/) || :(): || :/\\: |\n";
    cout << "| (__) || (__) || :\\/: |'-.-.| :\\/: || ()() || (__) |\n";
    cout << "| '--'\033[0;30mT\033[0;37m|| '--'\033[0;31mH\033[0;37m|| '--'\033[0;30mE\033[0;37m| ((1)) '--'\033[0;31mE\033[0;37m|| '--'\033[0;30mN\033[0;37m|| '--'\033[0;31mD\033[0;37m|\n";
    cout << "`------'`------'`------'  '-'`------'`------'`------'\n";
    //cout << "---" << "\033[0;34m" << name << "\033[0;37m" <<
    return 0;
  }
  cout << "\033[0;31mZoltar\033[0;37m---Thank you for the offering\n";
  cout << "\n";
  cout << "\033[0;31mZoltar\033[0;37m---Think of your wish in your mind and read the card I give you\n";
  cout << "\n";

  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  
  cout << "\033[0;34m" << name << "\033[0;37m" << "---What should my wish be....Everything goes my way\n";
  cout << "\n";
  
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  
  cout << "--Card pops out--\n";
  cout << "\n";
  
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  
  cout << "---Zoltar's card says \"I don't see that happening within my vision\"\n";
  cout << "\n";
  cout << "\033[0;34m" << name << "\033[0;37m" << "---What!! I WASTED A DOLLAR ON A ANSWER LIKE THAT!! PIECE OF GARBAGE!!\n";
  cout << "\n";
  
  string Q1;
  cout << "Would you like to kick the \033[0;31mZoltar\033[0;37m machine? (yes or no): ";
  cout << "\n";
  //Split path to continue the game or end it at this branch
  cin >> Q1;
  if(Q1 != "yes" && Q1 != "Yes"){
    if(coin != "yes" && coin != "Yes"){
    cout << "\033[0;34m" << name << "\033[0;37m" << "---\033[0;93mI decided not to use my hard earned 4 quarters I stole from my grandmas purse without her knowing on a ancient relic that probally won't work.\033[0;37m---\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << "\033[0;35m----------Chapter 1 (Lucky Madness)----------\033[0;37m\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " goes home and try's to go to sleep but can't get \033[0;31mZoltar\033[0;37m out of their head.\n";
    
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "Days go by yet " << "\033[0;34m" << name << "\033[0;37m" << " can't get him out of their...";
    int loop1 = 1;
    while(loop1 == 1){
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      cout << "ZOLTAR\n\n";
      sleep_for(seconds(2));
      sleep_until(system_clock::now());
      loop1 += 1;
    }
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << "\033[0;35m----------Chapter 2 (Crazy Coin Toss)----------\033[0;37m\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " has been slowly going insane thinking of HIM. You run to the peir where yuou first met him....with a Iron bat\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\033[0;34m" << name << "\033[0;37m" << "---IV'E HAD IT WITH YOU AND NOW IM ENDING THIS!!!\n";
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " starts beating the machine to a pulp but when you finally finish beating him....Security and the Police show up!\n";
    sleep_for(seconds(5));
      sleep_until(system_clock::now());
    cout << "\n";
    cout << "---Turn's out \"The Machine made me do it!\" doesn't hold up in court well so here we are. In a mental institution waiting to be let out or ZOLTAR COMES AND GETS ME.\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << ".------..------..------.     .------..------..------.\n";
    cout << "|\033[0;30mT\033[0;37m.--. ||\033[0;31mH\033[0;37m.--. ||\033[0;30mE\033[0;37m.--. |.-.  |\033[0;31mE\033[0;37m.--. ||\033[0;30mN\033[0;37m.--. ||\033[0;31mD\033[0;37m.--. |\n";
    cout << "| :/\\: || :/\\: || (\\/) ((5)) | (\\/) || :(): || :/\\: |\n";
    cout << "| (__) || (__) || :\\/: |'-.-.| :\\/: || ()() || (__) |\n";
    cout << "| '--'\033[0;30mT\033[0;37m|| '--'\033[0;31mH\033[0;37m|| '--'\033[0;30mE\033[0;37m| ((1)) '--'\033[0;31mE\033[0;37m|| '--'\033[0;30mN\033[0;37m|| '--'\033[0;31mD\033[0;37m|\n";
    cout << "`------'`------'`------'  '-'`------'`------'`------'\n";
    //cout << "---" << "\033[0;34m" << name << "\033[0;37m" <<
    return 0;
  }
  }
  cout << "\n";
  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " kicked the \033[0;31m Zoltar \033[0;37m machine out of rage---\n";
  cout << "\n";
  cout << "---Zoltar's mic glitches and a new message comes out---\n";
  cout << "\n";
  cout << "\033[0;31mZoltar\033[0;37m---You dare hit the great Zoltar!!!!! I curse you with horrible luck!!!!\n";
  cout << "\n";
  cout << "---The machine powers down and you recive a paper survey on your experience---\n";
  cout << "\n";

  sleep_for(seconds(4));
  sleep_until(system_clock::now());

  //These Responses affect the rest of the story and the program
  int A;
  cout << "Did you enjoy \033[0;31mZoltar\033[0;37m and his vision (1 to 5)\n";
  cin >> A;
  cout <<"\n";
  int B;
  cout << "Was he quick with his response (1 to 5)\n";
  cin >> B;
  cout <<"\n";
  int C;
  cout << "Was your experience enjoyable (1 to 5)\n";
  cin >> C;
  cout <<"\n";
  string D;
  cout << "Would you ever use him again (yes or no)\n";
  cin >> D;
  cout <<"\n";

  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " shoves the filled survey in his pocket---\n";
  cout << "\n";
  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " walks away but feels a eerie feeling following him---\n";
  
  cout << "\n";
  cout <<"\n";
  
  sleep_for(seconds(5));
  sleep_until(system_clock::now());

  //First Chapter of the Story ( 1/3rd of the way there )
  system("clear");
  cout << "\033[0;35m----------Chapter 1 (Bad Luck)----------\033[0;37m\n";
  cout << "\n";
  cout <<"\n";
  
  sleep_for(seconds(6));
  sleep_until(system_clock::now());

  //What every you put for A will affect this event 4 or higher will give you a good event, 3 or lower will give you a negative one
  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " comes home to find he can't find his wallet he checks his backpack---\n";
  if(A >= 4 ){
    cout << "\n";
    cout << "\033[0;34m" << name << "\033[0;37m" << "---Here's my wallet\n";
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << "'s eerie feeling lightens off his shoulders---\n";
    cout << "\n";
  }
  else if(A <= 3){
    cout <<"\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " finds a giant hole in his backpack where his wallet was, along with his airpods gone---\n";
    cout << "---The eerie feeling doesn't subside off his shoulders but gets stronger---\n";
    cout << "\n";
  }
  
  sleep_for(seconds(4));
  sleep_until(system_clock::now());
  
  cout << "\n";
  cout << "---1 hour later---\n";
  cout << "\n";
  cout << "\033[0;34m" << name << "\033[0;37m" << "---Im hungry, I can just use my phone a grub hub somthing\n";
  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " orders some wingstop----\n";
  cout << "---1 hour later---\n";
  cout << "\n";
  sleep_for(seconds(4));
  sleep_until(system_clock::now());
  cout << "\033[0;34m" << name << "\033[0;37m" << "---Where is my food...Let me text the driver\n";
  cout << "\n";
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  cout << "\n";
  cout << "------------------------------------------------------------------\n";
  cout << "---("<< "\033[0;34m" << name << "\033[0;37m" << ")-----------------------------------------------(\033[0;32mJake\033[0;37m)---\n";
  cout << "------------------------------------------------------------------\n";
  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "------------------------------------------------------------------\n";
  cout << "---\033[0;34mHey do you know when my food is going to be here\033[0;37m---------------\n";
  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "------------------------------------------------------------------\n";
  cout << "------------------------------------------------------------------\n";
  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "--------------------\033[0;32mI already delivered it and its at your step\033[0;37m---\n";
  cout << "-----------------------------------------------\033[0;32m*Image attached*\033[0;37m---\n";
  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "------------------------------------------------------------------\n";
  cout << "------------------------------------------------------------------\n";
  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  //What every you put for B will affect this event 4 or higher will give you a good event, 3 or lower will give you a negative one
  if(B >= 4){
    cout << "---\033[0;34mSaw it thank you\033[0;37m-----------------------------------------------\n";
    cout << "------------------------------------------------------------------\n";
    cout << "------------------------------------------------------------------\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "'s\033[0;37m eerie feeling lightens off his shoulders---\n";
    cout << "\n";
  }
  else if(B <= 3){
    cout << "---\033[0;34mThat's the wrong address\033[0;37m---------------------------------------\n";
    cout << "------------------------------------------------------------------\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "------------------------------------------------------------------\n";
    cout << "-------------------------------------------\033[0;32mThat's a you problem\033[0;37m---\n";
    cout << "-------------------------------------------\033[0;32m*Jake left the chat*\033[0;37m---\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "------------------------------------------------------------------\n";
    cout << "------------------------------------------------------------------\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\n";
    cout << "---The eerie feeling doesn't subside off his shoulders but gets stronger---\n";
    cout << "\n";
  }
  cout << "\033[0;34m" << name << "\033[0;37m" << "---That went as well as I suspected\n";

  cout << "\n";
  cout <<"\n";
  
  sleep_for(seconds(6));
  sleep_until(system_clock::now());

  system("clear");  //Second Check Point through the game ( 2/3rds of the way there)
  cout << "\033[0;35m----------Chapter 2 (Death by Fortune)----------\033[0;347m\n";
  cout << "\n";
  cout <<"\n";
  
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  
  cout << "\033[0;34m" << name << "\033[0;37m" << "---I might as well see if the zoltar repair guy is their so I can turn this review sheet in, alot of \"Cursing\" it's done to me\n";
  
  cout << "\n";
  
  cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " starts walking to the pier where he met the old coin machine but somthing strange happens...---\n";

  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "\n";

  cout << "\033[0;36mStranger\033[0;37m---Hello good sir have you played or seen a old coin machine called \"\033[0;31mZoltar\033[0;37m the Fortune Tellar\" ?\n";
  cout << "\n";
  cout << "\033[0;34m" << name << "\033[0;37m" << "---Why yes I have, don't waste your money on it, it's a scam\n";

  sleep_for(seconds(6));
  sleep_until(system_clock::now());
  cout << "\n";
  
  cout << "\033[0;36mStranger 2\033[0;37m---\033[0;31mZoltar\033[0;37m!! Good heavans no, He is a sign of good luck for those that deserve it, He curses those that don't respect his wishes and test!!!\n";
  cout << "\n";
  
  cout << "\033[0;34m" << name << "\033[0;37m" << "---What? No, No it's a old coin machine tht has prem-made cards that he prints at random, He's not real...\n";
  cout << "\n";

  sleep_for(seconds(7));
  sleep_until(system_clock::now());

  cout << "\033[0;36mA Group of strangers\033[0;37m---HOW DARE YOU INSULT THE GREAT \033[0;31mZOLTAR\033[0;37m!! BRINGER OF FORTUNE AND CURSES!! HE IS ALL SEEING AND ALL KNOWING!! GET HIM!!!!!\n";
  
  sleep_for(seconds(8));
  sleep_until(system_clock::now());
  cout << "\n";
  cout << "---The group of people start chasing " << "\033[0;34m" << name << "\033[0;37m" << "---\n";

  sleep_for(seconds(8));
  sleep_until(system_clock::now());
  cout << "\n";
  
  if (C >= 4){
    cout << "\n";
    cout << "---The Forming Mob slowly catches up to " << "\033[0;34m" << name << "\033[0;37m" << " then in a matter of seconds he wakes up in his bed in a cold sweat thinking \"It was just a Nightmare\"\n";
    cout << "\n";
    sleep_for(seconds(8));
    sleep_until(system_clock::now());
    cout <<"---" << "\033[0;34m" << name << "\033[0;37m" << " hyperventilating at this point, vows to find that old coin machine and turn in the survey or destory the machine trying\n";
    cout << "\n";
  }
  //What every you put for C will affect this event 4 or higher will give you a good event, 3 or lower will give you a negative one
  else if (C <= 3){
    cout << "\n";
    cout << "---The Forming Mob slowly catches up to " << "\033[0;34m" << name << "\033[0;37m" << " and they feel a hard wack in the back of their head.\n"; 
    sleep_for(seconds(8));
    sleep_until(system_clock::now());
    cout << "Then in a matter of seconds " << "\033[0;34m" << name << "\033[0;37m" << " wakes up in their bed in a cold sweat thinking \"It was just a Nightmare\" \n";
    cout << "\n";
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " hyperventilating at this point, vows to find that old coin machine and turn in the survey or destory the machine trying\n";
    cout << "\n";
  }
  sleep_for(seconds(6));
  sleep_until(system_clock::now());

  //The Last Checkpoint aka the end ( The Home Stretch )
  system("clear");
  cout << "\033[0;35m----------Chapter 3 (Toss a Coin to your Tellar)----------\033[0;37m\n";
  cout << "\n";
  cout <<"\n";
  
  sleep_for(seconds(6));
  sleep_until(system_clock::now());

  cout << "\033[0;34m" << name << "\033[0;37m" << " starts walking to the pier but has the feeling like his bad luck is catching up to him again\n";
  cout << "\n";
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  cout << "---You start running to where you first met \033[0;31mZoltar\033[0;37m but notice he's gone!---\n";
  cout << "\n";
  sleep_for(seconds(5));
  sleep_until(system_clock::now());
  cout << "\033[0;34m" << name << "\033[0;37m" << "---NO! WHAT AM I GOING TO DO NOW\n";
  cout << "\n";
  //What every you put for D will affect this event, Yes will give you a good ending, No will give you a bad ending
  if (D == "No" || D == "no"){
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << " walks away if the feeling of great dread on their shoulders....NO Their Soul.\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    system("clear");
    cout << ".------..------..------.     .------..------..------.\n";
    cout << "|\033[0;30mT\033[0;37m.--. ||\033[0;31mH\033[0;37m.--. ||\033[0;30mE\033[0;37m.--. |.-.  |\033[0;31mE\033[0;37m.--. ||\033[0;30mN\033[0;37m.--. ||\033[0;31mD\033[0;37m.--. |\n";
    cout << "| :/\\: || :/\\: || (\\/) ((5)) | (\\/) || :(): || :/\\: |\n";
    cout << "| (__) || (__) || :\\/: |'-.-.| :\\/: || ()() || (__) |\n";
    cout << "| '--'\033[0;30mT\033[0;37m|| '--'\033[0;31mH\033[0;37m|| '--'\033[0;30mE\033[0;37m| ((1)) '--'\033[0;31mE\033[0;37m|| '--'\033[0;30mN\033[0;37m|| '--'\033[0;31mD\033[0;37m|\n";
    cout << "`------'`------'`------'  '-'`------'`------'`------'\n";
    cout << "\n";
    // Baskin comes from Josh baskin the main character of the movie and musical under the same name "Big".
    cout << "---" << "\033[0;34m" << name << "\033[0;37m" << ",Baskin. Born: 10/22/1997, Died: ?/?/22, Cause: Unknown---";
    //cout << "---" << "\033[0;34m" << name << "\033[0;37m" <<
    return 0;
  }
  else{
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "You are on your knee's wallowing but then you see a bright light in the shape of a...flashlight?\n\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\033[0;30mSecurity and Technition Guy\033[0;37m---Hey there, ummmmmm.....You ok?\n\n";
    cout << "\033[0;34m" << name << "\033[0;37m" << "---No, The machine I was looking for is Gone...Zoltar\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\033[0;30mS&T Guy\033[0;37m---OH! You mean this old thing\n\n";
    cout << "---Behind him is \033[0;31mZoltar\033[0;37m---\n\n";
    cout << "\033[0;30mS&T Guy\033[0;37m---This Guy just needed some repairs but he's up and running now.\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "---You insert your dollar and wish for things to go back to normal---\n";
    cout << "\n";
    sleep_for(seconds(5));
    sleep_until(system_clock::now());
    cout << "\033[0;36mZoltar\033[0;37m---Your wish..........HAS BEEN GRANTED!!!\n";
    cout << "---Instead of a small card it's the review sheet and a note say somthing unexpected---\n";
    cout << "\n";
    sleep_for(seconds(6));
    sleep_until(system_clock::now());
    cout << "---\"Does your head still hurt?\"---";
    cout << "\n";
    sleep_for(seconds(8));
    sleep_until(system_clock::now());
    system("clear");
    cout << "\n";
    cout << ".------..------..------.     .------..------..------.\n";
    cout << "|\033[0;30mT\033[0;37m.--. ||\033[0;31mH\033[0;37m.--. ||\033[0;30mE\033[0;37m.--. |.-.  |\033[0;31mE\033[0;37m.--. ||\033[0;30mN\033[0;37m.--. ||\033[0;31mD\033[0;37m.--. |\n";
    cout << "| :/\\: || :/\\: || (\\/) ((5)) | (\\/) || :(): || :/\\: |\n";
    cout << "| (__) || (__) || :\\/: |'-.-.| :\\/: || ()() || (__) |\n";
    cout << "| '--'\033[0;30mT\033[0;37m|| '--'\033[0;31mH\033[0;37m|| '--'\033[0;30mE\033[0;37m| ((1)) '--'\033[0;31mE\033[0;37m|| '--'\033[0;30mN\033[0;37m|| '--'\033[0;31mD\033[0;37m|\n";
    cout << "`------'`------'`------'  '-'`------'`------'`------'\n";
    cout << "\n";
    cout << "Come get you Fortune Told but don't anger the almighty \033[0;31mZOLTAR!\033[0;37m";
    cout << "\n";
    return 0;
  }
}