@interface iCloudSettings.DynamicUIFlowController : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ dynamicUI;
    void /* unknown type, empty encoding */ flowCompletionDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;

@end
