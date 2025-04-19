@class QLPreviewExtensionViewController, QLExtensionPreview, NSString, NSURL;
@protocol QLPreviewingController;

@interface QLPreviewExtensionServiceContext_mac : NSExtensionContext <QLPreviewExtensionContextProtocol>

@property (retain) QLExtensionPreview *preview;
@property (readonly) NSURL *previewContentURL;
@property (weak) QLPreviewExtensionViewController *viewService;
@property (readonly) id<QLPreviewingController> previewingController;
@property BOOL hostIsAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_extensionIsGenerationBased;

- (void).cxx_destruct;
- (void)loadWithPreview:(id)a0 isAnimating:(BOOL)a1 completion:(id /* block */)a2;
- (void)setPreviewMode:(long long)a0;

@end
