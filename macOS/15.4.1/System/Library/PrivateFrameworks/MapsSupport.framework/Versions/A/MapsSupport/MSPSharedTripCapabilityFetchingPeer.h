@class NSOrderedSet, NSMutableOrderedSet;

@interface MSPSharedTripCapabilityFetchingPeer : MSPSharedTripXPCPeer {
    NSMutableOrderedSet *_requestedHandles;
}

@property (readonly, copy, nonatomic) NSOrderedSet *requestedHandles;

- (void).cxx_destruct;
- (id)_requestedHandles;
- (id)removeRequestedHandles:(id)a0;
- (void)updateRequestedHandles:(id)a0 added:(id *)a1 removed:(id *)a2;

@end
