@interface TSCEFunction_LCM : TSCEFunctionNode

+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })LCMFunction:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 number2:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
