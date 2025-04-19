@class CWFAssetPowerTable, MAAutoAssetSelector, NSString, MAAutoAsset, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFAssetManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (copy, nonatomic) id /* block */ assetDidChangeHandler;
@property (retain, nonatomic) MAAutoAssetSelector *currentLockedAutoAssetSelector;
@property (retain, nonatomic) MAAutoAsset *currentLockedAutoAsset;
@property (nonatomic) BOOL interestSet;
@property (nonatomic) int notifyTokenVersionDownloaded;
@property (retain, nonatomic) NSString *assetSpecifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicCheckTimer;
@property (nonatomic) BOOL periodicCheckEnabled;
@property (nonatomic) long long periodicityInSecs;
@property (retain, nonatomic) CWFAssetPowerTable *assetPowerTable;

+ (void)endAllPreviousLocksForSpecifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)__periodicCheck;
- (void)_handleAssetChangedNotification;
- (void)_registerForAssetChangedNotification:(id /* block */)a0;
- (void)enablePeriodicCheck;
- (void)lockAndHandOffCanBlock:(BOOL)a0;
- (id)lockAutoAssetWithReason:(id)a0 isBlocking:(BOOL)a1;
- (id)makeAutoAssetWithSelector:(id)a0;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (void)unlockAssetWithReason:(id)a0;

@end
