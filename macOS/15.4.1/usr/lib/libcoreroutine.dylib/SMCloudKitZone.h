@class NSString, CKDatabase, CKContainer, APSConnection, NSDictionary, NSObject, CKRecordZoneID, CKShare, CKRecordZone;
@protocol OS_dispatch_queue;

@interface SMCloudKitZone : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKRecordZone *zone;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSDictionary *invitationTokenMap;
@property (copy, nonatomic) id /* block */ zoneUpdateHandler;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *zoneSubscriptionID;
@property (readonly, nonatomic) CKDatabase *privateDatabase;
@property (readonly, nonatomic) CKDatabase *sharedDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)acceptShareWithInvitationToken:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (void)acceptShareWithShareMetadata:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (void)configureCloudKitQos:(id)a0 configuration:(id *)a1;
+ (void)fetchAllZonesFromContainer:(id)a0 database:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
+ (void)fetchShareMetadataWithInvitationToken:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (id)getContainer;
+ (BOOL)shouldRetryCkError:(id)a0;
+ (void)supportsDeviceToDeviceEncryptionWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)apsEnvironmentString;
- (void)createNewInvitationTokensWithConversation:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (id)createPushConnection;
- (void)deleteRecords:(id)a0 fromDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteZoneFromDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (void)deregisterForZoneUpdates;
- (void)fetchRecord:(id)a0 fromDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)fetchShareParticipantsWithConversation:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)fetchShareWithQos:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchZoneFromDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithZone:(id)a0 queue:(id)a1;
- (void)registerForZoneUpdatesWithHandler:(id /* block */)a0;
- (void)removeShareParticipantsInConversation:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (void)saveRecord:(id)a0 toDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveRecords:(id)a0 toDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveRecordsWithRetry:(long long)a0 records:(id)a1 toDatabase:(id)a2 qos:(id)a3 withCompletion:(id /* block */)a4;
- (void)saveZoneToDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (void)subscribeToZoneChangesInPrivateDatabaseWithQoS:(id)a0 completion:(id /* block */)a1;
- (void)updateRecord:(id)a0 inDatabase:(id)a1 qos:(id)a2 usingBlock:(id /* block */)a3 withCompletion:(id /* block */)a4;

@end
