@class CKSyncEngineStateSerialization;

@interface CKSyncEngineStateUpdateEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKSyncEngineStateSerialization *stateSerialization;

- (void).cxx_destruct;
- (long long)type;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithStateSerialization:(id)a0;

@end
