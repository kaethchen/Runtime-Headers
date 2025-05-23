@class NSMutableDictionary, NSMapTable, HMBCloudDatabase, HMBCloudZoneID, HMBLocalZone, NAFuture, HMBCloudZoneConfiguration, HMBCloudZoneShareModel, HMBModelContainer, NSSet, CKDatabase, NSString, NSMutableSet, NSOperationQueue, NSArray, NSUUID;
@protocol HMBLocalZoneID, NAScheduler, HMBCloudZoneDelegate, HMBCloudZoneRebuilder;

@interface HMBCloudZone : HMFObject <HMFLogging, HMBMirrorProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly, nonatomic) long long keyStatus;
@property (readonly, nonatomic) NAFuture *waitForPendingRebuild;
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;
@property (readonly) BOOL hasPerformedInitialFetch;
@property (readonly, copy) NSSet *subscriptions;
@property (readonly, nonatomic) NSSet *participants;
@property (readonly, nonatomic) CKDatabase *database;
@property (weak, nonatomic) HMBCloudDatabase *cloudDatabase;
@property (weak, nonatomic) HMBLocalZone *stateZone;
@property (readonly, nonatomic) NSUUID *stateModelID;
@property (nonatomic) BOOL hasStartedUp;
@property (readonly, nonatomic) NSMapTable *modelClassToRequiresPostProcessingMap;
@property (readonly, nonatomic) NSMutableDictionary *inProgressPushFuturesByOutputBlockRow;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NAFuture *shutdownFuture;
@property (retain, nonatomic) NAFuture *destroyFuture;
@property (retain, nonatomic) id<HMBCloudZoneRebuilder> rebuilder;
@property (readonly, nonatomic) id<NAScheduler> operationScheduler;
@property (readonly, nonatomic) NSOperationQueue *recordOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *shareOperationQueue;
@property (retain) NAFuture *queuedCloudPullFuture;
@property (retain) NSMutableSet *queuedFetchRecordsContexts;
@property (retain) HMBCloudZoneShareModel *shareModel;
@property (readonly, nonatomic) NSMutableDictionary *shareParticipantModelsByClientIdentifier;
@property (readonly) HMBModelContainer *modelContainer;
@property (retain, nonatomic) NSArray *defaultDesiredKeys;
@property (weak, nonatomic) id<HMBCloudZoneDelegate> delegate;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (readonly, copy, nonatomic) HMBCloudZoneConfiguration *configuration;
@property (weak, nonatomic) HMBLocalZone *localZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HMBLocalZoneID> zoneID;
@property (readonly, nonatomic) NAFuture *startUp;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)destroy;
- (id)flush;
- (id)shutdown;
- (void)rebuild;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)createZoneState;
- (id)decodeManateeCloudFromRecord:(id)a0 externalRecordFields:(id)a1 source:(unsigned long long)a2 error:(id *)a3;
- (id)_addShareOperationAfterStartupWithName:(id)a0 block:(id /* block */)a1;
- (id)_addShareOperationWithName:(id)a0 block:(id /* block */)a1;
- (id)_createShareModel;
- (id)_fetchInvitationWithContext:(id)a0 usingShare:(id)a1;
- (void)_fetchRecordsForContexts:(id)a0;
- (id)_fetchRecordsWithRecordIDs:(id)a0 canRetry:(BOOL)a1;
- (id)_leaveCloudShareRequestingNewInvitationToken:(BOOL)a0 allowCloudPull:(BOOL)a1;
- (id)_performCloudPullWithOptions:(id)a0 useCachedServerToken:(BOOL)a1;
- (id)_performImmediateCloudPullWithOptions:(id)a0 useCachedServerToken:(BOOL)a1;
- (id)_pushDeletedParticipantRecordIDs:(id)a0;
- (id)_pushUpdatedShare:(id)a0;
- (id)_pushUpdatedShare:(id)a0 participantRecord:(id)a1;
- (id)_revokeShareAccessForParticipant:(id)a0 usingShare:(id)a1;
- (id)_setWriteAccessEnabled:(BOOL)a0 forParticipant:(id)a1 usingShare:(id)a2;
- (void)_startUpWithPrivateLocalZone:(id)a0;
- (void)_startUpWithPublicLocalZone:(id)a0;
- (id)_syncInternalModels;
- (id)_triggerOutputForOutputRow:(unsigned long long)a0 options:(id)a1;
- (id)cloudFieldForEncoding:(unsigned long long)a0;
- (id)cloudMetadataForModel:(id)a0 usingEncoding:(unsigned long long)a1;
- (id)createShareModel;
- (id)decodeModelFromRecord:(id)a0 externalRecordFields:(id)a1 source:(unsigned long long)a2 error:(id *)a3;
- (id)decodeShareModelFromShare:(id)a0;
- (id)encodeManateeCloudModel:(id)a0 existingRecord:(id)a1 encodingContext:(id)a2 error:(id *)a3;
- (id)encodeRecordFromModel:(id)a0 existingRecord:(id)a1 encodingContext:(id)a2 error:(id *)a3;
- (id)encodeRecordFromModel:(id)a0 existingRecord:(id)a1 error:(id *)a2;
- (id)encodeShareModel:(id)a0;
- (id)fetchChangesWithToken:(id)a0 options:(id)a1;
- (id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)a0;
- (id)fetchCompleteModel:(id)a0;
- (id)fetchCompleteModelForRecordID:(id)a0;
- (id)fetchCompleteModelWithID:(id)a0;
- (id)fetchCompleteModels:(id)a0;
- (id)fetchCompleteModelsForRecordIDs:(id)a0;
- (id)fetchCompleteModelsWithIDs:(id)a0;
- (id)fetchCurrentParticipantCloudShareID;
- (id)fetchInvitationWithContext:(id)a0;
- (id)fetchOwnerParticipantCloudShareID;
- (id)fetchRecordWithRecordID:(id)a0 canRetry:(BOOL)a1;
- (id)fetchRecordsWithRecordIDs:(id)a0;
- (void)handleDeletion;
- (void)handleLostKeys;
- (void)handleUpdatedInternalModels:(id)a0;
- (void)handleUpdatedRebuilderModel:(id)a0;
- (BOOL)handleUpdatedShare:(id)a0 error:(id *)a1;
- (void)handleUpdatedShareModel:(id)a0;
- (void)handleUpdatedShareParticipantModels:(id)a0;
- (BOOL)handleUpdatedShareParticipantRecord:(id)a0 error:(id *)a1;
- (void)handleZoneChangedNotification;
- (id)initWithCloudDatabase:(id)a0 configuration:(id)a1 state:(id)a2;
- (void)initializeShareModels;
- (BOOL)isInternalModel:(id)a0;
- (id)leaveCloudShareRequestingNewInvitationToken:(BOOL)a0;
- (void)notifyDelegateOfError:(id)a0 forOperation:(id)a1;
- (id)participantWithClientIdentifier:(id)a0;
- (id)performCloudPullWithOptions:(id)a0;
- (id)performFullCloudPullWithOptions:(id)a0;
- (id)performStartupCloudPullWithOptions:(id)a0;
- (BOOL)populateManateeCloudRecord:(id)a0 withModel:(id)a1 encodingContext:(id)a2 error:(id *)a3;
- (BOOL)populateV4CloudRecord:(id)a0 withModel:(id)a1 metadataFieldData:(id)a2 startEncoding:(unsigned long long)a3 endEncoding:(unsigned long long)a4 encodingContext:(id)a5 error:(id *)a6;
- (void)pushGroupWithBlockRow:(unsigned long long)a0 tuples:(id)a1 options:(id)a2 activity:(id)a3 completionPromise:(id)a4;
- (id)pushRecordsToUpdate:(id)a0 recordIDsToRemove:(id)a1 configuration:(id)a2 rollbackEnabled:(BOOL)a3;
- (id)pushRecordsToUpdate:(id)a0 recordIDsToRemove:(id)a1 configuration:(id)a2 rollbackEnabled:(BOOL)a3 needsNewInvitationToken:(BOOL)a4;
- (id)queryRecordsWithType:(id)a0;
- (id)recordIDForModel:(id)a0;
- (id)registerSubscriptionForExternalRecordType:(id)a0;
- (BOOL)resolveConflicts:(id)a0 options:(id)a1;
- (BOOL)retryCloudKitOperation:(id)a0 afterError:(id)a1 retryBlock:(id /* block */)a2;
- (id)revokeShareAccessForParticipant:(id)a0;
- (id)setWriteAccessEnabled:(BOOL)a0 forParticipant:(id)a1;
- (id)startUpRebuilderIfNeeded;
- (void)startUpWithLocalZone:(id)a0;
- (id)triggerOutputForOutputRow:(unsigned long long)a0 options:(id)a1;
- (id)unregisterSubscriptionForExternalRecordType:(id)a0;

@end
