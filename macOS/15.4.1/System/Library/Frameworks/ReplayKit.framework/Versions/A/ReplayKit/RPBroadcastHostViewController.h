@class NSXPCListenerEndpoint, RPBroadcastExtensionHostContext;

@interface RPBroadcastHostViewController : NSRemoteViewController

@property (retain, nonatomic) RPBroadcastExtensionHostContext *hostContext;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (oneway void)completeSetupWithBroadcastURL:(id)a0;
- (void)updateBroadcastHandlerListenerEndpoint;

@end
