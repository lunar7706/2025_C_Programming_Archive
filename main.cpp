#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct StringArray
{
    char* s[1000];
    int count;
};

void FreeStringArray(struct StringArray* ps)
{
    for (int i = 0; i < ps->count; ++i)
        free(ps->s[i]);
}

void printmenu()
{
    printf("\n1. 문자열 입력\n");
    printf("2. 문자열 출력\n");
    printf("3. 문자열 검색\n");
    printf("4. 문자열 삭제\n");
    printf("0. 프로그램 종료\n");
}

int main()
{
    char buf[1000];
    struct StringArray sa = { { NULL }, 0 };
    int run = 1;

    while (run)
    {
        printmenu();

        printf("선택 메뉴 : ");
        char c = _getch();
        printf("%c\n", c); // 사용자가 뭘 눌렀는지 보여주기

        switch (c)
        {
        case '1':
            printf("문자열 입력: ");
            gets_s(buf, 1000);
            if (strcmp("exit", buf) == 0)
                break;

            sa.s[sa.count] = (char*)malloc(strlen(buf) + 1);
            strcpy(sa.s[sa.count], buf);
            ++sa.count;
            break;

        case '2':
            printf("\n[저장된 문자열 목록]\n");
            for (int i = 0; i < sa.count; ++i)
                printf("%d: %s\n", i, sa.s[i]);
            break;

        case '3':
        {
            printf("검색할 문자열 입력: ");
            gets_s(buf, 1000);
            int found = 0;
            for (int i = 0; i < sa.count; ++i)
            {
                if (strcmp(sa.s[i], buf) == 0)
                {
                    printf("찾은 문자열은 %d번 인덱스에 존재!\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("문자열을 찾을 수 없습니다.\n");
            break;
        }

        case '4':
        {
            printf("삭제할 문자열 입력: ");
            gets_s(buf, 1000);
            int found = 0;
            for (int i = 0; i < sa.count; ++i)
            {
                if (strcmp(sa.s[i], buf) == 0)
                {
                    free(sa.s[i]);
                    for (int j = i; j < sa.count - 1; ++j)
                        sa.s[j] = sa.s[j + 1];
                    sa.s[sa.count - 1] = NULL;
                    --sa.count;
                    printf("문자열 삭제 완료!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("문자열을 찾을 수 없습니다.\n");
            break;
        }

        case '0':
            run = 0;
            break;

        default:
            printf("잘못된 입력입니다.\n");
        }
    }

    FreeStringArray(&sa);
    printf("\n프로그램 종료. 메모리 해제 완료.\n");
    return 0;
}

