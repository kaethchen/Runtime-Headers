@class WKWebView;

@interface _WKInspectorWindow : NSWindow

@property (nonatomic, getter=isForRemoteTarget) BOOL forRemoteTarget;
@property (weak, nonatomic) WKWebView *inspectedWebView;

- (void).cxx_destruct;

@end
