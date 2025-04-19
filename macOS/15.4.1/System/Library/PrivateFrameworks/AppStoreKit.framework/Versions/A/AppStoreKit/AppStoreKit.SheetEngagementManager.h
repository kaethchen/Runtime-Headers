@interface AppStoreKit.SheetEngagementManager : NSObject <AMSEngagementObserver, AMSUIEngagementTaskDelegate> {
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ presentationWindow;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ previousPageContext;
    void /* unknown type, empty encoding */ previousArcadeSubscriptionState;
}

- (id)init;
- (void).cxx_destruct;
- (void)engagement:(id)a0 didUpdateEngagementRequest:(id)a1 placement:(id)a2 serviceType:(id)a3 completion:(id /* block */)a4;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)engagementTaskViewController:(id)a0 handleDynamicDelegateAction:(id)a1 completionHandler:(id /* block */)a2;

@end
