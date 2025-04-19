@class NSString, PKPaymentAuthorizationViewController;
@protocol PKSettingsPaymentSheetDelegate;

@interface PKSettingsPaymentSheet : NSObject <PKPaymentAuthorizationViewControllerDelegate> {
    PKPaymentAuthorizationViewController *_controller;
}

@property (weak, nonatomic) id<PKSettingsPaymentSheetDelegate> delegate;
@property (nonatomic) BOOL succeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)viewController;
- (id)initWithPaymentRequest:(id)a0;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;

@end
