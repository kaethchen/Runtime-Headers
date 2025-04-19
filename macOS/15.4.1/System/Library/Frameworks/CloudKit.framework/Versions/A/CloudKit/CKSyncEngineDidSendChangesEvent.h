@class CKSyncEngineSendChangesContext;

@interface CKSyncEngineDidSendChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineSendChangesContext *context;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;

@end
