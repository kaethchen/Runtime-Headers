@class OS_dispatch_queue;

@interface PhotosUICore.PXGHostingControllerNextFrameObserver : _TtCs12_SwiftObject <PXGHostingControllerFrameObserver> {
    void /* unknown type, empty encoding */ afterNextFrame;
}

@property (nonatomic, readonly) OS_dispatch_queue *hostingControllerObservationQueue;

- (void)hostingController:(id)a0 didRenderFrame:(id)a1;

@end
