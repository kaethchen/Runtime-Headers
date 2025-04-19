@class NSString, WBSWebExtensionData, WKWebView, WKWebExtensionAction, NSImage, WBSWebExtensionsController;

@interface WBSWebExtensionToolbarItem : NSObject <WKNavigationDelegate> {
    BOOL _enabled;
    WBSWebExtensionsController *_extensionsController;
}

@property (readonly, weak, nonatomic) WBSWebExtensionData *webExtension;
@property (retain, nonatomic) WKWebExtensionAction *webKitAction;
@property (readonly, nonatomic) WKWebView *popupWebView;
@property (readonly, nonatomic) BOOL showingExtensionPopup;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectTab:(id)a0;
- (id)iconForTab:(id)a0;
- (id)initWithWebExtension:(id)a0 extensionsController:(id)a1;
- (id)popupWebViewInspectionNameForAction:(id)a0;
- (BOOL)shouldRequestAccessForTab:(id)a0;
- (id)badgeTextForTab:(id)a0;
- (void)didViewBadgeInTab:(id)a0;
- (BOOL)hasUpdatedBadgeTextInTab:(id)a0;
- (BOOL)isEnabledForTab:(id)a0;
- (id)titleForTab:(id)a0;

@end
