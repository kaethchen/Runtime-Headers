@class NSTimer, PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject

@property (nonatomic) double progress;
@property (retain, nonatomic) NSTimer *statusTimer;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressLock;
@property (nonatomic) long long mockSubstantialProcessingCount;
@property (readonly, nonatomic) PXPeopleProgressDataSource *dataSource;
@property (nonatomic) BOOL monitoringProgress;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) BOOL featureUnlocked;
@property (readonly, nonatomic) BOOL shouldUseInterstitial;
@property (nonatomic) long long processingStatus;

+ (id)_progressFooterQueue;
+ (BOOL)hasSubstantialProcessingRemainingForThreshold:(long long)a0 pendingAssetCount:(long long)a1 allowedAssetCount:(long long)a2 photoLibrary:(id)a3;
+ (BOOL)isFaceProcessingFinishedForPhotoLibrary:(id)a0;
+ (BOOL)progressComplete:(double)a0;
+ (void)shouldCheckProcessedCounts:(BOOL *)a0 hasSubstantialProcessingRemaining:(BOOL *)a1 threshold:(long long)a2 featureUnlocked:(BOOL)a3;
+ (BOOL)shouldCheckProcessedCountsForThreshold:(long long)a0;
+ (id)statusStringForStatus:(long long)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_handleAsyncUpdateIsReadyForAnalysis:(BOOL)a0 processedToAnyVersionProgress:(long long)a1 processedToAnyVersionCount:(long long)a2;
- (BOOL)_hasSubstantialProcessingRemainingForThreshold:(long long)a0 allowMocking:(BOOL)a1;
- (void)_logFaceCounts;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForIsReadyForAnalysis:(BOOL)a0 progress:(double)a1 processCount:(long long)a2;
- (BOOL)debug_ignoreMockingHasSubstantialProcessingRemainingForThreshold:(long long)a0;
- (BOOL)hasSubstantialProcessingRemainingForThreshold:(long long)a0;
- (void)shouldUseProgressFooterWithCompletion:(id /* block */)a0;
- (void)updateProgressWithForce:(BOOL)a0;

@end
