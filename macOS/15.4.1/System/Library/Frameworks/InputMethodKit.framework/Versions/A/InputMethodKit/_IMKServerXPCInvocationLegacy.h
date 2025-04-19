@class _IPMDServerClientWrapperLegacy, _IMKServerInvocationSentinelLegacy;

@interface _IMKServerXPCInvocationLegacy : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    _IMKServerInvocationSentinelLegacy *_sentinel;
    _IPMDServerClientWrapperLegacy *_clientWrapper;
    BOOL _invocationInterruptAttempted;
    BOOL _otherInnerRunLoopDetected;
    unsigned long long _innerRunLoopCount;
    struct __CFRunLoopObserver { } *_replyObserver;
}

+ (id)invocationWithClientWrapper:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)isMarkedDone;
- (void)markDone;
- (id)sentinel;
- (BOOL)timedOut;
- (id)initWithClientWrapper:(id)a0 selector:(SEL)a1;

@end
