@class NSArray;

@interface CKSyncEngineFetchedDatabaseChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *modifications;
@property (readonly, copy, nonatomic) NSArray *deletions;

- (void).cxx_destruct;
- (long long)type;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithModifications:(id)a0 deletions:(id)a1;

@end
