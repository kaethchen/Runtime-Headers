@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)_defaultDistributionQueue;
- (void)_distributeAsyncDispatchSelector:(SEL)a0 to:(id)a1 distributionBlock:(id /* block */)a2;
- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (void)flushMessagesAndNotify:(id /* block */)a0;

@end
