@class NSString;
@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIExtensionHostContext : NSExtensionContext <LTUIViewServiceExtensionHostProtocol>

@property (weak) id<LTUIViewServiceExtensionHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dismiss;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)remoteIsReady;

@end
