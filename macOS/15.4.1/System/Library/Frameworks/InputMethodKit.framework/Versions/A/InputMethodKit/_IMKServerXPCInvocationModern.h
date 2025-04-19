@class _IPMDServerClientWrapperModern;

@interface _IMKServerXPCInvocationModern : HIRunLoopSemaphore {
    int _timeOutState;
    SEL _callerSelector;
    _IPMDServerClientWrapperModern *_clientWrapper;
}

+ (id)invocationWithClientWrapper:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)timedOut;
- (id)initWithClientWrapper:(id)a0 selector:(SEL)a1;

@end
