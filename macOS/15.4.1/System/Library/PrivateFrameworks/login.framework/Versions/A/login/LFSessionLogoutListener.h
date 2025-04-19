@protocol LFSessionLogoutListenerMessageHandler, LFSessionLogoutListenerInterface;

@interface LFSessionLogoutListener : LFListener

@property (retain) id<LFSessionLogoutListenerInterface, LFSessionLogoutListenerMessageHandler> messageHandler;

- (void)dealloc;
- (id)init;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithMessageHandler:(id)a0;

@end
