
#include "../include/libip.hpp"


void print_arr_int(uint32_t *arr, uint32_t size)
{
    int i;

    for(i = 0; i < size; i++)
        cout << arr[i]  << " " ;
    cout << endl;

}

int main(void)
{
    uint32_t size;

    size = 0;

    uint32_t *ips  = gnr_range_ip(PRIVATE_1,NULL,NULL,& size);

    if(size)
        print_arr_int(ips, size);

    free(ips);
    
    return(0);
}