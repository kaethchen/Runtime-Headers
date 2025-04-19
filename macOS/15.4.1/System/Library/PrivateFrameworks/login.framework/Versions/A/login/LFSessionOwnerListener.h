@protocol LFSessionOwnerListenerInterface;

@interface LFSessionOwnerListener : LFListener

@property (retain) id<LFSessionOwnerListenerInterface> messageHandler;

- (id)init;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithMessageHandler:(id)a0;

@end
