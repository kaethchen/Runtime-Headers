@class NSString, _WKRemoteObjectInterface, EFCancelationToken, EFLocked, ECWebContentObserver, NSObject, NSMutableArray, WKWebView;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue;

@interface EDWebContentParser : NSObject <ECWebContentObserver, WKNavigationDelegate, MEContentRuleListManagerObserver, EFSignpostable, WKScriptMessageHandler> {
    _WKRemoteObjectInterface *_webContentObserverInterface;
    ECWebContentObserver *_webContentObserver;
    EFCancelationToken *_token;
    EFLocked *_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteContentParserLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentRuleListsLock;
    NSMutableArray *_currentContentRuleLists;
    BOOL _contentRuleListsNeedUpdate;
    EFCancelationToken *_contentRuleListsObservationToken;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extractOneTimeCodeQueue;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL isDataDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)webViewConfiguration;
- (void)_addRemoteContentWebViewObserver;
- (void)_disableDataDetection;
- (void)_enableDataDetection;
- (id)_extractDataDetectorResultsMetadata:(id)a0;
- (id)_extractOneTimeCodeFromHTMLString:(id)a0 orWithData:(id)a1 characterEncodingName:(id)a2 withSubject:(id)a3;
- (id)_extractPlainTextFromHTMLString:(id)a0 orWithData:(id)a1 characterEncodingName:(id)a2;
- (id)_getDataDetectionCategoryString:(int)a0;
- (id)_parseHTMLString:(id)a0 orWithData:(id)a1 characterEncodingName:(id)a2 withOptions:(unsigned long long)a3 messageID:(id)a4;
- (void)_retrieveRichLinkMetadata:(id)a0;
- (id)_richLinkMetadataScript;
- (void)_updateContentRuleListsIfNeededForWebViewConfiguration:(id)a0;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;
- (void)contentRuleListManager:(id)a0 didAddRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didRemoveRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (id)initWithOptions:(unsigned long long)a0 cancelationToken:(id)a1;
- (void)logWebBundleMessage:(id)a0;
- (void)parseHTMLData:(id)a0 characterEncodingName:(id)a1 withOptions:(unsigned long long)a2 forMessage:(id)a3 withSubject:(id)a4 completionHandler:(id /* block */)a5;
- (void)parseHTMLString:(id)a0 withOptions:(unsigned long long)a1 forMessage:(id)a2 withSubject:(id)a3 completionHandler:(id /* block */)a4;
- (void)receiveDataDetectionResults:(id)a0;
- (void)requestDataDetectionResultsWithBaseURL:(id)a0;
- (void)test_tearDown;

@end
