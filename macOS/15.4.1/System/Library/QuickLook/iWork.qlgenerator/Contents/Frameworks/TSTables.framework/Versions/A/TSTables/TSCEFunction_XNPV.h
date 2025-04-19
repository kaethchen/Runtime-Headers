@interface TSCEFunction_XNPV : TSCEFinancialFunctions

+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })computeXNPV:(id)a0 functionSpec:(id)a1 valuesVector:(id)a2 datesVector:(id)a3 firstArgumentIndex:(int)a4 rate:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a5 unit:(unsigned short *)a6 outError:(id *)a7;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
