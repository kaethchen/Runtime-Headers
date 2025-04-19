@class NSError, NSString, BRCPendingChangesStream, NSMutableDictionary, BRCFetchRecordSubResourcesHandler, NSMutableSet, NSMutableArray, BRCServerZone, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    NSMutableDictionary *_recordsByID;
    NSMutableDictionary *_subResourceRecordsByID;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_deletedShareIDs;
    NSMutableSet *_movedZoneNames;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    NSObject<OS_dispatch_group> *_deserializeGroup;
    NSObject<OS_dispatch_source> *_deserializeSource;
    unsigned int _loopDetectionCacheSize;
    NSMutableOrderedSet *_loopDetectionCache;
    unsigned char _deserializeState;
    BOOL _isDoneFetchingRecords;
    BOOL _isDeltaSync;
    BOOL _canSaveDirectly;
    BOOL _canSaveDirectlyWithDeletes;
    BOOL _contentRecordsFetchedInline;
    BRCFetchRecordSubResourcesHandler *_fetchResourcesHandler;
}

@property (readonly, nonatomic) unsigned long long recordsFetched;
@property (readonly, nonatomic) unsigned long long recordsFetchedTotalMetadataSize;
@property (readonly, nonatomic) unsigned long long xattrsFetchedTotalSize;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream;
@property (copy, nonatomic) id /* block */ queryFinishedServerTruthCallback;
@property (copy, nonatomic) id /* block */ queryFinishedClientTruthCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)stop;
- (void)addRecord:(id)a0;
- (id)records;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (void)stopWithError:(id)a0;
- (id)createActivity;
- (BOOL)_willFetchRecordForDeserialize:(id)a0;
- (void)_cleanUpAfterSavingRecords;
- (long long)_compareRecordsForSaveWithFirstRecord:(id)a0 secondRecord:(id)a1;
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;
- (void)_dump;
- (void)_fetchRecordsBlockingSaveIfNecessary;
- (BOOL)_hasRecordsPendingSubResources;
- (BOOL)_markSubResourceRecordAsFetchedIfNecessary:(id)a0;
- (void)_notifyWhenRecordsAreFetched:(id /* block */)a0;
- (void)_prepareToSaveRecords;
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)a0 clientChangeToken:(long long)a1;
- (void)_scheduleDeserialize;
- (void)_scheduleXattrFetch;
- (void)_startWithParentOperation:(id)a0;
- (void)addRecordIDToDeserialize:(id)a0;
- (void)addRecordIDToDeserialize:(id)a0 recordType:(long long)a1;
- (id)initAndScheduleWithServerZone:(id)a0 parentOperation:(id)a1 pendingChangesStream:(id)a2 contentRecordsFetchedInline:(BOOL)a3 fetchResourcesHandler:(id)a4 sessionContext:(id)a5;
- (id)movedZoneNames;
- (void)notifyWhenCaughtUp:(BOOL)a0 whenRecordsAreFetchedAndFinish:(id /* block */)a1;
- (void)notifyWhenRecordsAreFetchedAndFinish:(id /* block */)a0;
- (void)recordIDWasDeleted:(id)a0;
- (BOOL)saveRecordsWithQueryCursor:(id)a0;
- (BOOL)saveRecordsWithServerChangeToken:(id)a0 clientChangeToken:(long long)a1 syncStatus:(long long)a2;
- (void)shareIDWasDeleted:(id)a0;

@end
