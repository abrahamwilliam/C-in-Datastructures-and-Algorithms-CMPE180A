#include <iostream>
#include <iomanip>
#include <mpir.h>
#include <stdlib.h>
#include <string.h>
#include <chrono>
#include <math.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

const int MAX_ITERATIONS = 15;
const int PLACES         = 1000000;        // desired decimal places
const int PRECISION      = PLACES + 1;  // +1 for the digit 3 before the decimal

const int BASE       = 10;  // base 10 numbers
const int BIT_COUNT  = 8;   // bits per machine word

const int BLOCK_SIZE = 10;                // print digits in blocks
const int LINE_SIZE  = 100;               // digits to print per line
const int LINE_COUNT = PLACES/LINE_SIZE;  // lines to print
const int GROUP_SIZE = 5;                 // line grouping size

/***** Complete this file. *****/

/**
 * The main.
 */
int main(){
mpf_set_default_prec(BIT_COUNT*PRECISION);
mpf_t ao;mpf_t yo;mpf_t s;mpf_t f;mpf_t t;mpf_t sr;mpf_t o;mpf_t tr1;mpf_t tr2;
mpf_init(ao);mpf_init(yo);mpf_init(s);mpf_init(f);mpf_init(t);mpf_init(sr);mpf_init(o);mpf_init(tr1);mpf_init(tr2);

mpf_init_set_ui(s,6u);mpf_init_set_ui(f,4u);mpf_init_set_ui(t,2u);mpf_init_set_ui(o,1u);
mpf_sqrt(sr,t);
mpf_mul(tr1,f,sr);
mpf_sub(ao,s,tr1);
mpf_sub(yo,sr,o);
int i=1;

auto start = std::chrono::system_clock::now();
while(i<MAX_ITERATIONS){

mpf_t y4;mpf_t tr2;mpf_t tr3;mpf_t tr4; mpf_t tr5; mpf_t yi;
mpf_init(y4);mpf_init(tr2);mpf_init(tr3);mpf_init(tr4);mpf_init(tr5);mpf_init(yi);
mpf_pow_ui(y4,yo,4u);
mpf_sub(tr2,o,y4);
mpf_sqrt(tr3,tr2);
mpf_sqrt(tr3,tr3);


mpf_sub(tr4,o,tr3);
mpf_add(tr5,o,tr3);

mpf_div(yi,tr4,tr5);


mpf_t yis; mpf_t tr6;mpf_t tr7; mpf_t tr8;       
mpf_init(yis);  mpf_init(tr6); mpf_init(tr7); mpf_init(tr8);    

mpf_pow_ui(yis,yi,2u);
mpf_add(tr6,o,yis);
mpf_add(tr7,tr6,yi);

double tp=2*i+1;
double base=pow(2,tp);

mpf_mul_ui(tr8,yi,base);
mpf_t temp2;
mpf_init(temp2);

mpf_mul(temp2,tr8,tr7);


mpf_t tr9; mpf_t tr10;
 mpf_init(tr9); mpf_init(tr10); 

mpf_add(tr9,yi,o);
mpf_pow_ui(tr10,tr9,4u);

mpf_t temp1;
mpf_init(temp1);

mpf_mul(temp1,ao,tr10);

mpf_t ai;
mpf_init(ai);

mpf_sub(ai,temp1,temp2);

mpf_set(ao,ai);
mpf_set(yo,yi);

i++;

}


mpf_t p;mpf_init(p);

mpf_ui_div(p,1u,ao);
   auto end = std::chrono::system_clock::now();
char *ptr=NULL;
	char *newPtr;
	mp_exp_t exp;
	newPtr = mpf_get_str(ptr,&exp,BASE,PLACES+1,p);

	cout<<newPtr[0]<<"."<<setw(1);
	for(int i =1;i<PLACES+1;i++)
	{   
		cout<<newPtr[i];

}


    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
    std::cout << "finished computation of pi on " << std::ctime(&end_time)
              << "in " << elapsed_seconds.count() << "s\n";


    return 0;
}