@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue {
    double _probability;
    double _correlation;
    BOOL _useMarkovModel;
    int _reorderGap;
    int _gap;
    int _state;
}

- (void)dealloc;
- (void)push:(id)a0;
- (id)initWithPolicies:(id)a0;
- (BOOL)shouldSendPacketImmediatelyMM;

@end
