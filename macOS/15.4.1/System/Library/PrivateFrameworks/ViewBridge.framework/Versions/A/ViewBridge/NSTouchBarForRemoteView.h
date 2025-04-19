@class NSXPCListenerEndpoint;

@interface NSTouchBarForRemoteView : NSTouchBar

@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;

- (void)dealloc;
- (id)initWithServiceBarIdentifier:(id)a0 remoteView:(id)a1;

@end
