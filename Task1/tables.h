typedef struct FIO{
    char name[50];
    char surname[50];
    char fathersname[50];
}FIO;

typedef struct Job{
    char workplace[50];
    char duty[50];
}Job;

typedef struct Number{
    char number1[20];
    char number2[20];
    char number3[20];
    char number4[20];
    char number5[20];
}Number;

typedef struct Mail{
    char mail1[50];
    char mail2[50];
    char mail3[50];
    char mail4[50];
    char mail5[50];
}Mail;

typedef struct Social{
    char vk[50];
    char tg[50];
    char insta[50];
    char whatsapp[50];
    char fb[50];
}Social;

typedef struct Unite{
    FIO fio;
    Job job;
    Number number;
    Mail mail;
    Social social;
}Unite;