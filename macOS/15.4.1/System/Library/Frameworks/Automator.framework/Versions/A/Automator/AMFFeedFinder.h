@class NSUUID, AMFFeedController, NSURL, NSString, WebView;
@protocol AMFFeedFinderDelegate;

@interface AMFFeedFinder : NSObject <WebFrameLoadDelegate>

@property (retain) NSURL *url;
@property (retain) WebView *_webView;
@property (retain) NSUUID *_currentFeedControllerFindUUID;
@property (retain) AMFFeedController *_feedController;
@property (weak) id<AMFFeedFinderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_interestingLinkStrings;
+ (id)_linksFromElement:(id)a0 sourceURL:(id)a1;
+ (id)_parseResultsFromHeadElement:(id)a0 sourceURL:(id)a1 error:(id *)a2;
+ (id)_parseResultsFromLoadedWebView:(id)a0 sourceURL:(id)a1 error:(id *)a2;
+ (id)feedFinderURLsFromInputURLs:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFailProvisionalLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)_finishWithError:(id)a0;
- (void)_finishWithResults:(id)a0;
- (void)_finishWithWebKitError:(id)a0;
- (void)_startFindingUsingFeedController;
- (void)_startFindingUsingWebView;
- (void)_tearDownWebView;
- (id)initWithURL:(id)a0 feedController:(id)a1;
- (void)startFinding;
- (void)stopFinding;

@end
