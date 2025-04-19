@class NSMutableArray;

@interface TRISandboxedPushServiceConnection : NSObject <TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSMutableArray *channels;

- (id)init;
- (void).cxx_destruct;
- (void)_persistSubscriptions;
- (id)_readPersistedSubscriptions;
- (void)_validateChannelForChannelId:(id)a0;
- (void)subscribeToChannel:(id)a0;
- (id)subscribedChannelIds;
- (void)unsubscribeFromChannel:(id)a0;

@end
