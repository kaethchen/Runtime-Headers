@class NSArray, NSDictionary;

@interface CKSyncEngineSentDatabaseChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *savedZones;
@property (readonly, copy, nonatomic) NSArray *failedZoneSaves;
@property (readonly, copy, nonatomic) NSArray *deletedZoneIDs;
@property (readonly, copy, nonatomic) NSDictionary *failedZoneDeletes;

- (void).cxx_destruct;
- (long long)type;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithSavedZones:(id)a0 failedZoneSaves:(id)a1 deletedZoneIDs:(id)a2 failedZoneDeletes:(id)a3;

@end
