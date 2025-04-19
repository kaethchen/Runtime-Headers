@class EMRemoteContentURLSession, NSString, NSArray, EMRemoteContentURLSchemeHandler, EFCancelationToken, _WKUserStyleSheet, WKWebViewConfiguration;

@interface MUIWKWebViewConfigurationManager : NSObject <WKScriptMessageHandler, MEContentRuleListManagerObserver> {
    EMRemoteContentURLSchemeHandler *_proxySchemeHandler;
    EMRemoteContentURLSchemeHandler *_noProxySchemeHandler;
    WKWebViewConfiguration *_configuration;
    _WKUserStyleSheet *_userStyleSheet;
    EFCancelationToken *_contentRuleListManagerObserverCancelable;
}

@property (readonly, nonatomic) WKWebViewConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *effectiveUserStyle;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) NSArray *allowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)log;
+ (void)setURLCache:(id)a0;
+ (id)_contentRuleListManager;
+ (id)_defaultLibraryIfAvailable;
+ (id)_urlCache;
+ (void)appendCommonStyles:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)contentRuleListManager:(id)a0 didAddRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didRemoveRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (void)_updateDebuggingPreferences;
- (void)_updateFontPreferences;
- (void)_updateStyleSheets;
- (id)_userScripts;
- (void)handleAccessibilityDisplayChange:(id)a0;

@end
