@interface WFOutputAction : WFAction

- (unsigned long long)outputBehavior;
- (id)runSource;
- (id)runningContext;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputContentClasses;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)hasOutputFallback;
- (void)finishRunningWithOutput:(id)a0 error:(id)a1;
- (BOOL)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)outputSurfaceIsAvailable;
- (id)outputVariableString;

@end
