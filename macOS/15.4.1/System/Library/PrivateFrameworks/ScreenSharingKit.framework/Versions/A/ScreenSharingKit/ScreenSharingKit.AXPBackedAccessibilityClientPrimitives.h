@class NSData, NSError;

@interface ScreenSharingKit.AXPBackedAccessibilityClientPrimitives : NSObject <AXPTranslationTransportCancellable, AXPTranslationTransportDelegate> {
    void /* unknown type, empty encoding */ outgoingAccessibilityMessagesStream;
    void /* unknown type, empty encoding */ outgoingAccessibilityMessagesContinuation;
    void /* unknown type, empty encoding */ axpTransportDataHandler;
    void /* unknown type, empty encoding */ acessibilityCaptureView;
    void /* unknown type, empty encoding */ axpManager;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityTranslationTransportAddReceiveDataHandler:(id /* block */)a0;
- (void)accessibilityTranslationTransportSendData:(NSData *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)accessibilityTranslationTransportCancel;

@end
