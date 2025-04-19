@class NSString, BMBFSDeletePropagator, BMComputeTombstonePropagator;

@interface BMStoreStreamPruningBridge : NSObject <BMStreamDatastorePruningDelegate> {
    BMBFSDeletePropagator *_bfsDeletePropagator;
    BMComputeTombstonePropagator *_computeTombstonePropagator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willPruneEvent:(id)a0;
- (void)didPruneEvents;
- (void)didWriteTombstone:(id)a0 timestamp:(double)a1 account:(id)a2 remoteName:(id)a3;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 user:(unsigned int)a2;

@end
