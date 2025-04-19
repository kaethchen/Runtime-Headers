@class IMKInputSession_Modern;

@interface IMKInputSessionXPCInvocation_Modern : HIRunLoopSemaphore {
    int _timeoutStatus;
    SEL _callerSelector;
    IMKInputSession_Modern *_imkInputSession;
}

+ (id)invocationWithSession:(id)a0 selector:(SEL)a1;

- (void)dealloc;

@end
