#ifndef MTB_H_INCLUDED
#define MTB_H_INCLUDED
#include<time.h>
typedef struct user{
char userid[100];
char username[100];
char password[100];
char usertype[100];
char question_id[100];
char hint_answer[100];
char mobile_number[11];
}user;

typedef struct question{
   char question_id[100];
   char question[100];
}question;

typedef struct seat{
   int seat_number;
   int seat_is_booked;
}seat;
typedef struct movie{
char theater_id[100];
char movie_id[100];
char movie_name[100];
int first_block_price;
int second_block_price;
int third_block_price;
struct tm show_date;
seat seats[100];
}movie;

typedef struct theater{
char theater_id[100];
char theater_name[100];
int is_booked;
}theater;

typedef struct ticket{
  char ticket_id[100];
  char theater_id[100];
  char movie_id[100];
  struct tm show_date;
  int seat_number;
  char user_id[100];
}ticket;

// Screen Decoration Functions
void print_char(char,int,int,int);
void print_title(char*,int,int,int);
void print_title_in_middle(char*,int,int);
void print_basic_screen();

//Input / Validation Functions
void input_password(user*,int,int);
int is_valid_integer(char *);
void get_string(char *,int);
void get_password(char*,unsigned int);
char * get_mobile_number(int,int);

void add_questions();
void set_master_admin();
user * get_user_details(char *);
void create_user(char *);
user * get_credentials(char *);
int check_user_details(user*);
void forget_credential(char*);
char * get_question_id();
int check_mobile_number_in_records(char*);
user * login(char*);
void add_questions();
void get_integer(int *);
int enter_login_choice();
int enter_choice(user*);

void  add_movie();
void show_movie();
void show_my_profile(user *);
void change_password(user *);
void booking(user *);
//assignments
int delete_movie();
void change_contact_details(user*);
void change_security_question(user *);
void show_booking_of_user(user *);
void cancel_booking_of_user(user *);
int delete_my_account(user *);

//admin choices
void add_theater();
void show_theater();
//deleting theater,movie,bookings
int delete_theater();
char * get_theater_id(int);

#endif // MTB_H_INCLUDED
