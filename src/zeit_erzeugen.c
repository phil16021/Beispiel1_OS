#include <stdio.h> 
#include <time.h> 

void ausgabe(time_t ttx)
{
    struct tm stx = *localtime(&ttx);
    printf("lokal: %02d.%02d.%d %02d:%02d:%02d\n",
                                        stx.tm_mday, 
                                        stx.tm_mon + 1,     
                                        stx.tm_year + 1900,
                                        stx.tm_hour, 
                                        stx.tm_min, 
                                        stx.tm_sec);
}

int main()
{
    struct tm st;
    time_t tt;

    st.tm_mday = 28; st.tm_mon = 1; st.tm_year = 120;
    st.tm_hour = 16; st.tm_min = 8; st.tm_sec = 28;
    st.tm_isdst = 0;
    tt = mktime(&st);
    ausgabe(tt);

    st.tm_sec += -10;
    st.tm_min += 70;
    st.tm_mday += 1;
    tt = mktime(&st);
    ausgabe(tt);

    return 0;
} 