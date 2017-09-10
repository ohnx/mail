#ifndef __MAIL_H_INC
#define __MAIL_H_INC

/* max length of an email (in bytes) - default is 10 MiB (10485760 B) */
#define MAIL_MAX_DATA_C      10485760

struct mail {
    int from_c;
    char *from_v;
    int to_c
    char *to_v; /* null-separated array of to email addresses */
    int data_c;
    char *data_v;
};

void mail_new(mail_internal)
void mail_serialize(mail_internal *email);

#endif /* __MAIL_H_INC */