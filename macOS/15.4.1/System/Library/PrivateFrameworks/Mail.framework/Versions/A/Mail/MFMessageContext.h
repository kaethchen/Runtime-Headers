@class NSOperationQueue;

@interface MFMessageContext : NSObject

@property (readonly, nonatomic) NSOperationQueue *waitingQueue;
@property (readonly, nonatomic) NSOperationQueue *filesystemQueue;

+ (id)sharedContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)async_cacheBodyForMessage:(id)a0 monitor:(id)a1;
- (void)async_muteConversationForMessages:(id)a0;
- (void)async_setFlagWithKey:(id)a0 state:(BOOL)a1 forMessages:(id)a2 reason:(long long)a3;
- (void)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (void)async_setJunkMailLevel:(long long)a0 forMessages:(id)a1;
- (void)async_unmuteConversationForMessages:(id)a0;
- (void)setFlagWithKey:(id)a0 state:(BOOL)a1 forMessages:(id)a2 reason:(long long)a3;
- (void)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (void)setJunkMailLevel:(long long)a0 forMessages:(id)a1;

@end
