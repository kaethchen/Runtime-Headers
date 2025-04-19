@interface iCloudSettings.WebViewFlowControllerProvider : NSObject <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ webViewController;
    void /* unknown type, empty encoding */ flowCompletionDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;

@end
