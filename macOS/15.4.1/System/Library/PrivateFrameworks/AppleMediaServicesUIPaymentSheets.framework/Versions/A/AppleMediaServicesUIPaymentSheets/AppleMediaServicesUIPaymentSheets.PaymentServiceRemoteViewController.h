@interface AppleMediaServicesUIPaymentSheets.PaymentServiceRemoteViewController : NSRemoteViewController <AMSPaymentRemoteHostProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)shouldDismissViewWithReply:(id /* block */)a0;
- (void)shouldDisplayViewWithReply:(id /* block */)a0;

@end
