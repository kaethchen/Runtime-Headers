@class NSString, STMExtension;

@interface STMRemoteExtensionContext : NSExtensionContext <STMRemoteExtensionContext>

@property (retain) STMExtension *storageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)processInputItems:(id)a0 completionHandler:(id /* block */)a1;

@end
