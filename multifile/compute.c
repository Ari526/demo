/* 
    Add required header files and function defintiions here
    upload this file to submitty
*/
#ifndef COMPLEX_C
#define COMPLEX_C
complex_t c;
complex_t complex_sum(complex_t c1,complex_t c2){
       c = ((complex_t c1) + (complex_t c2));
       return c;
       
}
complex_t complex_difference(complex_t c1, complex_t c2){
      
      return ((complex_t c1) - (complex_t c2));
      

}
complex_t complex_multiply(complex_t c1, complex_t c2){
     
     return ((complex_t c1) * (complex_t c2));
     

}
complex_t complex_divide(complex_t c1, complex_t c2){
      
      return ((complex_t c1) / (complex_t c2));
     

}
#endif

