@interface TSCEFunction_TDIST : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;
+ (double)probabilityWithX:(double)a0 V:(int)a1 tails:(double)a2;

@end
