@class NSFetchedResultsController, NSPersistentHistoryToken, EDTransactionService, NSString, EDCloudMirroringPersistentStore, NSObject;
@protocol OS_os_log, EDConversationRemoteStorageDelegate;

@interface EDConversationRemoteCloudKitStorage : NSObject <NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDCloudMirroringPersistentStore *mirroringPersistentStore;
@property (weak, nonatomic) id<EDConversationRemoteStorageDelegate> delegate;
@property (readonly, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, getter=isInitialized) BOOL initialized;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken;
@property (retain, nonatomic) EDTransactionService *exportTransaction;
@property (retain, nonatomic) EDTransactionService *importTransaction;
@property (nonatomic, getter=isMigratedFromKVSStorage) BOOL migratedFromKVSStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudKitAPSTopics;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)synchronize;
- (id)dictionaryForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)refresh;
- (void)_handlePushNotification:(id)a0;
- (id)_controlInManagedObjectContext:(id)a0;
- (void)_addOrUpdateConversationInfo:(id)a0 managedObjectContext:(id)a1;
- (id)_conversationInfoWithObjectId:(id)a0 managedObjectContext:(id)a1;
- (id)_conversationInfoWithUUID:(id)a0 managedObjectContext:(id)a1;
- (id)_conversationInfosWithUUID:(id)a0 managedObjectContext:(id)a1;
- (void)_handleDidResetSyncDataNotification:(id)a0;
- (void)_handleDuplicationsForConversationUUIDs:(id)a0 managedObjectContext:(id)a1;
- (void)_handleWillResetSyncDataNotification:(id)a0;
- (void)_initialSetup;
- (void)_recoverHistoryToken;
- (void)_removeConversationInfoWithId:(id)a0 managedObjectContext:(id)a1;
- (void)_removeConversationInfoWithObjectId:(id)a0 save:(BOOL)a1 managedObjectContext:(id)a2;
- (void)_requestExportWithManagedObjectContext:(id)a0;
- (void)_requestFirstSyncWithManagedObjectContext:(id)a0;
- (void)_requestImportWithManagedObjectContext:(id)a0;
- (void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)a0;
- (id)_transactionHistorySinceToken:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (void)_updateConversationInfo:(id)a0 withAnotherConversationInfo:(id)a1;
- (id)allConversationInfosInManagedObjectContext:(id)a0;
- (id)dictionaryForConversationInfo:(id)a0;
- (id)entityForConversationDictionary:(id)a0 key:(id)a1 managedObjectContext:(id)a2;
- (id)enumerateChangeHistorySinceToken:(id)a0 managedObjectContext:(id)a1 usingBlock:(id /* block */)a2;
- (void)persistHistoryToken;
- (void)removeDictionaryForKey:(id)a0;
- (void)setMigratedFromKVSStorage:(BOOL)a0;
- (id)storageName;

@end
