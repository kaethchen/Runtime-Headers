@class NSLock, NSVB_ViewServiceReplyControlTrampoline, NSVB_ViewServiceReplyAwaitingTrampoline;

@interface NSVB_ViewServiceReplyControlProxy : NSObject <NSVB_ViewServiceProxy_ReplyControl> {
    id _target;
    NSVB_ViewServiceReplyControlTrampoline *_controlTrampoline;
    NSVB_ViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)a0;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)_awaitingReply;
- (id)_deliveringRepliesAsynchronously;

@end
