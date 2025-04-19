@class NSString;

@interface ReadingListFetcherNavigationDelegate : NSObject <WKNavigationDelegate> {
    void *_readingListFetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;
- (void)disconnectFromClient;
- (id)initWithReadingListFetcher:(void *)a0;

@end
