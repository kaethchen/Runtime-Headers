@interface TSCEFunction_RANK : TSCEFunctionNode

+ (double)computeRankWithVector:(id)a0 functionSpec:(id)a1 vector:(id)a2 numberToRankValue:(id)a3 rankDescending:(BOOL)a4 returnAverage:(BOOL)a5 outError:(id *)a6;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
