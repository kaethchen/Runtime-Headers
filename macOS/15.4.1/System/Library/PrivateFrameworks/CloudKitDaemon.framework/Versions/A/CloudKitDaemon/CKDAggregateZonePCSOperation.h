@class NSArray, CKRecordZone, NSMutableDictionary, NSError, CKRecordZoneID, CKDPCSKeySyncCoreAnalytics;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID;
@property BOOL isHandlingRetryableError;
@property (retain) NSError *currentError;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (nonatomic) BOOL needsSynchronizeSigningIdentities;
@property (nonatomic) BOOL didSynchronizeSigningIdentities;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (BOOL)_saveTargetZone;
- (void)_fetchPCSDataForZoneID:(id)a0;
- (void)_fetchZonePCS;
- (void)_handleZoneSavedWithID:(id)a0 responseCode:(id)a1;
- (void)_prepareTargetZonePCS;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_setPermanentFailure;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (void)_synchronizeSigningIdentitiesIfNeeded;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;

@end
