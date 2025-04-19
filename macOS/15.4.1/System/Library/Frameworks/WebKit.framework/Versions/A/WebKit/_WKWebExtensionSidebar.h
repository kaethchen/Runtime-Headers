@class NSString, NSViewController, WKWebView, WKWebExtensionContext;
@protocol WKWebExtensionTab;

@interface _WKWebExtensionSidebar : NSObject

@property (readonly, weak, nonatomic) WKWebExtensionContext *webExtensionContext;
@property (readonly, weak, nonatomic) id<WKWebExtensionTab> associatedTab;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSViewController *viewController;

- (void)willOpenSidebar;
- (id)iconForSize:(struct CGSize { double x0; double x1; })a0;
- (void)willCloseSidebar;

@end
