@class NSString, PXGHostingController, PXGHostingLayerVisibilityInfo, NSObject;
@protocol OS_dispatch_queue, PXGMutableHostingControllerPresenter;

@interface PXGHostingLayer : PXImageQueueLayer <PXGHostingLayerVisibilityInfoDelegate, PXGHostingControllerFrameObserver> {
    id<PXGMutableHostingControllerPresenter> _presenter;
}

@property (retain, nonatomic) PXGHostingController *hostingController;
@property (retain, nonatomic) PXGHostingLayerVisibilityInfo *visibilityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<OS_dispatch_queue> *hostingControllerObservationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)_updatePresenter;
- (void)hostingController:(id)a0 didRenderFrame:(id)a1;
- (void)hostingLayerVisibilityInfoDidChange:(id)a0;

@end
