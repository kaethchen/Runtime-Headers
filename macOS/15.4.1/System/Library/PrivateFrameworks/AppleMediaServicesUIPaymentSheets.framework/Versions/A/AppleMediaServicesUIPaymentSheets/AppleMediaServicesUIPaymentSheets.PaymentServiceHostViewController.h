@interface AppleMediaServicesUIPaymentSheets.PaymentServiceHostViewController : NSViewController {
    void /* unknown type, empty encoding */ remoteServiceProxy;
    void /* unknown type, empty encoding */ remoteViewController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)requestRemoteViewControllerWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestXPCListenerEndpointWithCompletionHandler:(id /* block */)a0;

@end
