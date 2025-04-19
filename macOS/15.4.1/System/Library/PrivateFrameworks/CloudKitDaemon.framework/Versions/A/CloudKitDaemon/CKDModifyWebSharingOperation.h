@class NSArray, NSMutableSet, NSMutableDictionary;
@protocol CKDOperationCallbackProxy, CKModifyWebSharingOperationCallbacks;

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;
@property (retain, nonatomic) id<CKModifyWebSharingOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordWebSharedBlock;
@property (copy, nonatomic) id /* block */ recordWebUnsharedBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (struct _PCSIdentityData { } *)_copyShareProtectionFromRecord:(id)a0 error:(id *)a1;
- (void)_fetchRecords;
- (void)_handleRecordFetched:(id)a0 recordID:(id)a1 error:(id)a2;
- (void)_handleRecordSaved:(id)a0 error:(id)a1;
- (void)_saveRecords;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;

@end
