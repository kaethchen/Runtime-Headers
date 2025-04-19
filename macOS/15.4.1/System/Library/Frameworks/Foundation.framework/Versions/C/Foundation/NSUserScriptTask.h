@class NSURL, NSXPCConnection, NSFileHandle;

@interface NSUserScriptTask : NSObject {
    NSURL *_scriptURL;
    NSXPCConnection *_connection;
    BOOL _hasExeced;
    BOOL _hasTerminated;
}

@property (retain) NSFileHandle *standardInput;
@property (retain) NSFileHandle *standardOutput;
@property (retain) NSFileHandle *standardError;
@property BOOL showsProgressInMenuBar;
@property BOOL showsProgressInMenuBar;
@property (readonly, copy) NSURL *scriptURL;

+ (id)badFileError:(id)a0;
+ (BOOL)isValidScriptFile:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)executeWithInterpreter:(id)a0 arguments:(id)a1 :(id /* block */)a2;
- (id)interpretErrorStatus:(int)a0 withOutput:(id)a1;

@end
