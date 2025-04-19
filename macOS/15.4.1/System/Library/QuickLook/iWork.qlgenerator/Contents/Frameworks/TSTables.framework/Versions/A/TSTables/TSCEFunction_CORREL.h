@interface TSCEFunction_CORREL : TSCEFunctionNode

+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })covarianceWithVector:(id)a0 functionSpec:(id)a1 vector1:(id)a2 vector2:(id)a3 outStdDev:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a4 durationAllowed:(BOOL)a5 isSample:(BOOL)a6 outError:(id *)a7;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
