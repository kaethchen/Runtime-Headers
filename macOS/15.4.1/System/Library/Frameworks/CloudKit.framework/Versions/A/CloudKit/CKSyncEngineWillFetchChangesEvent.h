@class CKSyncEngineFetchChangesContext;

@interface CKSyncEngineWillFetchChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineFetchChangesContext *context;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;

@end
