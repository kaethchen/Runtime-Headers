@class NSMutableDictionary, TILinguisticAssetDownloadClient, NSMutableSet;

@interface TIInputModeAssetStatusManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assetStatusMapLock;
}

@property (retain, nonatomic) TILinguisticAssetDownloadClient *client;
@property (retain, nonatomic) NSMutableSet *listeners;
@property (retain, nonatomic) NSMutableDictionary *inputModeToAssetStatusMap;
@property (nonatomic) BOOL usesDummyFileDebugging;
@property (retain, nonatomic) NSMutableSet *debuggingTimers;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)updateAssetStatus:(long long)a0 forInputMode:(id)a1;
- (void)addDebuggingTimerForInputMode:(id)a0 status:(long long)a1 duration:(double)a2;
- (id)addedInputModesForInputModes:(id)a0;
- (long long)assetStatusForInputMode:(id)a0;
- (void)debuggingTimerFired:(id)a0;
- (id)dummyFilePathForInputMode:(id)a0 assetStatus:(long long)a1;
- (id)inputModesCurrentlyInProgressOrAvailable;
- (id)inputModesToRemoveForInputModes:(id)a0;
- (void)lockAccessToAssetStatusMap;
- (id)normalizedInputModesForInputModes:(id)a0;
- (void)refetchStatusForInputModesCurrentlyInProgressOrAvailable;
- (void)startDownloadingAssetsForInputMode:(id)a0;
- (void)startMonitoringAssetUpdateStatusForInputModes:(id)a0;
- (void)startMonitoringAssetUpdateStatusForInputModes:(id)a0 includeExisting:(BOOL)a1;
- (void)unlockAccessToAssetStatusMap;
- (void)updateListenerOnMainThread:(id)a0 status:(long long)a1 inputModeName:(id)a2;

@end
