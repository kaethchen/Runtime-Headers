@interface IMKClientXPCInvocation_Modern : HIRunLoopSemaphore {
    int _timeOutStatus;
    SEL _callerSelector;
    double _timeout;
}

+ (id)invocationWithTimeout:(double)a0 selector:(SEL)a1;

- (double)timeout;

@end
