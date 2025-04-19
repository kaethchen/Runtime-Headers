@interface TSCEFunctionNode : NSObject

+ (id)functionName;
+ (void)collectAndApplyWarnings:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 result:(id)a3;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateWithArrayModeFanout:(id)a0 numArgs:(unsigned long long)a1;
+ (unsigned short)functionIndex;
+ (id)functionSpec;
+ (id)vectorCriterionPairsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2 dimensions:(struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })a3 skipFirst:(BOOL)a4 skipLast:(BOOL)a5 outError:(id *)a6;

@end
