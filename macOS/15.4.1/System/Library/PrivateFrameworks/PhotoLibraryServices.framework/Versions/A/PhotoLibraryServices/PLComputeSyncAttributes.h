@class NSString, PLManagedAsset, NSDate;

@interface PLComputeSyncAttributes : PLManagedObject

@property (copy, nonatomic) NSString *cloudComputeStateVersion;
@property (copy, nonatomic) NSString *cloudComputeStateAdjustmentFingerprint;
@property (copy, nonatomic) NSDate *cloudComputeStateLastUpdatedDate;
@property (nonatomic) short localAnalysisMajorVersion;
@property (nonatomic) short localAnalysisStage;
@property (nonatomic) unsigned long long localAnalysisStageHistory;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;
+ (void)updateLocalComputeSyncStageAfterProcessingForAsset:(id)a0 stage:(short)a1;
+ (id)_computeSyncAttributesForAsset:(id)a0;
+ (BOOL)resetLocalComputeSyncAttributesForAsset:(id)a0;
+ (BOOL)updateCloudComputeSyncAttributesForAsset:(id)a0 cloudVersion:(id)a1 cloudAdjustmentFingerprint:(id)a2 cloudLastUpdatedDate:(id)a3;
+ (BOOL)updateLocalComputeSyncAttributesForAsset:(id)a0 cloudRecordComputeState:(id)a1 originatedFromPrefetch:(BOOL)a2;

- (void)_updateLocalAnalysisStageHistoryWithStage:(short)a0 changeSource:(short)a1;
- (BOOL)hasValidLocalProperties;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;

@end
