@class AOSUIProfileViewRootViewController, NSViewController, AOSUIProfileViewCacheController, NSString, NSRemoteViewController;

@interface AOSUIProfileViewUtility : NSObject <AOSUIProfileRemoteViewControllerDelegate>

@property (retain) NSRemoteViewController *remoteViewController;
@property (retain) NSViewController *cacheViewController;
@property (retain) AOSUIProfileViewRootViewController *rootViewController;
@property (retain) AOSUIProfileViewCacheController *cacheController;
@property (readonly) NSViewController *viewController;
@property (copy) id /* block */ updateOverlayPrefPaneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestProfileViewController:(id /* block */)a0;
+ (id)sharedProfileViewUtility;

- (id)init;
- (void).cxx_destruct;
- (id)serviceProxy;
- (id)viewController;
- (void)_requestRemoteProfileViewControllerWithCompletion:(id /* block */)a0;
- (void)_updateImageCache;
- (void)_updateProfileViewFromCache;
- (void)profileRemoteViewController_updateOverlayPrefPane:(BOOL)a0 prefPanesToHide:(id)a1;
- (void)updateOverlay:(id /* block */)a0;

@end
