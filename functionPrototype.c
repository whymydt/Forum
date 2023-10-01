#include <stdio.h>
void produceDesignReports()
{
    printf("Produce Design Report Function\n==================\n");
    printf("Generating report...\n");
    printf("Report generated.");
}

void getDesignEntityNames()
{
    printf("Get Design Entity Names Function\n==================\n");
    printf("Design Name : This is my design\n");
    printf("Design entity : design.co.");
}

void collateEntities()
{
    printf("Collate Entities Function\n==================\n");
    printf("Entities collated");
}

void generateReport()
{
    printf("Generate Report Function\n==================\n");
    printf("Generating report...\n");
    printf("Report generated.");
}

int main()
{
    char menu[2];
    printf("Biro Design App\n================\n");
    printf("1. Produce Design Report\n");
    printf("2. Get Design Entity Name\n");
    printf("3. Collate Entities\n");
    printf("4. Generate Report\n");
    printf("--------------------\nChoose menu : ");
    scanf("%c", &menu);getchar();
    if(strcmp(menu, "1") == 0)
    {
        produceDesignReports();
    }else
    if(strcmp(menu, "2") == 0)
    {
        getDesignEntityNames();
    }else
    if(strcmp(menu, "3") == 0)
    {
        collateEntities();
    }else
    if(strcmp(menu, "4") == 0)
    {
        generateReport();
    }else
    {
        printf("Menu unrecognized, exiting program.");
    }
    
    return 0;
}
