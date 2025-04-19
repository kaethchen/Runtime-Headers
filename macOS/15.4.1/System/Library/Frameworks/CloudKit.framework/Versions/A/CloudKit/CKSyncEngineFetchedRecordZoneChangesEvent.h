@class NSArray;

@interface CKSyncEngineFetchedRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *zoneAttributesModifications;
@property (readonly, copy, nonatomic) NSArray *modifications;
@property (readonly, copy, nonatomic) NSArray *deletions;

- (void).cxx_destruct;
- (long long)type;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithModifications:(id)a0 deletions:(id)a1 zoneAttributesModifications:(id)a2;

@end
