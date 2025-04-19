@class PKPaymentAuthorizationViewController, PKPaymentAuthorizationCoordinator, PKCatalystPaymentAuthorizationViewController, NSWindow;

@interface PassKitMacHelper : NSObject <PassKitMacHelperPaymentHelperProtocol>

@property (retain, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSWindow *sheetWindow;
@property (retain, nonatomic) PKCatalystPaymentAuthorizationViewController *viewController;
@property (weak, nonatomic) PKPaymentAuthorizationViewController *uiKitDelegate;
@property (weak, nonatomic) PKPaymentAuthorizationCoordinator *coordinator;
@property (weak, nonatomic) id presentationWindow;

- (id)init;
- (void).cxx_destruct;
- (void)dismissInAppPaymentInterface;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 completion:(id /* block */)a1;

@end
