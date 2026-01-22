#include <stdio.h>

int main(){
    char kata[255];
    scanf("%[^\n]", &kata);

    printf("#include <stdio.h>\n");
    printf("int main()\n{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", kata);
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}

