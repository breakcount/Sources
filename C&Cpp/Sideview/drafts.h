long long quick_input[9] = {
  1090801040 ,
  1003006070 ,
  1080032050 ,
  1800040000 ,
  1000000096 ,
  1000100005 ,
  1018000000 ,
  1605094080 ,
  1400300007 ,
} ;
int draft[ 9*9 ] = { 
/*
 * for sideview
 *
 * 1 - un_filled
 * 2 - blank
 * 3 - green
 * 4 - red
 * 5 - light blue
 * 6 - yellow
 * 7 - blue
 * 8 - purple
 */
  
    /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    /*0*9*/0 , 3 , 8 ,/**/ 5 , 6 , 5 ,/**/ 4 , 7 , 0 ,
    /*1*9*/3 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 7 ,
    /*2*9*/7 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 6 ,
    /************************************************/
    /*3*9*/5 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 3 ,
    /*4*9*/4 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 6 ,
    /*5*9*/6 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 8 ,
    /************************************************/
    /*6*9*/7 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 4 ,
    /*7*9*/8 , 1 , 1 ,/**/ 1 , 1 , 1 ,/**/ 1 , 1 , 5 ,
    /*8*9*/0 , 8 , 5 ,/**/ 6 , 4 , 7 ,/**/ 3 , 5 , 0 ,
} ;
// int draft[ 9*9 ] = { // for test
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*1*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*2*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*4*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*5*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*6*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*7*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*8*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // for test
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/1 , 2 , 3 ,/**/ 4 , 5 , 6 ,/**/ 7 , 8 , 9 ,
    // /*1*9*/4 , 5 , 6 ,/**/ 7 , 8 , 9 ,/**/ 1 , 2 , 3 ,
    // /*2*9*/7 , 8 , 9 ,/**/ 1 , 2 , 3 ,/**/ 4 , 5 , 6 ,
    // /************************************************/
    // /*3*9*/2 , 1 , 4 ,/**/ 3 , 6 , 5 ,/**/ 8 , 9 , 7 ,
    // /*4*9*/3 , 6 , 5 ,/**/ 8 , 9 , 7 ,/**/ 2 , 1 , 4 ,
    // /*5*9*/8 , 9 , 7 ,/**/ 2 , 1 , 4 ,/**/ 3 , 6 , 5 ,
    // /************************************************/
    // /*6*9*/5 , 4 , 1 ,/**/ 6 , 3 , 8 ,/**/ 9 , 7 , 2 ,
    // /*7*9*/6 , 3 , 8 ,/**/ 9 , 7 , 2 ,/**/ 5 , 4 , 1 ,
    // /*8*9*/9 , 7 , 2 ,/**/ 5 , 4 , 1 ,/**/ 0 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // World's hardest sudoku by Arto Inkala, interesting( hehe )
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/8 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*1*9*/0 , 0 , 3 ,/**/ 6 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*2*9*/0 , 7 , 0 ,/**/ 0 , 9 , 0 ,/**/ 2 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/0 , 5 , 0 ,/**/ 0 , 0 , 7 ,/**/ 0 , 0 , 0 ,
    // /*4*9*/0 , 0 , 0 ,/**/ 0 , 4 , 5 ,/**/ 7 , 0 , 0 ,
    // /*5*9*/0 , 0 , 0 ,/**/ 1 , 0 , 0 ,/**/ 0 , 3 , 0 ,
    // /************************************************/
    // /*6*9*/0 , 0 , 1 ,/**/ 0 , 0 , 0 ,/**/ 0 , 6 , 8 ,
    // /*7*9*/0 , 0 , 8 ,/**/ 5 , 0 , 0 ,/**/ 0 , 1 , 0 ,
    // /*8*9*/0 , 9 , 0 ,/**/ 0 , 0 , 0 ,/**/ 4 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // 27 elements
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/5 , 2 , 0 ,/**/ 8 , 0 , 0 ,/**/ 0 , 0 , 9 ,
    // /*1*9*/0 , 1 , 0 ,/**/ 0 , 2 , 0 ,/**/ 6 , 0 , 0 ,
    // /*2*9*/0 , 0 , 0 ,/**/ 0 , 0 , 5 ,/**/ 2 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/7 , 0 , 0 ,/**/ 0 , 3 , 2 ,/**/ 0 , 4 , 0 ,
    // /*4*9*/0 , 0 , 4 ,/**/ 0 , 9 , 0 ,/**/ 8 , 0 , 0 ,
    // /*5*9*/0 , 9 , 0 ,/**/ 0 , 1 , 0 ,/**/ 0 , 0 , 3 ,
    // /************************************************/
    // /*6*9*/0 , 0 , 1 ,/**/ 2 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*7*9*/0 , 0 , 9 ,/**/ 0 , 5 , 0 ,/**/ 0 , 6 , 0 ,
    // /*8*9*/4 , 0 , 0 ,/**/ 0 , 0 , 9 ,/**/ 0 , 3 , 0 ,
// } ;
// int draft[ 9*9 ] = { // 23 elements , multiple resolve
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/0 , 0 , 0 ,/**/ 0 , 5 , 7 ,/**/ 0 , 8 , 0 ,
    // /*1*9*/3 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*2*9*/0 , 0 , 2 ,/**/ 9 , 0 , 0 ,/**/ 4 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/2 , 0 , 0 ,/**/ 8 , 0 , 9 ,/**/ 3 , 0 , 0 ,
    // /*4*9*/4 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 7 ,
    // /*5*9*/0 , 0 , 7 ,/**/ 4 , 0 , 6 ,/**/ 0 , 0 , 8 ,
    // /************************************************/
    // /*6*9*/0 , 0 , 6 ,/**/ 0 , 0 , 2 ,/**/ 7 , 0 , 0 ,
    // /*7*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*8*9*/0 , 9 , 0 ,/**/ 3 , 1 , 0 ,/**/ 0 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // 17 elements , take a while to do recursion
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 1 , 0 ,
    // /*1*9*/0 , 0 , 0 ,/**/ 0 , 0 , 2 ,/**/ 0 , 0 , 3 ,
    // /*2*9*/0 , 0 , 0 ,/**/ 4 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 5 , 0 , 0 ,
    // /*4*9*/4 , 0 , 1 ,/**/ 6 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*5*9*/0 , 0 , 7 ,/**/ 1 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*6*9*/0 , 5 , 0 ,/**/ 0 , 0 , 0 ,/**/ 2 , 0 , 0 ,
    // /*7*9*/0 , 0 , 0 ,/**/ 0 , 8 , 0 ,/**/ 0 , 4 , 0 ,
    // /*8*9*/0 , 3 , 0 ,/**/ 9 , 1 , 0 ,/**/ 0 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // 11 elements , multiple resolve
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/1 , 0 , 2 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*1*9*/0 , 0 , 3 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*2*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 4 ,
    // /************************************************/
    // /*3*9*/0 , 4 , 0 ,/**/ 0 , 5 , 0 ,/**/ 0 , 0 , 0 ,
    // /*4*9*/0 , 6 , 0 ,/**/ 0 , 7 , 0 ,/**/ 0 , 0 , 0 ,
    // /*5*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 2 , 0 ,
    // /************************************************/
    // /*6*9*/0 , 8 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*7*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*8*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 8 , 0 , 0 ,
// } ;
// int draft[ 9*9 ] = { // 17 elements , multiple resolve
    // /*    +0  +1  +2      +3  +4  +5      +6  +7  +8
    // /*0*9*/0 , 0 , 0 ,/**/ 8 , 0 , 1 ,/**/ 0 , 0 , 0 ,
    // /*1*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 4 , 3 , 0 ,
    // /*2*9*/5 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*3*9*/0 , 0 , 0 ,/**/ 0 , 7 , 0 ,/**/ 8 , 0 , 0 ,
    // /*4*9*/0 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 1 , 0 , 0 ,
    // /*5*9*/0 , 2 , 0 ,/**/ 0 , 3 , 0 ,/**/ 0 , 0 , 0 ,
    // /************************************************/
    // /*6*9*/6 , 0 , 0 ,/**/ 0 , 0 , 0 ,/**/ 0 , 7 , 5 ,
    // /*7*9*/0 , 0 , 3 ,/**/ 4 , 0 , 0 ,/**/ 0 , 0 , 0 ,
    // /*8*9*/0 , 0 , 0 ,/**/ 2 , 0 , 0 ,/**/ 6 , 0 , 0 ,
// } ;
