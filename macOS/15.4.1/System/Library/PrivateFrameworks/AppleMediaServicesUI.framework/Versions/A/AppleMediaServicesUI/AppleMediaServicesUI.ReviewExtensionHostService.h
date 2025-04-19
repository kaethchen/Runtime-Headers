@interface AppleMediaServicesUI.ReviewExtensionHostService : NSObject <AppleMediaServicesUI.ReviewExtensionHostInterface> {
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ reviewContext;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dismissContinuation;
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)dismissWithData:(id)a0 error:(id)a1;

@end
