@interface RPBroadcastActivityViewServiceExtensionContext : NSExtensionContext

+ (id)sharedInstance;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteProxy;

@end
