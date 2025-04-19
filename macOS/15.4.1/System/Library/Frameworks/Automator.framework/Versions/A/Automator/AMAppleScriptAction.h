@class OSAScript;

@interface AMAppleScriptAction : AMBundleAction

@property (copy, nonatomic) OSAScript *script;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)closed;
- (void)updateParameters;
- (id)resolvedParameters;
- (void)activated;
- (void)willOpen;
- (void)willBecomeActive;
- (void)_closed;
- (id)_emptyInput;
- (void)_executeWithInfo:(id)a0;
- (void)_richTextOutputFromScriptOnMainThreadWithDict:(id)a0;
- (id)executeScript:(id)a0 withParameter:(id)a1 error:(id *)a2;
- (void)opened;
- (void)parametersUpdated;
- (id)richTextOutput;
- (id)runWithInput:(id)a0 error:(id *)a1;

@end
