#include <stdlib.h>
#include <stdio.h>

static int get_num_of_substr(char const *s, char c, int pos)
{
    int cont;

    cont = 0;
    if (s[pos] == '\0')
    {
        cont = 1;
        return (cont);
    }
    else
    {
        while (pos >= 0)
        {
            if (s[pos] == c || s[pos] == '\0')
                cont++;
            pos--;
        }
        cont++;
        return (cont);
    }
}

static void assign_substr_to_ptr(char const *s, char *ptr, int start, int end)
{
    int cont;

    cont = 0;
    while (start < end)
    {
        ptr[cont] = s[start];
        start++;
        cont++;
    }
    ptr[cont] = '\0';
//    printf("Substr: %s\n", ptr);
}

static void split_substrs(char const *s, char del, char **ptr, int len)
{
    int start;
    int end;
    int cont;
    int pos;
    int size;

/*    ptr[0] = "split 1";
    ptr[1] = "split 2";
    ptr[2] = "split 3";
    printf("%s\n", ptr[0]);
    printf("%s\n", ptr[1]);
    printf("%s\n", ptr[2]);*/

    pos = 0;
    cont = 0;
    start = 0;
    end = 0;
    while (pos <= len)
    {
        if (s[pos] == del || s[pos] == '\0')
        {
            size = end - start;
            ptr[cont] = malloc((size + 1) * sizeof(char));
            assign_substr_to_ptr(s, ptr[cont], start, end);
            cont++;
            start = end + 1;
        }
        end++;
        pos++;
    }
    ptr[cont] = NULL;
/*    printf("%s\n", ptr[0]);
    printf("%s\n", ptr[1]);
    printf("%s\n", ptr[2]);*/
}

char **ft_split(char const *s, char c)
{
    int num_sub_strs;
    int s_len;
    char **ptr_arrays;

    //obtenemos longitud del string
    //SUSTITUIR con ft_strlen
    s_len = 0;
    while (s[s_len] != '\0')
        s_len++;

    //obtener numero de substrings para reservar
    //malloc del puntero principal
    //+1 para un puntero NULL
    num_sub_strs = get_num_of_substr(s, c, s_len);
    ptr_arrays = malloc(num_sub_strs * sizeof(char *));

    //recorremos el string, separando substrings
    //y asignadolo en los distintos espacios del
    //ptr de arrays
    split_substrs(s, c, ptr_arrays, s_len);
/*    ptr_arrays[0] = "test1";
    ptr_arrays[1] = "edorta";
    ptr_arrays[2] = "paco";
    printf("%s\n", ptr_arrays[0]);
    printf("%s\n", ptr_arrays[1]);
    printf("%s\n", ptr_arrays[2]);
*/
    //retornamos el puntero de arrays
    return (ptr_arrays);
}

int main(void)
{
    char c;
    char **ptr;

    c = ',';
    ptr = ft_split("f1,f2,f3", c);
    return (0);
}