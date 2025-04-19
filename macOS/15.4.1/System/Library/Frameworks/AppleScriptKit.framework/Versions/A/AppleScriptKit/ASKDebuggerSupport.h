@interface ASKDebuggerSupport : NSObject {
    BOOL _isDebugging;
    BOOL _isDebuggerReady;
    int _pid;
}

+ (id)sharedDebuggerSupport;

- (id)init;
- (int)pid;
- (BOOL)isDebugging;
- (void)setPid:(int)a0;
- (BOOL)isDebuggerReady;
- (void)setIsDebugging:(BOOL)a0;
- (void)checkForDebugger;
- (void)handleContinueAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)notifyDebugger;
- (void)processEvents;
- (void)registerForContinueEvent;
- (id)sendEvent:(id)a0 sendMode:(int)a1;
- (void)setIsDebuggerReady:(BOOL)a0;

@end
