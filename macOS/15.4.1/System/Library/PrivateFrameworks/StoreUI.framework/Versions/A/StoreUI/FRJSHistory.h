@class FRWKView;

@interface FRJSHistory : FRJSObject

@property (readonly, weak) FRWKView *webView;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;

@end
