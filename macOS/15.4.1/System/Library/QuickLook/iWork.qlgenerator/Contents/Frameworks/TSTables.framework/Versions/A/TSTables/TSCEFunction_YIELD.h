@interface TSCEFunction_YIELD : TSCEFinancialFunctions

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })solveYieldByNewtonsWithA:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 DSC:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 E:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 M:(int)a3 N:(double)a4 P:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a5 R:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a6 RV:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a7 initial:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a8;

@end
