@class NSString, NSObject;
@protocol OS_os_log;

@interface PXDeviceVolumeController : PXVolumeController <PXSettingsKeyObserver> {
    NSObject<OS_os_log> *_log;
    float _lastKnownVolume;
}

@property (class, readonly, nonatomic) PXDeviceVolumeController *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_handleSystemVolumeChange:(id)a0;
- (id)_initAsSharedInstance;
- (id)initWithIsInSilentMode:(BOOL)a0;

@end
