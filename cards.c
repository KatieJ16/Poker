/* Defining all needed things for cards and decks. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/* The basic card. */
typedef struct _card {
    int suit;
    int rank;
    int card_number;
} card;

/* Makes a card,
 * 
 * Arguments are the suit and the rank.
 * 
 * Card is an integer from 0..3, where 0=Clubs, 1=Diamonds, 2=Hearts, 3=Spades
 * 
 * Rank is an integer in the range 0..12, 
 * where 0 = 2 (deuce), 1 = 3, 11 = King, 12 = Ace. 
 * This is the cards in a suit arranged in rank order
 * 
 * Return value is the card object.
 */

card* make_card(int suit, int rank) {
    card* this_card;

    this_card = (card *)malloc(sizeof(card));
    /* Check that the arguments are right. */
    if(suit < 0 || suit > 3) {
        fprintf(stderr, "suit must be an integer from 0 to 3 where 0=Clubs, 1=Diamonds, 2=Hearts, 3=Spades");
        exit(1);
    } 
    
    if(rank < 0 || rank > 12) {
        fprintf(stderr, "rank must be an integer from 0 to 12 where 0 = 2 (deuce), 1 = 3, 11 = King, 12 = Ace.");
        exit(1);
    }
    
    /* Make the right vaules on the cards. */
    this_card->suit = suit;
    this_card->rank = rank;
    this_card->card_number = suit * 13 + rank;
    return this_card;
    }

int main(int argc, char *argv[]) {
    card *card1;
    card *card2;
    card *card3;

    card1 = (card *)malloc(sizeof(card));
    card2 = (card *)malloc(sizeof(card));
    card3 = (card *)malloc(sizeof(card));

    card1 = make_card(3, 4);
    card2 = make_card(2, 8);
    card3 = make_card(0, 0);

    printf("card1->card_number = %d\n", card1->card_number);
    printf("card2->card_number = %d\n", card2->card_number);
    printf("card3->card_number = %d\n", card3->card_number);
    

    return 0;
}
