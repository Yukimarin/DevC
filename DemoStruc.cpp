#include <stdio.h>
#include <string.h>

struct Dish{
    int id;
    char name[100];
    float price;
};
 typedef struct Dish dish;

 void printMenu(dish menu[], int size)
 {
     printf("\n\t\tMenu\n");
     for(int i=0;i<size;++i)
     {
         printf("%d. %s. %.2f\n", menu[i].id, menu[i].name, menu[i].price);
     }
 }
 void addMenu(dish menu[], int *size, int pos)
 {
     if (pos < 0 || pos > *size)
     {
         printf("Vi tri chen khong hop le.\n");
         return;
     }
     dish newDish;
     newDish.id = *size + 1;
     printf("Nhap ten mon an: ");
     getchar(); 
     fgets(newDish.name, sizeof(newDish.name), stdin);
     newDish.name[strcspn(newDish.name, "\n")] = '\0';
     printf("Nhap gia mon an: ");
     scanf("%f", &newDish.price);
     for (int i = *size; i > pos; --i)
     {
         menu[i] = menu[i - 1];
     }
     menu[pos] = newDish;
     (*size)++;
 }
 void editDish(dish menu[], int size, int pos)
 {
     if (pos < 0 || pos > size)
     {
         printf("Vi tri chen khong hop le.\n");
         return;
     }
     printf("Nhap ten mon an moi: ");
     getchar();
     fgets(menu[pos].name, sizeof(menu[pos].name), stdin);
     menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0';
     printf("Nhap gia mon an moi: ");
     scanf("%f", &menu[pos].price);
 }
 void deleteDish(dish menu[], int *size, int pos)
 {
     if (pos < 0 || pos >= *size)
     {
         printf("Vi tri chen khong hop le.\n");
         return;
     }
     for(int i=pos-1;i<*size-1;++i)
     {
         menu[i]=menu[i+1];
     }
     (*size)--;
 }
 void sortDescending(dish menu[], int size)
 {
     for(int i=0;i<size-1;++i)
     {
         for(int j=i+1;j<size;++j)
         {
             if(menu[i].price<menu[j].price)
                 dish tmp=menu[i];
                 menu[i]=menu[j];
                 menu[j]=tmp;
         }
     }
 }
void sortAscending(struct Dish menu[], int size)
{
    for(int i=0;i<size-1;++i)
    {
        for(int j=i+1;j<size;++j)
        {
            if(menu[i].price>menu[j].price)
                Dish tmp=menu[i];
                menu[i]=menu[j];
                menu[j]=tmp;
        }
    }
}
int main()
{
    Dish menu[100]={
        {1,"Pho", 50.0},
        {2,"Com rang", 35.0},
        {3,"Banh cuon", 40.0},
        {4,"Cut chien lac pho mai",50.0},
        {5,"Cut lon", 25.0}
    };
    int choice, sizeOfMenu=5, pos;
    char tmp;
    while(1)
    {
        printf("\nMENU:\n");
        printf("1. In ra gia tri cac phan tu trong menu\n");
        printf("2. Them mot phan tu vao vi tri chi dinh\n");
        printf("3. Sua mot phan tu o vi tri chi dinh\n");
        printf("4. Xoa mot phan tu o vi tri chi dinh\n");
        printf("5. Sap xep cac phan tu\n");
        printf("6. Tim kiem phan tu theo name\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printMenu(menu, sizeOfMenu);
                break;
            case 2:
                printf("Nhap vi tri can chen (1 - %d): ", sizeOfMenu);
                scanf("%d", &pos);
                addMenu(menu, &sizeOfMenu, pos);
                break;
            case 3:
                printf("Nhap vi tri can sua (1 - %d): ", sizeOfMenu);
                scanf("%d", &pos);
                editDish(menu, sizeOfMenu, pos);
                break;
            case 4:
                printf("Nhap vao vi tri can xoa: ");
                scanf("%d", &pos);
                deleteDish(menu,&sizeOfMenu, pos);
                break;
            case 5:
                printf("a. Giam dan theo price\nb. Tang dan theo price");
                printf("\nNhap lua chon: ");
                scanf("%c", &tmp);
                if(tmp=='a')
                    sortDescending(menu,size);
                else(tmp=='b')
                    sortAscending(menu,size);
                    
        }
    }
}
