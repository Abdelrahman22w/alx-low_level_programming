#ifndef MACRO_H
#define MACRO_H
/**
 * if @x: less than 0 (negative) retun -x else return x
 * @x: input integer or float
 * @ABS(x): return the positive value of x
 */
#define ABS(x) ((x) < 0 ? (-x) : (x))

#endif
