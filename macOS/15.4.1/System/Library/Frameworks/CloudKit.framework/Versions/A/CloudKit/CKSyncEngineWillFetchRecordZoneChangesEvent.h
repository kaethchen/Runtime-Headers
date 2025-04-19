@class CKRecordZoneID;

@interface CKSyncEngineWillFetchRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithZoneID:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;

@end
