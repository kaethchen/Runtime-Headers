@class OS_dispatch_queue;

@interface PhotosUICore.TungstenFirstFrameObserver : _TtCs12_SwiftObject <PXGHostingControllerFrameObserver> {
    void /* unknown type, empty encoding */ __hostingController;
    void /* unknown type, empty encoding */ __didRenderFirstFrame;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) OS_dispatch_queue *hostingControllerObservationQueue;

- (void)hostingController:(id)a0 didRenderFrame:(id)a1;

@end
