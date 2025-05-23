@class NSString, AMSUIDynamicViewController;
@protocol AMSUIDynamicViewControllerDelegate;

@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate>

@property (weak) AMSUIDynamicViewController *dynamicViewController;
@property (weak) id<AMSUIDynamicViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dynamicViewController:(id)a0 contentViewControllerWithDictionary:(id)a1;
- (id)dynamicViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewController:(id)a0 handleDelegateAction:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (id)initWithDynamicViewController:(id)a0;

@end
