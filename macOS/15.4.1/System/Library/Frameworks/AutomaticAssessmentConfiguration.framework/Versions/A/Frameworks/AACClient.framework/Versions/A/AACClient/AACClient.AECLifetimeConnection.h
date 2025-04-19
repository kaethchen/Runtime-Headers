@interface AACClient.AECLifetimeConnection : NSObject <NSXPCListenerDelegate, AELifecycleEventHandling> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ uiPrimitives;
    void /* unknown type, empty encoding */ singleAppModeToggler;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ invalidationHandler;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleEventDidBeginWithCompletion:(id /* block */)a0;
- (void)handleEventDidInvalidateWithError:(id)a0 completion:(id /* block */)a1;
- (void)handleEventWantsBeginSingleAppModeWithCompletion:(id /* block */)a0;
- (void)handleEventWantsEndSingleAppModeWithCompletion:(id /* block */)a0;
- (void)handleEventWantsPresentBannerWithTitle:(id)a0 duration:(id)a1 completion:(id /* block */)a2;

@end
