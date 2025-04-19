@class QLPreviewExtensionDisplayBundle, NSString;

@interface QLPreviewExtensionHostContext : NSExtensionContext <QLPreviewExtensionHostContextProtocol>

@property (weak) QLPreviewExtensionDisplayBundle *displayBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;

@end
