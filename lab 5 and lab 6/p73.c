#include<stdio.h>

int main() {
    int numOfVoters;
    printf("PLease enter the length of the array: ");
    scanf("%d", &numOfVoters);

    int votes[numOfVoters];
    int numOfVotes[6] = {0,0,0,0,0,0};

    for (int i=0;  i<numOfVoters; i++) {
        printf("\nPerson %d votes to cadidate number: ", i+1);
        scanf("%d", &votes[i]);

        if (votes[i]>0 && votes[i]<=5) {
            numOfVotes[votes[i]-1]++;
        } else {
            numOfVotes[5]++;
        }
    }

    

    // int rotatedElts[rotate];

    // for (int i=0; i<rotate; i++) {
    //     rotatedElts[i] = numbers[length-1-i];
    // }
    // for (int i=0; i<length; i++) {
    //     numbers[length-1-i] = numbers[length-1-i-rotate];
    // }
    // for (int i=0; i<rotate; i++) {
    //     numbers[i] = rotatedElts[i];
    // }

//output:
    for (int i=0;i<6; i++) {
        if (i==5) {
            printf("Spoilt Ballot: %d votes\n", numOfVotes[i]);
        } else {
            printf("Cadidate %d: %d votes\n", i+1, numOfVotes[i]);
        }
    }

    // printf("\nThe number you searched is %spresent in the array\n", (bool) ? "" : "not ");

    return 0;
}