@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSCarKitUtils : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _carCapabilitiesLock;
}

@property (readonly, nonatomic) NSDictionary *carPlayCapabilitiesDict;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCarPlayConnected;
- (BOOL)_isValidLatencyCorrectionValue:(id)a0;
- (unsigned long long)_delayBecauseCarKitSendsNotificationBeforeCapabilitiesActuallyReady;
- (id)_fetchCarCapabilitiesDict;
- (void)_fetchCarCapabilitiesInBackgroundWithCompletion:(id /* block */)a0;
- (void)_invalidateCachedCarPlayCapabilities;
- (id)_latencyCorrectionSecondsForHeadUnit;
- (void)_recacheCarPlayCapabilitiesWithCompletion:(id /* block */)a0;
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString { } *)a0;
- (void)_updateCarPlayCapabilitiesDict;
- (void)handleCarCapabilitiesUpdatedWithCompletion:(id /* block */)a0;
- (void)handleHeadUnitConnectedWithAsyncCompletion:(id /* block */)a0;
- (BOOL)isBargeInDisabledForConnectedVehicle;
- (id)potentiallyAddHWLatencyToOption:(id)a0 streamHandle:(unsigned long long)a1 voiceController:(id)a2;

@end
