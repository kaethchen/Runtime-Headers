@class NSObject;
@protocol OS_xpc_object, OS_nw_activity;

@interface COTimerServiceClient : COCoordinationServiceClient

@property (readonly, nonatomic) NSObject<OS_xpc_object> *clientLifetimeActivityMetrics;
@property (nonatomic) int clientLifetimeActivityCompletionReason;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *clientLifetimeActivity;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)changeClientLifetimeActivityMetrics:(id /* block */)a0;
- (void)donateClientLifetimeActivityCompletionReason:(int)a0;

@end
