@protocol LFSessionAgentListenerInterface;

@interface LFSessionAgentListener : LFListener

@property (retain) id<LFSessionAgentListenerInterface> messageHandler;

- (id)init;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithMessageHandler:(id)a0;

@end
