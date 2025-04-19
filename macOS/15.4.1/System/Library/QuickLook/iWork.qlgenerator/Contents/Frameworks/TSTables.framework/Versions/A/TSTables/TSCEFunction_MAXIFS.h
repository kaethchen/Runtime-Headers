@interface TSCEFunction_MAXIFS : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)extremumIfs:(id)a0 functionSpec:(id)a1 maxVector:(id)a2 criteria:(id)a3 isMax:(BOOL)a4;
+ (unsigned short)functionIndex;

@end
