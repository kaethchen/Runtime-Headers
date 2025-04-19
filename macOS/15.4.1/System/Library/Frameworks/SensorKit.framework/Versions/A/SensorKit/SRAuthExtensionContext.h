@interface SRAuthExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteProxy;

@end
