#include <iostream>
#include <cmath>

#define f1(x,y,z) (85-6*y+z)/27
#define f2(x,y,z) (72-6*x-3*z)/15
#define f3(x,y,z) (110-x-y)/54

int main(){
    float e, x=0, y=0, z=0, x_new, y_new, z_new;
    int step=1;
    std::cin >> e;

    do{
        x_new = f1(x,y,z);
        y_new = f2(x,y,z);
        z_new = f3(x,y,z);

        std::cout<< step++ << "\t" << x_new << "\t" << y_new << "\t" << z_new << std::endl;

        if (std::abs(x_new-x) < e && std::abs(y_new-y) < e && std::abs(z_new-z) < e)
            break;

        x = x_new;
        y = y_new;
        z = z_new;
    } while(true);

    std::cout << "\nSolution: x = " << x_new << ", y = " << y_new << ", z = " << z_new << std::endl;
    return 0;
}
