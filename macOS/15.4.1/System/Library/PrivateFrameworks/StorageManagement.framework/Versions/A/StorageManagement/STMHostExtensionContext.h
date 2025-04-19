@class STMOpaqueExtension;

@interface STMHostExtensionContext : NSExtensionContext <STMHostExtensionContext>

@property (weak) STMOpaqueExtension *extension;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)extensionItemClasses;

- (void).cxx_destruct;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)extension:(id)a0 partialResourceItems:(id)a1;
- (void)extension:(id)a0 notifyResourcesDidChange:(id)a1;
- (void)extension:(id)a0 notifyTipsDidChange:(id)a1;
- (void)extension:(id)a0 notifyTotalSpaceUsedDidChange:(id)a1;

@end
