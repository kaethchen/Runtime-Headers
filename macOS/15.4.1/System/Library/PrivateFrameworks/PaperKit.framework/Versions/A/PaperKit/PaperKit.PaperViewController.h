@interface PaperKit.PaperViewController : NSViewController <PaperKit.HostXPCProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ extensionProxy;
    void /* unknown type, empty encoding */ extensionRequestQueueSuspended;
    void /* unknown type, empty encoding */ extensionRequestQueue;
    void /* unknown type, empty encoding */ lastReportedSafeAreaInsets;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostDelegateProxy;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ enableMath;
    void /* unknown type, empty encoding */ canvasContentMode;
    void /* unknown type, empty encoding */ paperDocumentInlineThumbnailsVisible;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)decryptData:(id)a0 reply:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)openLink:(id)a0;
- (void)paperDidFailToLoad:(id)a0;
- (void)paperDidSave;
- (void)receiveLiveStreamData:(id)a0;
- (void)receiveMulticastData:(id)a0;
- (void)reportMathExpressions:(id)a0;
- (void)reportPaperScroll;
- (void)reportingPaperBounds:(id)a0;

@end
