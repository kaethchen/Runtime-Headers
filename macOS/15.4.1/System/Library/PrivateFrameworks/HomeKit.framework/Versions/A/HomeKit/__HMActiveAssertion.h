@class _HMContext, NSUUID;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *UUID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)acquire:(id *)a0;
- (id)initWithName:(id)a0 context:(id)a1 messageTargetUUID:(id)a2;

@end
