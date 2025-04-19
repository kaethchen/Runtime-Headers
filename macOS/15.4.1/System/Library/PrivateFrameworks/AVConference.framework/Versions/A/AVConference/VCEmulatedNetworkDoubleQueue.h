@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (void)dealloc;
- (void)push:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void)runUntilTime:(double)a0;

@end
