@class NSMutableDictionary, NSString, NSObject, UAFAssetStatus;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface UAFAssetUtilitiesService : NSObject {
    NSString *_siriLanguage;
    unsigned int _retryCount;
    BOOL _observerEnabled;
    BOOL _completionWatchdogInProgress;
}

@property (nonatomic) BOOL uodAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *statusGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSMutableDictionary *dictationStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getLanguage;
- (void)_stopObserver;
- (void)switchLanguage:(id)a0;
- (unsigned long long)_checkFreeSpaceNeededForLanguage:(id)a0 isDictation:(BOOL)a1;
- (void)_downloadDictationAssetsForLanguage:(id)a0 useCellular:(BOOL)a1;
- (void)_downloadSiriAssetsWithCellular:(BOOL)a0;
- (void)_downloadUnderstandingAssetsForLanguage:(id)a0 useCellular:(BOOL)a1;
- (id)_getDiskSpaceNeededInBytesForLanguage:(id)a0 isDictation:(BOOL)a1 error:(id *)a2;
- (void)_handleDictationCompletionForLanguage:(id)a0;
- (void)_handleDictationProgress:(unsigned long long)a0 status:(unsigned long long)a1 language:(id)a2;
- (void)_handleUpdateProgress:(unsigned long long)a0 status:(unsigned long long)a1 language:(id)a2;
- (BOOL)_isLegacySiriDevice;
- (void)_postAssetStateChangedNotification;
- (void)_siriDownloadCompleteForLanguage:(id)a0;
- (void)_triggerCompletionTimerForLanguage:(id)a0;
- (void)_updateAssetState:(unsigned long long)a0 value:(id)a1 forLanguage:(id)a2;
- (BOOL)_updateDictationAvailabilityForLanguage:(id)a0;
- (void)_updateDictationProgress:(unsigned long long)a0 language:(id)a1;
- (void)_updateDictationState:(unsigned long long)a0 value:(id)a1 forLanguage:(id)a2;
- (void)_updateProgress:(unsigned long long)a0 forLanguage:(id)a1;
- (void)_updateSiriAssetAvailability:(id)a0 forLanguage:(id)a1;
- (void)checkAssetStatus:(id /* block */)a0;
- (void)diskSpaceNeededInBytesForLanguage:(id)a0 forClient:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)downloadDictationAssetsForLanguage:(id)a0;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsOverCellular;
- (void)postAssetNotificationIfNeeded;
- (void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)startObserver;
- (void)updateAssetState:(unsigned long long)a0 value:(id)a1 forLanguage:(id)a2;
- (void)updateSiriAssetAvailabilityForLanguage:(id)a0;
- (void)updateSiriAssetAvailabilityForLanguageSync:(id)a0;
- (void)updateSiriAssetAvailabilityForObserver;

@end
