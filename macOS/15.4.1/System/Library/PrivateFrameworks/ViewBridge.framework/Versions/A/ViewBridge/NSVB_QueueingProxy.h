@class NSMutableArray, NSViewServiceMarshal;

@interface NSVB_QueueingProxy : NSVB_TargetedProxy {
    unsigned char _wantsResume : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id /* block */ _shouldSuspendInvocationBlock;
    NSViewServiceMarshal *_connectionClient;
}

+ (id)proxyWithTarget:(id)a0;
+ (id)proxyWithTarget:(id)a0 connectionClient:(id)a1 shouldSuspendInvocationBlock:(id /* block */)a2;

- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)setWantsResume:(BOOL)a0;
- (void)_dispatchSuspendedMessages;
- (void)ifWantsResume:(id /* block */)a0;
- (void)removeAllEnqueuedInvocations;

@end
