@class NSManagedObject, WFCoreDataCollection, NSString, WFDatabase, WFWorkflowIcon, NSOrderedSet, NSData;

@interface WFCoreDataCollectionModel : NSObject <WFDatabaseRecordStorage, WFRecordStorage>

@property (readonly, nonatomic) WFCoreDataCollection *coreDataCollection;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) BOOL isRootCollection;
@property (readonly, nonatomic) NSString *workflowType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) long long wantedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *collectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *shortcutOrdering;
@property (copy, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (copy, nonatomic) NSData *cloudKitOrderingRecordMetadata;
@property (readonly, nonatomic) NSManagedObject *managedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithManagedObject:(id)a0 database:(id)a1;

@end
