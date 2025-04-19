@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCookieTransferController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, nonatomic) WBSCookieTransferController *sharedController;
@property (class, readonly, nonatomic) NSArray *domainsToDisableCookieCopying;

- (id)init;
- (void).cxx_destruct;
- (void)copyCookiesFromWebView:(id)a0 intoFolderAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_copyCookiesFromCookieStore:(id)a0 matchingDomain:(id)a1 intoFolderAtURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)copyCookiesFromFolderAtURL:(id)a0 intoDataStore:(id)a1;

@end
