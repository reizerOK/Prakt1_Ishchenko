#include <stdio.h>

int main() {
    int t1, t2, t3;

    printf("Введіть час, за який кожен гість може з'їсти пиріг (t1 t2 t3): ");
    scanf("%d %d %d", &t1, &t2, &t3);

    float total_rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);

    float time = 1.0 / total_rate;

    printf("Час, потрібний для того, щоб всі гості разом з'їли пиріг: %.2f годин\n", time);
    
    return 0;
}
