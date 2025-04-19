@protocol PUProjectExtensionHostContextDelegate;

@interface PUProjectExtensionHostContext : NSExtensionContext <PUProjectExtensionHost>

@property (weak, nonatomic) id<PUProjectExtensionHostContextDelegate> projectHostContextDelegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (void)performDragOperationWithPasteboardNamed:(id)a0 draggingSequenceNumber:(long long)a1;
- (void)showEditorForAssetWithLocalIdentifier:(id)a0;
- (id)updateProjectInfo:(id)a0 forProject:(id)a1 completion:(id /* block */)a2;

@end
