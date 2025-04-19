@class NSFileHandle;

@interface NSUserUnixTask : NSUserScriptTask

@property (retain) NSFileHandle *standardInput;
@property (retain) NSFileHandle *standardOutput;
@property (retain) NSFileHandle *standardError;

+ (BOOL)isValidScriptFile:(id)a0 error:(id *)a1;

- (void)executeWithArguments:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;

@end
