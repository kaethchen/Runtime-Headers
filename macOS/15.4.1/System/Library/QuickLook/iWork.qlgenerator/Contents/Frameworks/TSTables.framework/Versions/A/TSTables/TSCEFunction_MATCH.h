@interface TSCEFunction_MATCH : TSCEFunctionNode

+ (long long)compareValue:(id)a0 functionSpec:(id)a1 left:(id)a2 right:(id)a3 outError:(id *)a4;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
