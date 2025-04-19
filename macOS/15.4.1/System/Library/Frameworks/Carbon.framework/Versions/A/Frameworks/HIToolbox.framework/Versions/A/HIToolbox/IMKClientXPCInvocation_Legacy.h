@class IMKClientInvocationSentinel_Legacy;

@interface IMKClientXPCInvocation_Legacy : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    IMKClientInvocationSentinel_Legacy *_sentinel;
    double _timeout;
}

+ (id)invocationWithTimeout:(double)a0 selector:(SEL)a1;

- (void)dealloc;
- (double)timeout;
- (int)performRunRunloopWithTimeLimit:(double)a0;
- (void)handleReplyTimerDidFire:(struct __CFRunLoopTimer { } *)a0;
- (void)handleRunLoopAwaitedMarkedDoneUntilTimeout;
- (void)handleRunLoopMarkedDone;
- (id)initWithTimeout:(double)a0 selector:(SEL)a1;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)isMarkedDone;
- (void)markDone;
- (void)performRunRunLoopEndedWithOther:(int)a0;
- (void)performRunRunLoopEndedWithStopOrFinish:(int)a0;
- (void)restoreRegularRunloop;
- (void)runRunLoopUntilMarkedDoneWithTimeLimit:(double)a0;
- (id)sentinel;
- (BOOL)timedOut;

@end
