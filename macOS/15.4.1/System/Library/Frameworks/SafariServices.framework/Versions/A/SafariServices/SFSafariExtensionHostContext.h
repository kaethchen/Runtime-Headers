@class NSUUID, NSString;
@protocol SFSafariExtensionHostDelegate;

@interface SFSafariExtensionHostContext : NSExtensionContext <SFSafariExtensionHostProtocol>

@property (retain) id<SFSafariExtensionHostDelegate> delegate;
@property (retain, nonatomic) NSUUID *extensionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)openTabInWindow:(id)a0 withURL:(id)a1 makeActiveIfPossible:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)activateTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)closeTab:(id)a0;
- (void)closeWindow:(id)a0;
- (void)dispatchMessageWithName:(id)a0 fromPage:(id)a1 userInfo:(id)a2;
- (void)getActivePageInTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)getActiveTabInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getActiveWindowWithCompletionHandler:(id /* block */)a0;
- (void)getAllTabsInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllWindowsWithCompletionHandler:(id /* block */)a0;
- (void)getBaseURIWithCompletionHandler:(id /* block */)a0;
- (void)getPagesInTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPropertiesOfPage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getScreenshotOfVisibleAreaForPage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTabForPage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getToolbarItemInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getWindowForTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)navigateTab:(id)a0 toURL:(id)a1;
- (void)openWindowWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadPage:(id)a0;
- (void)setToolbarItem:(id)a0 badgeText:(id)a1;
- (void)setToolbarItem:(id)a0 imageData:(id)a1;
- (void)setToolbarItem:(id)a0 isEnabled:(BOOL)a1;
- (void)setToolbarItem:(id)a0 isEnabled:(BOOL)a1 withBadgeText:(id)a2;
- (void)setToolbarItem:(id)a0 label:(id)a1;
- (void)setToolbarItemsNeedUpdate;
- (void)showPopoverFromToolbarItem:(id)a0;

@end
