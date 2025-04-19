@class WKWebViewConfiguration, WKNavigationAction, WKWindowFeatures;

@interface BrowserViewControllerWindowConfiguration : NSObject

@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) WKNavigationAction *navigationAction;
@property (readonly, nonatomic) WKWindowFeatures *windowFeatures;
@property (nonatomic) BOOL omitParentTabRelationship;

- (void).cxx_destruct;
- (id)initWithWebViewConfiguration:(id)a0 navigationAction:(id)a1 windowFeatures:(id)a2;

@end
