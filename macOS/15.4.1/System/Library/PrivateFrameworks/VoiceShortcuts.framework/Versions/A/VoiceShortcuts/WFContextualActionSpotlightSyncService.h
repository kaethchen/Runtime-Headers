@class SwiftVCDaemonXPCEventHandler, NSString, CSSearchableIndex, MTAlarmDataSource, WFDatabaseResult, VCDaemonDatabaseProvider, NSObject, BPSSink;
@protocol OS_dispatch_queue, OS_os_activity;

@interface WFContextualActionSpotlightSyncService : NSObject <WFDatabaseResultObserver, MTAlarmDataSourceObserver, FCActivityManagerObserving, CSSearchableIndexDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) BPSSink *focusModeSink;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly, nonatomic) WFDatabaseResult *folderDatabaseResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)contextualActionsIndexVersion;
+ (BOOL)didCompleteAppShortcutDomainMigration;
+ (void)setContextualActionsIndexVersion:(long long)a0;
+ (void)setDidCompleteAppShortcutDomainMigration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)dataSourceDidReload:(id)a0;
- (void)reindexSearchableItems:(unsigned long long)a0 appShortcutBundleIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)queue_getFolderAppEntityContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)applicationWasRegistered:(id)a0;
- (void)cellularSettingsUpdated;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)databaseResultDidChange:(id)a0;
- (id)initWithEventHandler:(id)a0 databaseProvider:(id)a1;
- (void)migrateAppShortcutsAndReindexAllItemsIfNeeded;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)a0 identifiers:(id)a1 batchSize:(unsigned long long)a2 fetcher:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)queue_getAlarmContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_getToggleSettingContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)receiveAutoShortcutsUpdatedNotification:(id)a0;
- (void)reindexAllSearchableItemsIfNeeded:(BOOL)a0;
- (void)reindexAllSearchableItemsWithCompletion:(id /* block */)a0;
- (void)reindexSearchableItems:(unsigned long long)a0;
- (void)spotlightPreferencesChanged;
- (void)systemLanguageUpdated;

@end
