@class OS_dispatch_queue;

@interface _TtCC12PhotosUICore28HostedContentTextureProviderP33_F5D945FBA6E3B4F46708FFD106DBF90E24HostingControllerRequest : _TtCs12_SwiftObject <PXGHostingControllerFrameObserver> {
    void /* unknown type, empty encoding */ requestID;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ requestQueue;
    void /* unknown type, empty encoding */ textureProvider;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ requestQueue_isCanceled;
}

@property (nonatomic, readonly) OS_dispatch_queue *hostingControllerObservationQueue;

- (void)hostingController:(id)a0 didRenderFrame:(id)a1;

@end
