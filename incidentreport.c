#include <stdio.h>

int main() {
    char incidentID[50];
    char analystName[100];
    int affectedSystems;
    float recoveryCostPerSystem, totalRecoveryCost, downtimeHours;

    // Input Section
    printf("Enter Incident ID: ");
    scanf("%49s", incidentID);

    printf("Enter Analyst Name: ");
    scanf(" %99[^\n]", analystName);

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affectedSystems);

    printf("Enter Estimated Recovery Cost per System: ");
    scanf("%f", &recoveryCostPerSystem);

    printf("Enter Downtime in Hours: ");
    scanf("%f", &downtimeHours);
    totalRecoveryCost = affectedSystems * recoveryCostPerSystem;
    printf("%-17s: %s\n", "Incident ID", incidentID);
    printf("%-17s: %s\n", "Analyst", analystName);
    printf("%-17s: %d\n", "Affected Systems", affectedSystems);
    printf("%-17s: %.2f\n", "Recovery Cost", recoveryCostPerSystem);
    printf("%-17s: %.2f\n", "Total Cost", totalRecoveryCost);
    printf("%-17s: %.2f hours\n", "Downtime", downtimeHours);

    return 0;
}