#include<stdio.h>
#include<stdlib.h>

struct user_name
{
    const char* first;//first name of user
    const char* last;//last name of user
};

const char* get_name(void){
    const char* ptr=NULL;
    ptr=(char*)malloc(10*sizeof(char));
    scanf("%s",ptr);
    return ptr;
}

void input(struct user_name* data){
    data->first = get_name();
    data->last = get_name();
}

void output(struct user_name* data){
    printf("Name of User is : %s %s",data->first,data->last);
}

int main(void){
    struct user_name student;
    input(&student);

    output(&student);

    return 0;
}
