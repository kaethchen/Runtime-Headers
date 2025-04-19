@interface TSCEFunction_PERCENTILE : TSCEFunctionNode

+ (id)computeWithVector:(id)a0 functionSpec:(id)a1 vector:(id)a2 percentile:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 isExclusive:(BOOL)a4 ignoreError:(BOOL)a5;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
