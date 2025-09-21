// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE*fp;
    char filename[100];
    char data[500];
    int choice;
    
    printf("Enter filename (with extension):");
    scanf("%s",filename);
    getchar();
    //clear newline from buffer
    
    printf("\nChoose an option:\n");
    printf("1.Read file\n");
    printf("2.write file(overwrite)\n");
    printf("3.Append to file");
    printf("Enter choice");
    scanf("%d",&choice);
    getchar();
    //clear newline
    
    switch(choice){
        case 1://Read
        fp=fopen(filename,"r");
        if(fp==NULL){
            printf("ERROR: could not open file for reading!\n");
            return 1;
        }
        printf("\n-File contents-\n");
        while(fgets(data,sizeof(data),fp)!=NULL)
        {
            printf("%s",data);
        }
        fclose(fp);
        break;
        
        case 2://write(overwrite)
        fp=fopen(filename,"w");
        if(fp==NULL){
          printf("ERROR: could not open the file for write!\n");
          return 1;
        }
    printf("Enter text to write (overwrites existing content):\n");
        fgets(data,sizeof(data),stdin);
        fputs(data,fp);
        fclose(fp);
        printf("data written successfully.\n");
        break;
        
        case 3://Append
        fp=fopen(filename,"a");
        if(fp==NULL){
            printf("ERROR: could not open file for appending!\n");
            fgets(data,sizeof(data),stdin);
            fputs(data,fp);
            fclose(fp);
            printf("Data appended successfully.\n");
            break;
            default:
            printf("invalid choice!\n");
        }
        return 0;
    }
    
    return 0;
}
