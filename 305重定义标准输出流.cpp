#include <stdio.h>
#include<Windows.h>
int main() {
    FILE* fp = NULL;
    const char* filename = "output.log";

    fp = freopen(filename, "w+", stdout);       //��׼����ض����ļ�output.log
    if (NULL == fp)
    {
        fprintf(stderr, "error redirecting stdout\n");
        exit(1);
    }
    system("netstat -ano");//��ʾ����
    printf("6666666666666666666");
    fclose(fp);
}
//������system����printfȫ����ʾ�����ļ���