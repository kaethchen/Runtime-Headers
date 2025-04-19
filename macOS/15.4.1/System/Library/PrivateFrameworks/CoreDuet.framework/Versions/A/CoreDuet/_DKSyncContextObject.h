@class _DKSyncContext;

@interface _DKSyncContextObject : NSObject

@property (readonly, nonatomic) _DKSyncContext *context;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
