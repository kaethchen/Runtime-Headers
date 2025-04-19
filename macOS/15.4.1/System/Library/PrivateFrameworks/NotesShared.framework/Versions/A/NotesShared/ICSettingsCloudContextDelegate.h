@class NSString;

@interface ICSettingsCloudContextDelegate : NSObject <ICCloudContextDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)cloudContext:(id)a0 hasContextOptions:(unsigned long long)a1;
- (id)accountIDsForCloudContext:(id)a0 managedObjectContext:(id)a1;
- (id)backgroundContextForCloudContext:(id)a0;
- (void)cloudContext:(id)a0 didExceedQuotaForRecordID:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 didFetchShare:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 didFetchUserRecord:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 didPushRecordID:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 receivedZoneNotFound:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 sharedZoneWasDeleted:(id)a1 accountID:(id)a2;
- (void)cloudContext:(id)a0 userDidDeleteRecordZoneWithID:(id)a1 accountID:(id)a2;
- (BOOL)deleteCloudObject:(id)a0;
- (id)persistentStoreCoordinatorForCloudContext:(id)a0;
- (id)viewContextForCloudContext:(id)a0;

@end
