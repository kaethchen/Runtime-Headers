@interface BrowserEngineKit.BEMediaEnvironment : NSObject {
    void /* unknown type, empty encoding */ inner;
}

- (id)init;
- (void).cxx_destruct;
- (id)createXPCRepresentation;
- (BOOL)activateWithError:(id *)a0;
- (BOOL)suspendWithError:(id *)a0;
- (id)initWithWebPageURL:(id)a0;
- (id)initWithXPCRepresentation:(id)a0 error:(id *)a1;
- (id)makeCaptureSessionWithError:(id *)a0;

@end
