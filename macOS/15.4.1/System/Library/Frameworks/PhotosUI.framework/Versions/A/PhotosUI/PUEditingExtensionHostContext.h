@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost>

@property (copy) id /* block */ contentEditingOutputCommitHandler;
@property (copy) id /* block */ hideNavigationControllerHandler;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setHideNavigationController:(BOOL)a0;

@end
