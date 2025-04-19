@class NSError;

@interface ABCertificatePanelController : NSObject {
    id /* block */ _completionHandler;
}

@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)message;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (id)failingURL;
- (struct __SecTrust { } *)trust;
- (id)cancelButtonTitle;
- (id)certificatePanel;
- (void)allowCertificate;
- (void)certificateTrustSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)continueButtonTitle;
- (BOOL)isPresentableError;

@end
