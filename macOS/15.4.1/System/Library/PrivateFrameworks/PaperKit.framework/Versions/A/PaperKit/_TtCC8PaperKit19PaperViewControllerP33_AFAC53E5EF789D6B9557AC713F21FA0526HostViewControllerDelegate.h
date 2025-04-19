@interface _TtCC8PaperKit19PaperViewControllerP33_AFAC53E5EF789D6B9557AC713F21FA0526HostViewControllerDelegate : NSObject <_EXHostViewControllerDelegate, PaperKit.HostXPCProtocol> {
    void /* unknown type, empty encoding */ viewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)decryptData:(id)a0 reply:(id /* block */)a1;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)openLink:(id)a0;
- (void)paperDidFailToLoad:(id)a0;
- (void)paperDidSave;
- (void)receiveLiveStreamData:(id)a0;
- (void)receiveMulticastData:(id)a0;
- (void)reportMathExpressions:(id)a0;
- (void)reportPaperScroll;
- (void)reportingPaperBounds:(id)a0;

@end
