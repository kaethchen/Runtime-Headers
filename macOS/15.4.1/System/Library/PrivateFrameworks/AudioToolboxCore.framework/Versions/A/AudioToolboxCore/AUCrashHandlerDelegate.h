@class AUCrashHandler;

@interface AUCrashHandlerDelegate : NSObject <AUCrashHandlerCallbackProtocol> {
    AUCrashHandler *weakCrashHandler;
}

- (void).cxx_destruct;
- (id)init:(id)a0;
- (void)notifyCrash:(struct { unsigned int x0[8]; })a0 withCrashInfo:(id)a1;

@end
