@class CNCache;

@interface CNAvatarPickerExtensionDiscoveryManager : NSObject

@property (retain, nonatomic) id extensionMatchToken;
@property (retain, nonatomic) CNCache *cache;
@property (retain, nonatomic) CNCache *extensionViewCompletionHandlers;

+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cacheLoadExtensionViewCompletionHandler:(id /* block */)a0 forExtensionIdentifier:(id)a1;
- (id)allExtensionIdentifiers;
- (void)beginDelayedExtensionDiscovery;
- (void)beginExtensionDiscovery;
- (void)endExtensionDiscovery;
- (id)hostContextForItem:(id)a0;
- (void)loadViewControllerForExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (void)loadViewControllerForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)loadViewControllersForMemojiExtensions;
- (void)removeViewControllersForMemojiExtensions;
- (void)updatePosePickerIfNeededWithAvatarRecordIdentifier:(id)a0;

@end
