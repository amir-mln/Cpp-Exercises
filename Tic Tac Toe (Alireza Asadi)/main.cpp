#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#define endl  "\n"
#define FOR(i,a,b)  for(int i = (a) ; i < int (b) ; i++ )
using namespace std;
  char a[10] = {'\0','1', '2' , '3' , '4' , '5' , '6' ,'7' ,'8', '9'};

  int n  = 1;
  //in single player if computer or the man be the first , in rest of the other rounds the one who was first will be first in other 4 rounds .
  /*if computer get the first move there will be no easy / medium or hard mode means that
  it will be hard for all modes and rounds
  */
  //chekkoli checks homes may cause me lose
  //checkboard choose one home if there are no conditions
  //checkwin chooses the home which causes to win the game for computer
  //** note **
  //******************even if you defeat computer still the mighty computer wins****************************** ///joking
int times = 0 ;
string namee ;
string winner ;
char mark ;
char mark2 ;
bool c = true ;
string name1 , name2 ;
void checkkoli(){
if(a[1]==a[3]&& a[1]=='\1' && a[3]=='\1'  && a[2]=='2') {
    a[2]='\2';
    c = false ;
}
else
    if(a[1]==a[7]&& a[1]=='\1' && a[7]=='\1'  && a[4]=='4') {
    a[4]='\2';
    c = false ;
    }
else
    if(a[1]==a[9]&& a[1]=='\1' && a[9]=='\1'  && a[5]=='5') {
    a[5]='\2';
    c = false ;
    }
else
    if(a[3]==a[7]&& a[3]=='\1' && a[7]=='\1'  && a[5]=='5') {
    a[5]='\2';
    c = false ;
    }
else
    if(a[7]==a[9]&& a[7]=='\1' && a[9]=='\1'  && a[8]=='8') {
    a[8]='\2';
    c = false ;
    }
else
    if(a[2]==a[8]&& a[2]=='\1' && a[8]=='\1' && a[5]=='5') {
    a[5]='\2';
    c = false ;
    }
else
    if(a[4]==a[6]&& a[4]=='\1' && a[6]=='\1'  && a[5]=='5') {
    a[5]='\2';
    c = false ;
    }
else
    if(a[3]==a[9]&& a[3]=='\1' && a[9]=='\1'  && a[6]=='6') {
    a[6]='\2';
    c = false ;
    }

else
    if(a[1]==a[2] && a[1]=='\1' && a[2]=='\1' && a[3]=='3' ) {
    a[3]='\2';
 c = false ;
}
else
    if(a[1]==a[4] && a[1]=='\1' && a[4]=='\1' && a[7]=='7' ) {
    a[7]='\2';
    c = false ;
    }
else
    if(a[4]==a[5]&& a[4]=='\1' && a[5]=='\1'  && a[6]=='6' ) {
    a[6]='\2';
    c = false ;
    }
else
    if(a[2]==a[5]&& a[2]=='\1' && a[5]=='\1'  && a[8]=='8' ) {
    a[8]='\2';
    c = false ;
    }
else
    if(a[7]==a[8]&& a[7]=='\1' && a[8]=='\1'  && a[9]=='9' ) {
    a[9]='\2';
    c = false ;
    }
else
    if(a[3]==a[6] && a[3]=='\1' && a[6]=='\1' && a[9]=='9' ) {
    a[9]='\2';
    c = false ;
    }
else
    if(a[1]==a[5]&& a[1]=='\1' && a[5]=='\1'  && a[9]=='9' ) {
    a[9]='\2';
    c = false ;
    }
else
    if(a[3]==a[5] && a[3]=='\1' && a[5]=='\1' && a[7]=='7' ) {
    a[7] = '\2';
    c = false ;
    }
else
    if(a[2]==a[3]&&a[2]=='\1'&&a[3]=='\1' && a[1]=='1' ) {
    a[1]='\2';
    c = false ;
}
else
    if(a[4]==a[7] && a[4]=='\1' && a[7]=='\1' && a[1]=='1' ) {
    a[1]='\2';
    c = false ;
    }
else
    if(a[5]==a[6]&& a[5]=='\1' && a[6]=='\1'  && a[4]=='4' ) {
    a[4]='\2';
    c = false ;
    }
else
    if(a[6]==a[9]&& a[6]=='\1' && a[9]=='\1'  && a[3]=='3' ) {
    a[3]='\2';
    c = false ;
    }
else
    if(a[5]==a[8] && a[5]=='\1' && a[8]=='\1' && a[2]=='2' ) {
    a[2]='\2';
    c = false ;
    }
else
    if(a[8]==a[9] && a[8]=='\1' && a[9]=='\1' && a[7]=='7' ) {
    a[7]='\2';
    c = false ;
    }
else
    if(a[5]==a[9]&& a[5]=='\1' && a[9]=='\1' && a[1]=='1' ) {
    a[1]='\2';
    c = false ;
    }
else
    if(a[5]==a[7]&& a[5]=='\1' && a[7]=='\1'  && a[3]=='3') {
    a[3]='\2';
    c = false ;
    }

}



void checkboard(){//this function is stupid

if(a[1]=='1'){
    a[1]='\2';
}
else
  if(a[2]=='2'){
        a[2]='\2';
}
else
  if(a[3]=='3'){
        a[3]= '\2';
}
else
  if(a[4]=='4'){
        a[4]= '\2';
}
else
  if(a[5]=='5'){
        a[5]= '\2';
}
else
  if(a[6]=='6'){
        a[6]= '\2';
}
else
  if(a[7]=='7'){
        a[7]= '\2';
}
else
  if(a[8]=='8'){
        a[8]= '\2';
}
else
  if(a[9]=='9'){
        a[9]= '\2';
}



}


void chek1(){

if(a[1]==a[2] && a[2]==a[3])
    times++;
    else
if(a[4]==a[5] && a[5]==a[6])
  times++;
  else
if(a[7]==a[8] && a[8]==a[9])
  times++;
  else
if(a[1]==a[4] && a[4]==a[7])
  times++;
  else
if(a[2]==a[5] && a[5]==a[8])
  times++;
  else
if(a[3]==a[6] && a[6]==a[9])
  times++;
  else
if(a[1]==a[5] && a[5]==a[9])
  times++;
  else
if(a[3]==a[5] && a[5]==a[7])
  times++;
}



void checkwin(){
 if(a[1]==a[2] && a[1]=='\2'  && a[2]=='\2' && a[3]=='3'){//1
        a[3]='\2';
        times++;
}
else
    if(a[1]==a[4] && a[1]=='\2' && a[4] == '\2' && a[7]=='7'){// 2
        a[7]='\2';
         times++;
    }
    else
    if(a[1]==a[5]&& a[1]=='\2' && a[5] == '\2'&&a[9]=='9' ){ //3
        a[9]='\2';
         times++;
    }
else
    if(a[2]==a[3]&& a[2]=='\2' && a[3] == '\2'&&a[1]=='1' ){ //4
        a[1]='\2';
         times++;
    }
else
    if(a[2]==a[5]&& a[2]=='\2' && a[5] == '\2'&& a[8]=='8' ){ //5
        a[8]='\2';
         times++;
    }
else
    if(a[3]==a[5]&& a[3]=='\2' && a[5] == '\2'&&a[7]=='7'  ){ //6
        a[7]='\2'; times++;
    }
else
    if(a[3]==a[6]&& a[3]=='\2' && a[6] == '\2'&& a[9]=='9' ){ //7
        a[9]='\2'; times++;
    }
else
    if(a[4]==a[7]&& a[4]=='\2' && a[7] == '\2'&& a[1]=='1' ){// 8
        a[1]='\2'; times++;
    }
else
    if(a[4]==a[5]&& a[4]=='\2' && a[5] == '\2'&&a[6]=='6' ){ //9
        a[6]='\2'; times++;
    }
else
    if(a[5]==a[6]&& a[5]=='\2' && a[6] == '\2'&& a[4]=='4' ){// 10
        a[4]='\2'; times++;
    }
else
    if(a[5]==a[7]&& a[5]=='\2' && a[7] == '\2'&&a[3]=='3'  ){// 11
        a[3]='\2'; times++;
    }
else
    if(a[5]==a[8]&& a[5]=='\2' && a[8] == '\2'&& a[2]=='2' ){// 12
        a[2]='\2'; times++;
    }
else
    if(a[1]==a[3]&& a[1]=='\2' && a[3] == '\2'&& a[2]=='2' ){// 13
        a[2]='\2'; times++;
    }
else
    if(a[5]==a[9]&& a[5]=='\2' && a[9] == '\2'&& a[1]=='1' ){// 14
        a[1]='\2'; times++;
    }
else
    if(a[6]==a[9]&& a[6]=='\2' && a[9] == '\2'&& a[3]=='3' ){// 15
        a[3]='\2'; times++;
    }
else
    if(a[7]==a[8]&& a[7]=='\2' && a[8] == '\2'&& a[9]=='9' ){ //16
        a[9]='\2'; times++;
    }
else
    if(a[8]==a[9]&& a[8]=='\2' && a[9] == '\2'&& a[7]=='7' ){ //17
        a[7]='\2'; times++;
    }
else
    if(a[1]==a[9]&& a[1]=='\2' && a[9] == '\2'&& a[5]=='5' ){//18
        a[5]='\2'; times++;
    }
else
    if(a[1]==a[7]&& a[1]=='\2' && a[7] == '\2'&& a[4]=='4' ){//19
        a[4]='\2'; times++;
    }
else
    if(a[2]==a[8]&& a[2]=='\2' && a[8] == '\2'&& a[5]=='5' ){//20
        a[5]='\2'; times++;
    }
else
    if(a[3]==a[9]&& a[3]=='\2' && a[9] == '\2'&& a[6]=='6'  ){//21
        a[6]='\2'; times++;
    }
else
    if(a[7]==a[9]&& a[7]=='\2' && a[9] == '\2'&& a[8]=='8' ){//22
        a[8]='\2'; times++;
    }
else
    if(a[4]==a[6]&& a[4]=='\2' && a[6] == '\2'&& a[5]=='5' ){//23
        a[5  ]='\2'; times++;
    }
else
    if(a[3]==a[7]&& a[3]=='\2' && a[7] == '\2'  && a[5]=='5' ){//24
        a[5]='\2'; times++;
    }








}


void Game_mode(){
cout << "1-easy"<<endl<<endl;
cout << "2-Medium"<<endl<<endl;
cout << "3-Hard"<<endl<<endl;
}


void playoptions(){

    cout << "1-you vs computer" <<endl<<endl ;
    cout << "2-multi player"<<endl ;
}


void shekl_e_bazi(){

cout << endl <<endl;
cout << "************************************"<<endl;
cout << "*          **          **          *"<<endl;
cout <<"*"<< "     "<< a[1]<<"    **" <<   "    " <<a[2]<< "     **"<< "     "   <<   a[3] <<"    *"     <<endl;
cout << "*          **          **          *"<<endl;
cout << "*          **          **          *"<<endl;
cout << "************************************"<<endl;
cout << "*          **          **          *"<<endl;
cout <<"*"<< "     "<< a[4]<<"    **" <<   "    " <<a[5]<< "     **"<< "     "   <<   a[6] <<"    *"     <<endl;
cout << "*          **          **          *"<<endl;
cout << "*          **          **          *"<<endl;
cout << "************************************"<<endl;
cout << "*          **          **          *"<<endl;
cout <<"*"<< "     "<< a[7]<<"    **" <<   "    " <<a[8]<< "     **"<< "     "   <<   a[9] <<"    *"     <<endl;
cout << "*          **          **          *"<<endl;
cout << "*          **          **          *"<<endl;
cout << "************************************"<<endl;
}

//************************************************************************************************************
void multiplay(){

int p1 = 0 , p2 = 0  ;
int i = 0 ;
        cout << "Please enter your names :  " << endl <<endl;
    cout << "1-player one's name : " ;cin >> name1 ;cout << endl ;
    cout << "2-player two's name : " ;cin >> name2 ;cout << endl <<endl ;
    cout << "Round" << " " << n <<endl;
    int p ;
    srand(time(0));
    p = 1 + rand()%2;

  while(n < 6){

   FOR(k,0,10){


    shekl_e_bazi();

    if(p%2!=0)
        p = 1 ;
    else
        p = 2 ;
        if(p==1)
    cout << name1 <<  "'s turn :  " ;
    else
    cout << name2 <<  "'s turn :  " ;
    if(p==1)
        mark = '\1';
    else
        mark = '\2';
    cin >> i ;
        if (i == 1 && a[1] == '1')
			a[1] = mark ;
                else if (i == 2 && a[2] == '2')
			a[2] = mark;
                else if (i == 3 && a[3] == '3')
			a[3] = mark;
                else if (i == 4 && a[4] == '4')
			a[4] = mark;
                else if (i == 5 && a[5] == '5')
			a[5] = mark;
                else if (i == 6 && a[6] == '6')
			a[6] = mark;
            	else if (i == 7 && a[7] == '7')
			a[7] = mark;
            	else if (i == 8 && a[8] == '8')
			a[8] = mark;
            	else if (i == 9 && a[9] == '9')
			a[9] = mark;
            	else {
                    cout << "invalid number ! " <<endl;
                p--;k--;}
                chek1();
                p++;
                if(times){
                        if(p==3){
                        p2++;
                        p=2;
                        }
                         else{
                            if(p==2)
                               p1++;
                               p=1;
                         }
                         times = 0 ;
                break ;
                }
                if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
                    }
    }
//name1 = p1
//name2 = p2
n++ ;
system("cls");
cout << name1<< " " << p1 << "    " << name2 << " " <<p2 << endl <<endl ;
if(n < 6){
cout << "Round  " << n << endl  << endl ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;
    }
if(p1 > p2)
   winner = name1 ;
else
    winner = name2 ;
        ofstream outfile ;
    outfile.open("C:\\Programs\\games\\example.txt");
    if(!outfile){
        cerr << "error" << endl ;
        exit(1);
    }
    outfile << winner  << endl ;
    outfile.close();




}






void singleplayer0(){//easy
int chance ;
int x , y , eq = 0;
srand(time(0));
chance = rand()%3;


int p = 2 ;
int pc = 0 ;
int i = 0;
int you = 0 ;

cout << "please enter your name : " ; cin >> namee ;
 if(chance){

while( n < 6){

cout << endl  <<endl ;
shekl_e_bazi();
cout << endl << endl ;
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 )
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x==5){a[1] = '\2';}
else a[5] = '\2';
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y ;
if(y > 10 || y < 0 || y == x   )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if(x==5 && y==9){a[3] = '\2' ;shekl_e_bazi();p=1;}
cout << endl ;

    if( x== 2 && y == 7 ){
        a[6] = '\2' ;
        shekl_e_bazi();
        p=1;

    }
     else
        if(x== 4  && y ==3 ){
        a[8] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 4  && y == 9 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 6 && y ==7 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==8  && y == 3){
        a[4] = '\2' ;
        shekl_e_bazi();
        p=1;

        }





    if(x==2 && y==6 ){
    a[9] = '\2';
    p = 1 ;
    shekl_e_bazi();
    }
    else
     if(x==6 && y ==8 ){
            a[7] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x== 8 && y == 4 ){
            a[1] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x==4 && y ==2 ){
            a[3] = '\2' ;
            shekl_e_bazi();
            p =1;

    }


    if((x==2 || x == 8) && (y==2 || y == 8)){
        a[1]='\2';
        shekl_e_bazi();
        p=1;
    }
    else
        if( (x==1 && y==9 ) || (x==9 && y==1) || (x==3 && y==7) || (y==3 && x==7) )
    {
        a[2]= '\2';
        shekl_e_bazi();p=1;
    }

    FOR(ll,0,7){

    if(p!=1){
        checkwin();
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

       checkkoli();
        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

    }

   // else
    if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;ll--;}

                chek1();

                if(times){
                    you++;
                    times=0;
                    break;
                }
                p++ ;




        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }








    }

//cout << n << " " <<endl ;
n++ ;
system("cls");
cout << namee <<" : " << you << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;

  }
 if(you > pc )
winner = namee ;
else
    winner = " " ;
    ofstream outfile ;
    outfile.open("C:\\Programs\\games\\example.txt");
    if(!outfile){
        cerr << "error" << endl ;
        exit(1);
    }


    outfile << winner  << endl ;
    outfile.close();









 }
else {
        cout << "Round 1 " << endl <<endl<< endl  ;
            while(n < 6 ){


cout << "here the mighty computer comes first  " << endl ;

            cout <<endl ;
cout << endl << endl ;
a[1] = '\2' ;
shekl_e_bazi();
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 || x==1)
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x!=5){a[5] = '\2' ;  }else{a[6] = '\2' ;  }
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y ;
if(y > 10 || y < 0 || y==x    )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if( x!=5 &&  x!= 9 && y != 9 ){a[9]=='\2';pc++;eq = 8;p=2; }
else
    if(((x==2 || x ==4) && y == 9) || ((y==2 || y==4)&& x==9)){
        a[3] = '\2' ;
        p=1;
    }
    else
    if(x==5 && y ==4){a[3]='\2';}
    //cout <<"&&&&&&&&&&& " << y<<endl;
    for(eq ; eq < 8 ; eq++){
cout << "fasdfuy" << endl ;

            if(p!=1){

                       checkwin();
                       cout << "*********  " << times << endl ;
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

        checkkoli();
       cout << "dftbu  " << c <<"gesgsg" <<endl ;
        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }
//cout << "werthbvft  " << p <<endl ;
//cout << "bfufb 1234  " << i <<endl ;

            }
if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;eq--;

                }
                p++ ;






        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }

    }//for
    system("cls");
eq = 0 ;
n++ ;
cout << namee <<" : " << 0 << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;


            }


}

 }



void singleplayer1(){//medium
//you may beat the computer but you will never beat the mighty computer
//first you start the game
int p = 2 ;

int eq = 0 ;
int chance ;
int pc = 0 ;
int i = 0;
int you = 0 ;
int x , y ;

srand(time(0));
chance = rand()%3;

cout << "please enter your name : " ; cin >> namee ;
if(chance)
{


while( n < 6){

cout << endl  <<endl ;
shekl_e_bazi();
cout << endl << endl ;
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 )
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x==5){a[1] = '\2';}
else a[5] = '\2';
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y;
if(y > 10 || y < 0 || y==x )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if(x==5 && y==9){a[3] = '\2' ;shekl_e_bazi();p=1;}
cout << endl ;

    if( x== 2 && y == 7 ){
        a[6] = '\2' ;
        shekl_e_bazi();
        p=1;

    }
     else
        if(x== 2 && y == 9 ){
        a[4] = '\2' ;
        shekl_e_bazi();
        p=1;
        }
     else
        if(x== 4  && y ==3 ){
        a[8] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 4  && y == 9 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==6  && y ==1 ){
        a[8] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 6 && y ==7 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==8  && y == 1){
        a[6] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==8  && y == 3){
        a[4] = '\2' ;
        shekl_e_bazi();
        p=1;

        }





    if(x==2 && y==6 ){
    a[9] = '\2';
    p = 1 ;
    shekl_e_bazi();
    }
    else
     if(x==6 && y ==8 ){
            a[7] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x== 8 && y == 4 ){
            a[1] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x==4 && y ==2 ){
            a[3] = '\2' ;
            shekl_e_bazi();
            p =1;

    }


    if((x==2 || x == 8) && (y==2 || y == 8)){
        a[1]='\2';
        shekl_e_bazi();
        p=1;
    }
    else
        if( (x==1 && y==9 ) || (x==9 && y==1) || (x==3 && y==7) || (y==3 && x==7) )
    {
        a[2]= '\2';
        shekl_e_bazi();p=1;
    }

    FOR(ll,0,7){

    if(p!=1){
        checkwin();
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

       checkkoli();

        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

    }

   // else
    if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;ll--;}

                chek1();

                if(times){
                    you++;
                    times=0;
                    break;
                }
                p++ ;




        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }








    }
system("cls");
//cout << n << " " <<endl ;
n++ ;
cout << namee <<" : " << you << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;

}
if(you > pc)
winner =   namee ;
else
    winner = "";
    ofstream outfile ;
    outfile.open("C:\\Programs\\games\\example.txt");
  //  if(!outfile){
    //    cerr << "error" << endl ;
      //  exit(1);
   // }

    outfile << winner  << endl ;
    outfile.close();










}
else{


        cout << "Round 1 " << endl <<endl<< endl  ;
            while(n < 6 ){


cout << "here the mighty computer comes first  " << endl ;

            cout <<endl ;
cout << endl << endl ;
a[1] = '\2' ;
shekl_e_bazi();
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 || x==1)
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x!=5){a[5] = '\2' ;  }else{a[6] = '\2' ;  }
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y ;
if(y > 10 || y < 0 || y==x    )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if( x!=5 &&  x!= 9 && y != 9 ){a[9]=='\2';pc++;eq = 8;p=2; }
else
    if(((x==2 || x ==4) && y == 9) || ((y==2 || y==4)&& x==9)){
        a[3] = '\2' ;
        p=1;
    }
    else
    if(x==5 && y ==4){a[3]='\2';}
    //cout <<"&&&&&&&&&&& " << y<<endl;
    for(eq ; eq < 8 ; eq++){
//cout << "fasdfuy" << endl ;

            if(p!=1){

                       checkwin();
                     //  cout << "*********  " << times << endl ;
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

        checkkoli();
      // cout << "dftbu  " << c <<"gesgsg" <<endl ;
        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }
//cout << "werthbvft  " << p <<endl ;
//cout << "bfufb 1234  " << i <<endl ;

            }
if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;eq--;

                }
                p++ ;






        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }

    }//for
    system("cls");
eq = 0 ;
n++ ;
cout << namee <<" : " << 0 << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;











}


}

}

void singleplayer2(){//hard
    //the mighty computer never looses so there will be no counting for  the person
//first you start the game
int chance ;
int eq = 0 ;
srand(time(0));
chance = rand()%3;


//************************************************************************************************************************************

cout << "                       How dare you to face the mighty computer   " << endl <<endl <<endl ;


int x , y ;
int p = 2 ;
int pc = 0 ;
int i = 0;

cout << "please enter your name : " ; cin >> namee ;

if(chance){

while( n < 6){

cout << endl  <<endl ;
shekl_e_bazi();
cout << endl << endl ;
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 )
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x==5){a[1] = '\2';}
else a[5] = '\2';
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y ;
if(y > 10 || y < 0 || y==x    )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if(x==5 && y==9){a[3] = '\2' ;shekl_e_bazi();p=1;}
cout << endl ;
FOR(h,0,2){

    if( x== 2 && y == 7 ){
        a[6] = '\2' ;
        shekl_e_bazi();
        p=1;

    }
     else
        if(x== 2 && y == 9 ){
        a[4] = '\2' ;
        shekl_e_bazi();
        p=1;
        }
     else
        if(x== 4  && y ==3 ){
        a[8] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 4  && y == 9 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==6  && y ==1 ){
        a[8] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x== 6 && y ==7 ){
        a[2] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==8  && y == 1){
        a[6] = '\2' ;
        shekl_e_bazi();
        p=1;

        }
    else
        if(x==8  && y == 3){
        a[4] = '\2' ;
        shekl_e_bazi();
        p=1;

        }

    swap(x,y);
}
    swap(x,y);

    FOR(s,0,2){
    if(x==2 && y==6 ){
    a[9] = '\2';
    p = 1 ;
    shekl_e_bazi();
    }
    else
     if(x==6 && y ==8 ){
            a[7] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x== 8 && y == 4 ){
            a[1] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
     else
     if(x==4 && y ==2 ){
            a[3] = '\2' ;
            shekl_e_bazi();
            p =1;

    }
    swap(x,y);

    }
    swap(x,y);
    if((x==2 || x == 8) && (y==2 || y == 8)){
        a[1]='\2';
        shekl_e_bazi();
        p=1;
    }
    else
        if( (x==1 && y==9 ) || (x==9 && y==1) || (x==3 && y==7) || (y==3 && x==7) )
    {
        a[2]= '\2';
        shekl_e_bazi();p=1;
    }

    FOR(ll,0,7){

    if(p!=1){
        checkwin();
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

        checkkoli();
        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

    }

   // else
    if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;ll--;

                }
                p++ ;




        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }

    }
system("cls");
//cout << n << " " <<endl ;
n++ ;
cout << namee <<" : " <<0 << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;

}
}

    else {
        cout << "Round 1 " << endl <<endl<< endl  ;
            while(n < 6 ){


cout << "here the mighty computer comes first  " << endl ;

            cout <<endl ;
cout << endl << endl ;
a[1] = '\2' ;
shekl_e_bazi();
cout << namee << "'s turn :  " ;
cin >> x ;
if(x > 10 || x < 0 || x==1)
{
    cout << "you are not even close " << endl << "try another : " ;
    cin >> x ;
}
a[x] = '\1' ;
cout << endl ;
if(x!=5){a[5] = '\2' ;  }else{a[6] = '\2' ;  }
shekl_e_bazi();
cout << endl ;
cout << namee << "'s turn :  " ;
cin >> y ;
if(y > 10 || y < 0 || y==x    )
{
    cout << "Don't be stupid " << endl << "try another : " ;
    cin >> y ;
}
a[y] = '\1' ;
cout << endl <<endl;
if( x!=5 &&  x!= 9 && y != 9 ){a[9]=='\2';pc++;eq = 8;p=2; }
else
    if(((x==2 || x ==4) && y == 9) || ((y==2 || y==4)&& x==9)){
        a[3] = '\2' ;
        p=1;
    }
    else
    if(x==5 && y ==4){a[3]='\2';}
    //cout <<"&&&&&&&&&&& " << y<<endl;
    for(eq ; eq < 8 ; eq++){
cout << "fasdfuy" << endl ;

            if(p!=1){

                       checkwin();
                     //  cout << "*********  " << times << endl ;
        if(times){
                shekl_e_bazi();
                pc++;
                p=2;
                times = 0;
                p++ ;
                break ;


        }

        checkkoli();
      // cout << "dftbu  " << c <<"gesgsg" <<endl ;
        if(!c){
        shekl_e_bazi();
        }
        p = 1;
        if(c){
            checkboard();
            shekl_e_bazi();
        }

        c = true ;

        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }
//cout << "werthbvft  " << p <<endl ;
//cout << "bfufb 1234  " << i <<endl ;

            }
if(p==1){
        cout << namee << "'s turn :  " ;
        cin >> i ;
    }
        if (i == 1 && a[1] == '1')
			a[1] = '\1' ;
                else if (i == 2 && a[2] == '2')
                    a[2] = '\1';
                else if (i == 3 && a[3] == '3')
                    a[3] = '\1';
                else if (i == 4 && a[4] == '4')
                    a[4] = '\1';
                else if (i == 5 && a[5] == '5')
                    a[5] = '\1';
                else if (i == 6 && a[6] == '6')
                    a[6] = '\1';
            	else if (i == 7 && a[7] == '7')
                    a[7] = '\1';
            	else if (i == 8 && a[8] == '8')
                    a[8] = '\1';
            	else if (i == 9 && a[9] == '9')
                    a[9] = '\1';
            	else {
                    cout << "invalid number ! " <<endl;
                p--;eq--;

                }
                p++ ;






        if(a[1] != '1' &&  a[2] !='2'&&a[3] !='3' && a[4] !='4' &&  a[5] !='5' && a[6] !='6'&&a[7] !='7'&&a[8] !='8'&&a[9] !='9' ){
                        break ;
              }

    }//for
    system("cls");
eq = 0 ;
n++ ;
cout << namee <<" : " << 0 << "      " <<"mighty computer :  " << pc <<endl ;
if(n < 6){
cout << "Round  " << n << endl  ;
}
a[1] = '1' ;
a[2] = '2' ;
a[3] = '3' ;
a[4] = '4' ;
a[5] = '5' ;
a[6] = '6' ;
a[7] = '7' ;
a[8] = '8' ;
a[9] = '9' ;










   }
//*****************************************************************************************************************************************88

}
}



void menu(){

    cout << "                      $ Welcome to  the Game $" <<endl<<endl<<endl ;
    cout << "1-Play " <<endl<<endl ;
    cout << "2-Winner "<<endl<<endl ;
    cout << "3-Exit " << endl<<endl ;

}


void choose(int &x ){
    int y ;
    if(x==1){
        playoptions();
        cin >> y ;
        if(y==1){
            Game_mode();
            FOR(rrr,0,3){
                int tt ;
                cin >> tt ;
                cout << endl;
                if(tt==1){
                    singleplayer0();
                    break ;
                }
                    else
                    if(tt==2){
                        singleplayer1();
                    break;
                    }
                    else
                        if(tt==3){
                        singleplayer2();
                         break;
                        }
                    else {

                        cout << "Please choose one of the options :" <<endl<<endl;
                        Game_mode();
                  }
                if(rrr==1){
                    cout << "You idiot " <<endl <<"enter the correct one " <<endl;
                }
                else
                if(rrr==2){
                    cout << "you fear the mighty computer i see /: " <<endl;
                    break;
                }

            }

        }
        else
            if(y==2)
        multiplay();
        else{
            cout << "please enter 1 or two : " <<endl << "choose one option : " << endl<<endl ;
        choose(x);

        }

    }
    else if(x==2){

    cout << endl ;
    ifstream inFile ;
  inFile.open("C:\\Programs\\games\\example.txt");

    while(inFile >> winner)
    cout << winner << endl  ;




    cout << "But still The mighty computer is The true winner"<<endl <<endl<<endl ;



    }
}


void menu1(){

    cout << "1-Play " <<endl<<endl ;
    cout << "2-Winner "<<endl<<endl ;
    cout << "3-Exit " << endl<<endl ;


}



//***********************************************************************************************************************
int main()
{

    string winner ;
  menu();
  int x ;
  int iii = 0;
  FOR(ii,0,20){
 if(iii!=0)
    menu1();
  cin >> x ;
  if(x==3){
    cout << endl << endl << "                        please rate us  \2  \1\    "  << endl ;
  break ;
  }
  iii++;
  choose(x);
  if(x == 2){
    cout  << "                        please rate us  \2  \1\    "  << endl  ;
    break ;
  }
  n=1;
  }
  cout << endl <<endl ;

    return 0;
}


