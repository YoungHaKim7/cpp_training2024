/*----- FILE CALC.HPP ------------------------------------------------*/
/*                                                                    */
/* Header file for CALC.CPP PUSHPOP.CPP READTOKN.CPP                  */
/* a simple calculator                                                */
/*--------------------------------------------------------------------*/
typedef enum toks {
  T_INTEGER,
  T_PLUS,
  T_TIMES,
  T_MINUS,
  T_DIVIDE,
  T_EQUALS,
  T_STOP
} Token;
extern "C" Token read_token(char buf[]);
class IntLink {
private:
  int i;
  IntLink *next;

public:
  IntLink();
  ~IntLink();
  int get_i();
  void set_i(int j);
  IntLink *get_next();
  void set_next(IntLink *d);
};

class IntStack {
private:
  IntLink *top;

public:
  IntStack();
  ~IntStack();
  void push(int);
  int pop();
};