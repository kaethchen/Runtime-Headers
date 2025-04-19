@interface PLAutoBugCapture : NSObject

+ (id)_actionDictionaryWithLogArchive:(BOOL)a0 networkInfo:(BOOL)a1 crashAndSpinLogs:(BOOL)a2 diagnosticExtensions:(BOOL)a3;
+ (id)_bucketCountDescriptionForCount:(long long)a0 policy:(unsigned long long)a1;
+ (void)_captureSnapshotWithType:(id)a0 subType:(id)a1 subtypeContextBase:(id)a2 subtypeContextModifier:(id)a3 triggerThresholdValues:(id)a4 events:(id)a5 actions:(id)a6 completion:(id /* block */)a7;
+ (void)_captureSpotlightClientHandlerReindexItemsWithCountDescription:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
+ (id)_countEventWithName:(id)a0 result:(id)a1;
+ (id)_eventWithName:(id)a0 result:(id)a1;
+ (id)_eventWithName:(id)a0 result:(id)a1 count:(id)a2;
+ (void)_registerCompletedReportForType:(id)a0 subType:(id)a1 subtypeContextBase:(id)a2 success:(BOOL)a3;
+ (id)_sThrottleLock_untilDates;
+ (BOOL)_shouldThrottleReportForType:(id)a0 subType:(id)a1 subtypeContextBase:(id)a2;
+ (void)captureSpotlightClientHandlerReindexAllItemsWithReason:(id)a0 completion:(id /* block */)a1;
+ (void)captureSpotlightClientHandlerReindexItemsWithIdentifiers:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
+ (void)captureSpotlightClientStateMissingSnapshotWithSpotlightAssetCountResult:(id)a0 searchIndexingEvents:(id)a1 completion:(id /* block */)a2;

@end
