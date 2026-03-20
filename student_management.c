#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;
    int choice;

    while(1) {
        printf("\n1.Add Student\n2.Display Students\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen("student.txt", "a");
                printf("Enter ID Name Marks: ");
                scanf("%d %s %f", &s.id, s.name, &s.marks);
                fwrite(&s, sizeof(s), 1, fp);
                fclose(fp);
                break;

            case 2:
                fp = fopen("student.txt", "r");
                printf("\nRecords:\n");
                while(fread(&s, sizeof(s), 1, fp))
                    printf("%d %s %.2f\n", s.id, s.name, s.marks);
                fclose(fp);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}