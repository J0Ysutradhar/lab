#include <stdio.h>
#include <string.h>

struct Candidate {
    char name[20];
    int votes;
};

int main() {
    struct Candidate c1 = {"A", 0};
    struct Candidate c2 = {"B", 0};
    struct Candidate c3 = {"C", 0};

    int i;
    char vote;

    printf("Voting Program\n");
    printf("Candidates: A, B, C\n\n");

    for(i = 1; i <= 5; i++) {
        printf("Voter %d, enter your vote (A/B/C): ", i);
        scanf(" %c", &vote);

        switch(vote) {
            case 'A':
            case 'a':
                c1.votes++;
                break;
            case 'B':
            case 'b':
                c2.votes++;
                break;
            case 'C':
            case 'c':
                c3.votes++;
                break;
            default:
                printf("Invalid vote! Not counted.\n");
        }
    }

    printf("\n--- Voting Results ---\n");
    printf("A: %d votes\n", c1.votes);
    printf("B: %d votes\n", c2.votes);
    printf("C: %d votes\n", c3.votes);

    // Decide winner
    if(c1.votes > c2.votes && c1.votes > c3.votes) {
        printf("Winner: Candidate A\n");
    }
    else if(c2.votes > c1.votes && c2.votes > c3.votes) {
        printf("Winner: Candidate B\n");
    }
    else if(c3.votes > c1.votes && c3.votes > c2.votes) {
        printf("Winner: Candidate C\n");
    }
    else {
        printf("It's a tie!\n");
    }

    return 0;
}
