#include<stdio.h>
int main(){
    char name[50], position, ter;
    int yr_of_experience, id;
    float mntly_slry, yrly_slry, yrly_incm_tax;
    while(1){
        printf("\n***--------****---------***");

        printf("\nEnter c for ceo.\nEnter m for manager.\nEnter h for team head.\nEnter e for Team member.\nEnter j for cleaner.\nEnter k for clark.\nEnter x for exit\n");
        printf("Enter employ position: ");        
        scanf(" %c", &position);
            if(position=='x'){
            break;
        }
        
        printf("\nEntert name of the empoly: ");
        scanf("%s", name);
        printf("\nEnter The employ id: ");
        scanf("%d", &id);
        printf("\nEnter The employ year of experience: ");
        scanf("%d", &yr_of_experience);        
        switch(position){
            case 'c':
            case 'm':{
                printf("\nName: %s", name);
                printf("\nId: %d", id);
                printf("\nExperience: %d",yr_of_experience );
                float slry = 200000;
                float bonus = 45.0;
                float tax = 25.0;
                //50% bonus on 1 EID
                int two_eid=slry;

                float opt = (slry + ((slry * bonus) / 100));
                float taxopt = ((opt * tax) / 100);

                mntly_slry = opt - taxopt;
                yrly_slry =( mntly_slry * 12) + two_eid;

                printf("\nMonthly salary: %.2f", mntly_slry);
                printf("\nMonthly Reduced Tax: %.2f", taxopt);                
                printf("\nYearly salary: %.2f", yrly_slry);

                break;
        }
            case 'h':
            case 'e':{
                printf("\nName: %s", name);
                printf("\nId: %d", id);
                printf("\nExperience: %d",yr_of_experience );
                float slry = 100000;
                float bonus = 25.0;
                float tax = 7.0;
                //50% bonus on 1 EID
                int two_eid=slry;

                float opt = (slry + ((slry * bonus) / 100));
                float taxopt = ((opt * tax) / 100);

                mntly_slry = opt - taxopt;
                yrly_slry =( mntly_slry * 12) + two_eid;

                printf("\nMonthly salary: %.2f", mntly_slry);
                printf("\nMonthly Reduced Tax: %.2f", taxopt);                
                printf("\nYearly salary: %.2f", yrly_slry);

                break;
        }
            case 'j':
            case 'k':{
                printf("\nName: %s", name);
                printf("\nId: %d", id);
                printf("\nExperience: %d",yr_of_experience );
                float slry = 50000;
                // float bonus = 25.0;
                // float tax = 7.0;
                //50% bonus on 1 EID
                int two_eid=slry;

                float opt = (slry);


                mntly_slry = opt;
                yrly_slry =( mntly_slry * 12) + two_eid;

                printf("\nMonthly salary: %.2f", mntly_slry);
                printf("\nYearly salary: %.2f", yrly_slry);

        }

    }





    
}
return 0;
}
