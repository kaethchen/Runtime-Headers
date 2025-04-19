@interface MTRDeviceMatterCPPObjectsHolder : NSObject

@property (readonly, nonatomic) void *readClient;
@property (readonly, nonatomic) void *subscriptionCallback;

- (void)clearReadClientAndDeleteSubscriptionCallback;
- (void)setReadClient:(void *)a0 subscriptionCallback:(void *)a1;

@end
