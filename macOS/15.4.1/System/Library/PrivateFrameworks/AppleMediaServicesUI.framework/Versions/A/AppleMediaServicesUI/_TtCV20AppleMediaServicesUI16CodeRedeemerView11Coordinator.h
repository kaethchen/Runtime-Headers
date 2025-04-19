@interface _TtCV20AppleMediaServicesUI16CodeRedeemerView11Coordinator : NSObject <AMSUICodeRedeemerViewControllerDelegate> {
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void).cxx_destruct;
- (void)codeRedeemer:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemer:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemer:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemerDidDismiss:(id)a0;
- (void)codeRedeemerDidFadeStatus:(id)a0;
- (void)codeRedeemerDidFindBox:(id)a0;
- (void)codeRedeemerDidStart:(id)a0;
- (void)codeRedeemerWillFadeStatus:(id)a0;

@end
