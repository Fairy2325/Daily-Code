/* Classifies a poker hand */ 
#include <stdbool.h> /* C99 only */ 
#include <stdio.h> 
#include <stdlib.h> 
#define NUM_RANKS 13 
#define NUM_SUITS 4 
#define NUM_CARDS 5 
/* external variables */ 
int hand[5][2]={0}; 
bool straight, flush, four, three; 
int pairs; /* can be 0, 1, or 2 */ 
/* prototypes */ 
void read_cards(void); 
void analyze_hand(void); 
void print_result(void); 
/************************************************************ 
 * main: Calls read_cards, analyze_hand, and print_result * 
 * repeatedly. * 
 ************************************************************/ 
int main(void) 
{ 
 for (;;) { 
 read_cards(); 
 analyze_hand(); 
 print_result(); 
 } 
} 
/************************************************************ 
 * read_cards: Reads the cards into the external * 
 * variables num_in_rank and num_in_suit; * 
 * checks for bad cards and duplicate cards. * 
 ***********************************************************/ 
void read_cards(void) 
{ 
 char ch, rank_ch, suit_ch; 
 int rank, suit; 
 bool bad_card; 
 int cards_read = 0; 
 while (cards_read < NUM_CARDS) { 
 bad_card = false; //初始化判断flag 
 printf("Enter a card: "); 
 rank_ch = getchar(); 
 switch (rank_ch) { 
 case '0': exit(EXIT_SUCCESS); 
 case '2': hand[cards_read][0] = 0; break; 
 case '3': hand[cards_read][0] = 1; break; 
 case '4': hand[cards_read][0] = 2; break; 
 case '5': hand[cards_read][0] = 3; break; 
 case '6': hand[cards_read][0] = 4; break; 
 case '7': hand[cards_read][0] = 5; break; 
 case '8': hand[cards_read][0] = 6; break; 
 case '9': hand[cards_read][0] = 7; break; 
 case 't': case 'T': hand[cards_read][0] = 8; break; 
 case 'j': case 'J': hand[cards_read][0] = 9; break; 
 case 'q': case 'Q': hand[cards_read][0] = 10; break; 
 case 'k': case 'K': hand[cards_read][0] = 11; break; 
 case 'a': case 'A': hand[cards_read][0] = 12; break; 
 default: bad_card = true; 
 } 
 suit_ch = getchar(); 
 switch (suit_ch) { 
 case 'c': case 'C': hand[cards_read][1] = 0; break; 
 case 'd': case 'D': hand[cards_read][1] = 1; break; 
 case 'h': case 'H': hand[cards_read][1] = 2; break; 
 case 's': case 'S': hand[cards_read][1] = 3; break; 
 default: bad_card = true; 
 } 
 while ((ch = getchar()) != '\n')  
 if (ch != ' ') bad_card = true; //检测是否有其他错误输入 
 if (bad_card) 
 printf("Bad card; ignored.\n"); 
 else
 {
 	int flag=0;
 	for(int i=0;i<cards_read;i++)
 	{
 		if(hand[i][0]==hand[cards_read][0]&&hand[i][1]==hand[cards_read][1])
 		flag=1;
	 }
	 if(flag)
	 printf("Duplicate card; ignored.\n");
	 else
	 cards_read++; 
	 
 }
 } 
} 
/************************************************************ 
 * analyze_hand: Determines whether the hand contains a * 
 * straight, a flush, four-of-a-kind, * 
 * and/or three-of-a-kind; determines the * 
 * number of pairs; stores the results into * 
 * the external variables straight, flush, * 
 * four, three, and pairs. * 
 ************************************************************/ 
void analyze_hand(void) 
{ 
 int num_consec = 0; 
 int rank, suit; 
 straight = false; 
 flush = false; 
 four = false; 
 three = false; 
 pairs = 0; 
 /* check for flush 检测是否为同种花色*/ 
 if ((hand[0][1]==hand[1][1])&&(hand[2][1]==hand[3][1])&&(hand[4][1]==hand[0][1])&&(hand[0][1]==hand[2][1])) 
 {flush = true;} 
 /* check for straight检测是否为顺子 */ 
 if ((hand[0][0]+1==hand[1][0])&&(hand[1][0]+1==hand[2][0])&&(hand[2][0]+1==hand[3][0])&&(hand[3][0]+1==hand[4][0])) { 
 straight = true; 
 return; 
 } 
 /* check for 4-of-a-kind, 3-of-a-kind, and pairs检测是否为同种点数 */ 
 int flag1=0;
 for (int m = 0; m < NUM_CARDS; m++) {
 for (int n = 0; n < NUM_SUITS; n++){
 	if(hand[m][0]==hand[n][0])
 	flag1++;
 }
}
 if (flag1 == 16) four = true; 
 if (flag1 == 9) three = true; 
 if (flag1 == 4) pairs++; 
 
} 
/************************************************************ 
* print_result: prints the classification of the hand, * 
* based on the values of the external * 
* variables straight, flush, four, three, * 
* and pairs. * 
***********************************************************/ 
void print_result(void) 
{
 if (straight && flush) printf("Straight flush"); 
 else if (four) printf("Four of a kind"); 
 else if (three &&  pairs == 1) printf("Full house"); 
 else if (flush) printf("Flush"); 
 else if (straight) printf("Straight"); 
 else if (three) printf("Three of a kind"); 
 else if (pairs == 2) printf("Two pairs"); 
 else if (pairs == 1) printf("Pair"); 
 else printf("High card"); 
 printf("\n\n"); 
}
