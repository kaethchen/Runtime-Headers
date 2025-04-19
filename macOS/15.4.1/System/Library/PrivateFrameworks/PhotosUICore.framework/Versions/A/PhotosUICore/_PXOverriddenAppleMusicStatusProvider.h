@class NSError, NSDictionary, PXObservable;
@protocol PXAppleMusicStatusProvider;

@interface _PXOverriddenAppleMusicStatusProvider : NSObject <PXAppleMusicStatusProvider> {
    NSDictionary *_overrides;
    id<PXAppleMusicStatusProvider> _subProvider;
}

@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppleMusicStatusProvider:(id)a0 overrides:(id)a1;
- (void)requestStatusForCapability:(long long)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(long long)a0;

@end
