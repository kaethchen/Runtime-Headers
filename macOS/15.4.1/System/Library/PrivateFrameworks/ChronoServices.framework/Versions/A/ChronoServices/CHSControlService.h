@interface CHSControlService : NSObject

@property (class, nonatomic, readonly) CHSControlService *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)allControlConfigurationsByHostWithCompletion:(id /* block */)a0;
- (void)fetchControlDescriptorsForExtensionBundleIdentifier:(id)a0 userInitiated:(BOOL)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)reloadControlsForExtension:(id)a0 kind:(id)a1 reason:(id)a2;

@end
