@interface WFURLStringParameterState : WFVariableStringParameterState

+ (Class)processingValueClass;
+ (id)forceStringToURL:(id)a0 error:(id *)a1;

- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
