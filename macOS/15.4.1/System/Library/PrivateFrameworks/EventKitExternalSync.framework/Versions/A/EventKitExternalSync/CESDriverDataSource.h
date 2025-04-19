@class NSString, CESCalStoreSource, ISyncSessionDriver;

@interface CESDriverDataSource : NSObject <ISyncSessionDriverDataSource>

@property int preferredSyncMode;
@property (retain) ISyncSessionDriver *driver;
@property BOOL isPullingTheTruth;
@property BOOL pendingIdMappingRelease;
@property (retain) NSString *clientName;
@property (retain) CESCalStoreSource *actualSource;

+ (BOOL)isOnlyRunningInstance;
+ (void)runningInstanceIsDone;

- (id)init;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithEventStore:(id)a0;
- (BOOL)needsRefresh;
- (void)setNeedsRefresh:(BOOL)a0;
- (int)preferredSyncModeForEntityName:(id)a0;
- (int)applyChange:(id)a0 forEntityName:(id)a1 remappedRecordIdentifier:(id *)a2 formattedRecord:(id *)a3 error:(id *)a4;
- (int)applyChange:(id)a0 forEntityName:(id)a1 remappedRecordIdentifier:(id *)a2 formattedRecord:(id *)a3 error:(id *)a4 keepAwayFromServer:(BOOL *)a5;
- (id)changedRecordsForEntityName:(id)a0 moreComing:(BOOL *)a1 error:(id *)a2;
- (id)clientDescriptionURL;
- (BOOL)deleteAllRecordsForEntityName:(id)a0 error:(id *)a1;
- (id)identifiersForRecordsToDeleteForEntityName:(id)a0 moreComing:(BOOL *)a1 error:(id *)a2;
- (id)recordsForEntityName:(id)a0 moreComing:(BOOL *)a1 error:(id *)a2;
- (id)schemaBundleURLs;
- (BOOL)sessionDriver:(id)a0 didPullAndReturnError:(id *)a1;
- (BOOL)sessionDriver:(id)a0 didPushAndReturnError:(id *)a1;
- (BOOL)sessionDriver:(id)a0 willFinishSessionAndReturnError:(id *)a1;
- (BOOL)sessionDriver:(id)a0 willPullAndReturnError:(id *)a1;
- (BOOL)sessionDriver:(id)a0 willPushAndReturnError:(id *)a1;
- (double)sessionPullChangesTimeout;
- (int)applyChangeForEntityName:(id)a0 type:(int)a1 recordID:(id)a2 withRecord:(id)a3 changes:(id)a4 remappedRecordIdentifier:(id *)a5 formattedRecord:(id *)a6 error:(id *)a7;
- (void)clearForUnitTests;
- (BOOL)finishAndSaveAll:(id *)a0;
- (int)initializeSyncMode;
- (void)scheduleNewSyncIfNeeded;
- (int)syncModeFromString:(id)a0;
- (BOOL)syncWithError:(id *)a0;

@end
