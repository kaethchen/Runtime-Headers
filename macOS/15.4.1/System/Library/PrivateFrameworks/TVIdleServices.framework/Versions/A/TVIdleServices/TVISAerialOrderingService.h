@class TVISAerialServiceConfiguration, NSArray, TVISIndexSetMuxer, NSObject, TVISAerialStore;
@protocol OS_dispatch_queue;

@interface TVISAerialOrderingService : NSObject

@property (readonly, nonatomic) TVISAerialServiceConfiguration *configuration;
@property (readonly, nonatomic) TVISAerialStore *store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ;
@property (readonly, nonatomic) NSArray *sortedAssetIDs;
@property (readonly, nonatomic) TVISIndexSetMuxer *indexSetMuxer;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 store:(id)a1;
- (BOOL)_orderNeedsUpdate;
- (void)_setUpWithCurrentAssetStore;
- (id)_synchronouslyFindOptimalPlayOrder;
- (void)updatePlayOrderIfNeededWithCompletion:(id /* block */)a0;

@end
