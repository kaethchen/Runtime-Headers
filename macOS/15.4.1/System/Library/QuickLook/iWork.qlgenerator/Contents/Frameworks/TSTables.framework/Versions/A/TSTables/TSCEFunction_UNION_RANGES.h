@interface TSCEFunction_UNION_RANGES : TSCEFunctionNode

+ (void)determineShapeOfCellList:(const void *)a0 compactUp:(BOOL)a1 outRangeIsContigious:(BOOL *)a2 outRangeIsRectangular:(BOOL *)a3 outRangeIsInOneTable:(BOOL *)a4 outRowWidth:(unsigned long long *)a5;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
