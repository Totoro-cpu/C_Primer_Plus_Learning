#include <stdio.h>
#include <string.h>
union Data
{
    // �����a��b�ĳ��ȷֱ�Ϊ4��13������union Data�ĳ���Ϊ16
    // ԭ������Ҫ�ڳ�Ա����������һ�����ģ�����������Ҫ�����ڴ����
    // ������Ҫ��a��b����Ϊa�ĳ��ȵ�����������Ϊintռ4���ֽڣ�char�������1�ֽڲ��ÿ��Ƕ���
    int a;
    char b[13];
};

int main()
{
    union Data data;
    printf("The length of union Data is %d\n", sizeof(data));
    return 0;
}
