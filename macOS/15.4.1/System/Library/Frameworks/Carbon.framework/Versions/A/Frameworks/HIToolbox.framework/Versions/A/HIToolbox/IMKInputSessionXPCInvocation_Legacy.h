@class IMKInputSessionInvocationSentinel_Legacy, IMKInputSession_Legacy;

@interface IMKInputSessionXPCInvocation_Legacy : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    BOOL _invocationInterruptAttempted;
    BOOL _otherInnerRunLoopDetected;
    long long _innerRunLoopCount;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    struct __CFRunLoopObserver { } *_replyObserver;
    IMKInputSessionInvocationSentinel_Legacy *_sentinel;
    IMKInputSession_Legacy *_imkInputSession;
}

+ (id)invocationWithSession:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)configureReplyTimerWithTimeout:(double)a0;
- (void)runPrivateRunloopWithTimeLimit:(double)a0;
- (void)teardownInvocationAwaitXPCReply;
- (void)addReplyTimerToRunloop;
- (void)configureObservers;
- (void)handleInvocationAwaitXPCReplyDidTimeout;
- (void)handlePrivateRunloopRunResult:(int)a0;
- (void)handleRunloopObservationWithObserver:(struct __CFRunLoopObserver { } *)a0 activity:(unsigned long long)a1;
- (id)initWithSession:(id)a0 selector:(SEL)a1;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)isMarkedDone;
- (void)markDone;
- (void)runPrivateRunloopWithTimeLimit_0_innerRunLoop0:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_0_innerRunLoop1:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_0_innerRunLoop2:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_0_innerRunLoop3:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_1_innerRunLoop0:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_1_innerRunLoop1:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_1_innerRunLoop2:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_1_innerRunLoop3:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_2_innerRunLoop0:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_2_innerRunLoop1:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_2_innerRunLoop2:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_2_innerRunLoop3:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_3_innerRunLoop0:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_3_innerRunLoop1:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_3_innerRunLoop2:(double)a0;
- (void)runPrivateRunloopWithTimeLimit_3_innerRunLoop3:(double)a0;
- (void)runloopObservedActivityEntry;
- (void)runloopObservedActivityExit;
- (id)sentinel;
- (void)test_surpriseInnerRunloop;
- (BOOL)timedOut;
- (void)verbose_runPrivateRunLoopWithTimeLimit:(double)a0 waitIteration:(int)a1;

@end
