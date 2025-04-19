@class PXPixelBufferView, NSObject, PXGHostingController;
@protocol OS_dispatch_queue, PXGMutableHostingControllerPresenter;

@interface PXGHostingView : NSView <PXGHostingControllerFrameObserver> {
    id<PXGMutableHostingControllerPresenter> _presenter;
}

@property (readonly, nonatomic) PXPixelBufferView *pixelBufferView;
@property (retain, nonatomic) PXGHostingController *hostingController;
@property (readonly) NSObject<OS_dispatch_queue> *hostingControllerObservationQueue;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)_updatePresenter;
- (void)hostingController:(id)a0 didRenderFrame:(id)a1;

@end
