@protocol QLUIServiceHostViewControllerDelegate;

@interface QLUIServiceHostViewController : QLRemoteViewController <QLUIServiceHostViewControllerProtocol>

@property (weak) id<QLUIServiceHostViewControllerDelegate> delegate;

+ (void)connectToUIServiceViewController:(id /* block */)a0;
+ (void)warmUpService;

- (id)exportedInterface;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)serviceViewControllerInterface;
- (void)updateProperties:(id)a0;
- (void)didSaveEdit:(BOOL)a0 toURL:(id)a1 sandboxToken:(id)a2;
- (long long)_consumeSandboxToken:(id)a0 forFileAtURL:(id)a1;
- (void)_releaseSandboxHandle:(long long)a0;
- (void)closePanel:(long long)a0;
- (void)didShowScreentimeLockout:(BOOL)a0 withPolicy:(long long)a1;
- (void)pageUpdatedContent:(long long)a0;
- (void)previewLoaded:(id)a0;
- (void)previewNeedsPassword;
- (void)remoteDesisted:(id)a0 displayBundle:(id)a1 error:(id)a2;
- (void)serviceDidCancelMarkup;
- (void)sizingUpdated;

@end
