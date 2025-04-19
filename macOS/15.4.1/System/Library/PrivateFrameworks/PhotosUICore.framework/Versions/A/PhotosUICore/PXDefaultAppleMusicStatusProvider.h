@class NSError;

@interface PXDefaultAppleMusicStatusProvider : NSObject <PXAppleMusicStatusProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemTCCStatusProvider;
    void /* unknown type, empty encoding */ injectedTCCStatusProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cloudStatusMonitor;
    void /* unknown type, empty encoding */ lockedState;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ observable;

- (id)init;
- (void).cxx_destruct;
- (void)requestStatusForCapability:(long long)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(long long)a0;

@end
