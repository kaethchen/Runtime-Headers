@interface TSCEFunction_POLYNOMIAL : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluatePolynomial:(id)a0 functionSpec:(id)a1 xDecimal:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 coefficients:(id)a3 argumentIndex:(int)a4 outError:(id *)a5;
+ (unsigned short)functionIndex;

@end
