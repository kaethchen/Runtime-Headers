@class NSDictionary;

@interface NSUserAutomatorTask : NSUserScriptTask

@property (copy) NSDictionary *variables;

+ (BOOL)isValidScriptFile:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)executeWithInput:(id)a0 completionHandler:(id /* block */)a1;

@end
