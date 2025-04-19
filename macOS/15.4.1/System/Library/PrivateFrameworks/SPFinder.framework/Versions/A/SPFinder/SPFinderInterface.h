@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (void).cxx_destruct;
- (id)stateManager;
- (id)beaconPayloadCache;
- (id)finderStateManager;

@end
