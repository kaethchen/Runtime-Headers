@interface NSUserAppleScriptTask : NSUserScriptTask

@property (setter=setParentDefaultTarget:) BOOL isParentDefaultTarget;
@property (setter=setParentDefaultTarget:) BOOL isParentDefaultTarget;

+ (BOOL)isValidScriptFile:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)executeWithAppleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;

@end
