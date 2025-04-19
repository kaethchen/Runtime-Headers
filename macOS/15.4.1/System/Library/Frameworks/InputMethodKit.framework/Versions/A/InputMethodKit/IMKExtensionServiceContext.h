@class NSString;

@interface IMKExtensionServiceContext : NSExtensionContext <IMKRemoteExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)requestEndpointWithCompletionHandler:(id /* block */)a0;

@end
