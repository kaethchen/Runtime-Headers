@class CKRecordZoneID;

@interface IMDScheduledMessageStore : IMDMessageStore

@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;

- (id)init;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (id)messageRecordsToUploadToCloudKitWithFilter:(unsigned long long)a0 limit:(long long)a1;
- (id)recordIDsAndGUIDsToDeleteWithLimit:(long long)a0;

@end
