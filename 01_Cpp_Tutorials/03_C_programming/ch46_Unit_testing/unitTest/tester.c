#define _GNU_SOURCE /* get strsignal def */

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

#include "tester.h"

struct tester_global_data TesterData;

const char *testerStrsignal(int sig) { return strsignal(sig); }

static void tester_sighandler(int signal) {
  if (TesterData.escape_hatch_active) {
    TesterData.escape_hatch_active = 0;
    longjmp(TesterData.escape_hatch, signal);
  }
}

void testerInit(void)