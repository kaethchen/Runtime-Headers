@class NSFileProvidingResponse, NSURL, NSFileProviderMovingInfo, NSFileProviderMovingResponse, NSFileProvidingInfo;

@interface _TtCC18FileProviderDaemon13FPDSimSupport22MaterializationHandler : NSObject <FPDFileCoordinationProviderDelegate> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ proxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (id)_fileReactorID;
- (void)_movingItemAtURL:(NSURL *)a0 withInfo:(NSFileProviderMovingInfo *)a1 completionHandler:(void (^)(NSFileProviderMovingResponse *))a2;
- (id)_physicalURLForURL:(id)a0;
- (void)_provideItemAtURL:(NSURL *)a0 withInfo:(NSFileProvidingInfo *)a1 completionHandler:(void (^)(NSFileProvidingResponse *))a2;
- (void)_providedItemAtURL:(id)a0 didGainPresenterWithInfo:(id)a1;
- (void)_providedItemAtURL:(id)a0 didLosePresenterWithID:(id)a1;
- (void)_providedItemAtURL:(id)a0 withPresenterWithID:(id)a1 didMoveToURL:(id)a2;
- (id)_providedItemsOperationQueue;
- (void)_writerWithID:(id)a0 didFinishWritingForURL:(id)a1;
- (id)_siblingDelegateForURL:(id)a0;

@end
