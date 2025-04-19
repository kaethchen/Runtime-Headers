@class NSURL;

@interface VideosUI.OpenURLHandler : NSObject <VUIOpenURLHandling> {
    void /* unknown type, empty encoding */ deferredOpenURL;
    void /* unknown type, empty encoding */ isMultiOffer;
    void /* unknown type, empty encoding */ _isFinished;
    void /* unknown type, empty encoding */ isFinishedLock;
    void /* unknown type, empty encoding */ _isLoadingSharedWatchURL;
    void /* unknown type, empty encoding */ isLoadingSharedWatchURLLock;
    void /* unknown type, empty encoding */ deferredOpenURLCompletion;
    void /* unknown type, empty encoding */ amsURLParser;
    void /* unknown type, empty encoding */ deferredAMSDynamicURLCompletion;
    void /* unknown type, empty encoding */ offerURLString;
    void /* unknown type, empty encoding */ contextData;
    void /* unknown type, empty encoding */ purchaseOrLinkingAdamID;
    void /* unknown type, empty encoding */ subscriptionChannelTitle;
    void /* unknown type, empty encoding */ subscriptionChannelLink;
}

@property (nonatomic, copy) NSURL *deferredOpenURL;
@property (nonatomic) void /* unknown type, empty encoding */ openedByDeeplink;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isLoadingSharedWatchURL;

- (id)init;
- (void).cxx_destruct;
- (void)parseURL:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)createProductPageDocumentDataSource:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)handleDeferredURLWithAppContext:(id)a0;
- (void)openSharedWatchURL:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)processDeeplink:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)processEngagementResult:(id)a0 error:(id)a1;
- (void)processEntityWithContextData:(id)a0 appContext:(id)a1;
- (void)processItunesExtrasStoreLink:(id)a0;
- (void)processNonDeeplinkURL:(id)a0 contextData:(id)a1 sharedWatchUrl:(id)a2 appContext:(id)a3 completion:(id /* block */)a4;
- (void)processRouterDeeplink:(id)a0 completion:(id /* block */)a1;
- (id)queryParameterStringfromURL:(id)a0 parameter:(id)a1;
- (void)saveDeferredURL:(id)a0 completion:(id /* block */)a1;

@end
