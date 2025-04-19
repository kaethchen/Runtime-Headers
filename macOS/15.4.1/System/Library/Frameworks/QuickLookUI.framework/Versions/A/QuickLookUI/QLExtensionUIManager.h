@class QLExtensionManager;

@interface QLExtensionUIManager : NSObject

@property (retain) QLExtensionManager *extensionManager;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_viewControllerForExtension:(id)a0 context:(id)a1 requestIdentifier:(id)a2 hints:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)remoteViewControllerForPreview:(id)a0 restrictToFirstParty:(BOOL)a1 withHints:(id)a2 completionHandler:(id /* block */)a3;

@end
