/*
==================== DAY 054 ====================
Questions: 1

Each question is a separate function (q1) so both live in one file.
main() runs one of them. Choose with -DQUESTION=n when compiling:
    gcc Day054.c -o day054 -DQUESTION=1
Default is Question 1.
For UPES submission, copy the body of the question you need into a normal main().
==================================================
*/

#include <stdio.h>

/*
Day 054 - Question 1

TODO:
1. Paste the exact question statement from the UPES challenge here.
2. Add the sample input and output.
3. Write your C solution below.
*/
void q1(void)
{
    // Write your solution here.
}

#ifndef QUESTION
#define QUESTION 1
#endif

int main(void)
{
    if (QUESTION == 1)
        q1();

    return 0;
}
