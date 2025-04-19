@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueue;
}

- (void)dealloc;
- (void)push:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void)runUntilTime:(double)a0;

@end
