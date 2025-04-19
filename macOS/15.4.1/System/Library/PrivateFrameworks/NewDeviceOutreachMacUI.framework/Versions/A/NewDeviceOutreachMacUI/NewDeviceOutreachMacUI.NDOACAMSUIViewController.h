@interface NewDeviceOutreachMacUI.NDOACAMSUIViewController : AMSUIWebViewController <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ warranty;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ deeplinkParams;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ isMultipleDevicePurchaseCall;
    void /* unknown type, empty encoding */ agsULUrl;
    void /* unknown type, empty encoding */ ulSalesURL;
    void /* unknown type, empty encoding */ purchaseAPIBody;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ presenter;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (id)initWith:(id)a0 serialNumber:(id)a1 source:(id)a2 agsULUrl:(id)a3 ulSalesURL:(id)a4 purchaseBody:(id)a5;
- (id)initWith:(id)a0 serialNumber:(id)a1 source:(id)a2 deeplinkParams:(id)a3;
- (id)initWith:(id)a0 serialNumber:(id)a1 source:(id)a2 isMultiCall:(BOOL)a3 agsULUrl:(id)a4 ulSalesURL:(id)a5 deeplinkParams:(id)a6 purchaseBody:(id)a7;

@end
