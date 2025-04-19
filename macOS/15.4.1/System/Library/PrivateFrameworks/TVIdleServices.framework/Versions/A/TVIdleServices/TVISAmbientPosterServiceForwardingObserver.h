@class NSString;

@interface TVISAmbientPosterServiceForwardingObserver : NSObject <TVISAmbientPosterServiceObserverInterface>

@property (readonly, copy, nonatomic) id /* block */ onSnapshotUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSnapshotUpdateCallback:(id /* block */)a0;
- (void)snapshotDidUpdateWithTraits:(unsigned long long)a0;

@end
