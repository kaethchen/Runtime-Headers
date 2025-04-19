@class NSMutableDictionary;

@interface MAMusicHapticsManager : NSObject

@property (class, readonly, nonatomic) MAMusicHapticsManager *sharedManager;

@property (retain, nonatomic) NSMutableDictionary *statusObservers;
@property (retain, nonatomic) NSMutableDictionary *ahapAvailableObservers;
@property (retain, nonatomic) NSMutableDictionary *pendingAvailableObservers;
@property (retain, nonatomic) NSMutableDictionary *appSupportedObservers;
@property (nonatomic) BOOL treatCodesAsAdamIDs;
@property (nonatomic) BOOL musicHapticsActive;
@property (retain, nonatomic) NSMutableDictionary *ahapAvailableCache;
@property (retain, nonatomic) NSMutableDictionary *appSupportsCache;
@property (readonly, nonatomic) BOOL isActive;

+ (BOOL)musicHapticsEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_clearAHAPCache;
- (id)_serviceName;
- (id)addStatusObserver:(id /* block */)a0;
- (id)addStatusObserverBlock:(id /* block */)a0;
- (void)appSupportsMusicHaptics:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkHapticTrackAvailabilityForMediaMatchingCode:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)musicHapticsEnabled;
- (void)removeStatusObserver:(id)a0;
- (void)removeStatusObserverBlock:(id)a0;

@end
