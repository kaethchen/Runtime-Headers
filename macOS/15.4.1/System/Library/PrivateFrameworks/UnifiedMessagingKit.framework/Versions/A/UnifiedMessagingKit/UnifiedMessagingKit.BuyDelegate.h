@interface UnifiedMessagingKit.BuyDelegate : NSObject <AMSPurchaseDelegate, AMSUIPurchaseDelegate> {
    void /* unknown type, empty encoding */ objectGraph;
}

- (id)init;
- (void).cxx_destruct;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)purchase:(id)a0 handleWindowRequest:(id)a1 error:(id *)a2;

@end
