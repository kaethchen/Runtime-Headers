@class _MPCLeaseManager;
@protocol MFQueueItemTranslator, MFPlaybackStackController;

@interface MPCLeaseController : NSObject <MFLeaseControlling>

@property (readonly, nonatomic) id<MFQueueItemTranslator> translator;
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager;
@property (weak, nonatomic) id<MFPlaybackStackController> stackController;

- (void).cxx_destruct;
- (void)requestLeaseForItem:(id)a0 completion:(id /* block */)a1;
- (id)initWithTranslator:(id)a0 leaseManager:(id)a1;
- (void)relinquishLeaseForItem:(id)a0 completion:(id /* block */)a1;

@end
