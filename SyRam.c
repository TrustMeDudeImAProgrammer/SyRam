int main(void) 
{
    struct sysinfo s;

unsigned long long free_kb = (unsigned long long)s.freeram * s.mem_unit / 1024;    
unsigned long long total_kb = (unsigned long long)s.totalram * s.mem_unit / 1024;

    printf("Total %llu kb\n", total_kb/1024.0);    
    printf("Free %llu kb\n", free_kb/1024.0);
return 0;
};
