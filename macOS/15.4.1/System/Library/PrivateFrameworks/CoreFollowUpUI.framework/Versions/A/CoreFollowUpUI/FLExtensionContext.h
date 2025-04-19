@class NSString;

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface> {
    id _shadowPrincipalObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)a0;
- (void)processFollowUpItem:(id)a0 selectedAction:(id)a1 completion:(id /* block */)a2;
- (void)setDisplayImage:(id)a0;
- (id)hostContextWithErrorHandler:(id /* block */)a0;
- (id)_shadowPrincipalObject;
- (id)extensionLogicProvider;
- (id)syncHostContextWithErrorHandler:(id /* block */)a0;

@end
