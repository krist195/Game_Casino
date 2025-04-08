#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void  winOrNot(int Answer, int current){
    if(Answer == current){
        printf("WIN 777!\n");
    }else{printf("not today\n");}
}


int get_random_not_equal(int last){
    int num;
    do {
        num = 1 + rand() % 6;
    } while (num == last); 
    return num;
}

int main(){
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    int prev = 0;
    int Answer;
    char NextGame;

    do{
        int current = get_random_not_equal(prev);
        printf("    _         _         _         _        _         _\n");
        printf("   / \\       / \\       / \\       / \\      / \\       / \\ \n");
        printf("  /___\\     /___\\     /___\\     /___\\    /___\\     /___\\\n");
        printf("    1         2         3         4        5         6\n");
        printf("Answer: ");
        scanf("%d", &Answer);
        winOrNot(Answer, current);
        printf("Next try? (Press Enter for next game & any for quit) ...  ");
        getchar();
        scanf("%c", &NextGame);
    } while (NextGame == '\n');

//  до тех пор пока не выиграешь(для проверки)

    return 0;
}





    //    _         _         _         _        _         _
    //   / \       / \       / \       / \      / \       / \
    //  /___\     /___\     /___\     /___\    /___\     /___\
    //    1         2         3         4        5         6