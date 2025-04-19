@class NSError, NSMutableString;

@interface IMShellCommandRunner : NSObject

@property (readonly) NSMutableString *standardErr;
@property (readonly) NSMutableString *standardOut;
@property (readonly) int exitCode;
@property (readonly) NSError *error;

+ (id)runBashScript:(id)a0 args:(id)a1;
+ (id)runCommand:(id)a0 args:(id)a1;

- (void).cxx_destruct;
- (id)stringFromPipe:(id)a0;
- (void)_setStderrOnTask:(id)a0;
- (void)_setStdoutOnTask:(id)a0;
- (void)handleStdoutChanged:(id)a0;
- (void)run:(id)a0 args:(id)a1;

@end
