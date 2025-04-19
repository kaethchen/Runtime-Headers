@interface TSCEFunction_WORKDAY : TSCEFunctionNode

+ (id)dateByAddingNumberOfDaysExcludingWeekends:(id)a0 numDays:(int)a1 components:(id)a2;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;

@end
