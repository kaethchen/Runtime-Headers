@class NSPersistentCloudKitContainerActivityVoucher, NSMutableArray, NSString, NSPersistentCloudKitContainer, NSObject, CKContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (retain, nonatomic) NSPersistentCloudKitContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (nonatomic) BOOL accountCheckCompleted;
@property (nonatomic) BOOL accountSupportsDeviceToDeviceEncryption;
@property (nonatomic) BOOL hasInitialCloudKitImportOccurred;
@property (nonatomic) BOOL cloudKitSetupCompleted;
@property (retain, nonatomic) NSPersistentCloudKitContainerActivityVoucher *setupVoucher;
@property (retain, nonatomic) NSMutableArray *importCompletionHandlers;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)containerName;
- (id)newBackgroundContext;
- (id)fileManager;
- (id)ckContainerIdentifier;
- (void)handleManateeAvailabilityNotification:(id)a0;
- (id)databaseDirectoryURL;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)cloudPersistentStoreDescription;
- (id)localPersistentStoreDescription;
- (id)_persistentCloudKitContainerEventTypeToString:(long long)a0;
- (id)appTransactionAuthorName;
- (id)cloudDatabaseFileURL;
- (id)createCkContainer;
- (id)createPersistentContainer;
- (BOOL)databaseHasBeenCreated;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (id)lastProcessedPersistentHistoryToken;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localDatabaseFileURL;
- (BOOL)overrideDeviceEncryptionCheck;
- (BOOL)performInitialImportQueryWithContainer:(id)a0;
- (void)processPersistentStoreRemoteChanges;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;

@end
