@class NSTask, NSProgress, NSXPCConnection;

@interface NSUserScriptTaskRunner : NSObject <NSUserScriptTaskRunner> {
    NSXPCConnection *_connection;
    NSTask *_task;
    NSProgress *_progress;
}

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (oneway void)executeScript:(id)a0 interpreter:(id)a1 arguments:(id)a2 standardInput:(id)a3 standardOutput:(id)a4 standardError:(id)a5 showingProgress:(BOOL)a6 :(id /* block */)a7;
- (BOOL)isSanitaryArgumentList:(id)a0 forInterpreter:(id)a1;
- (BOOL)isValidScriptPath:(id)a0;

@end
