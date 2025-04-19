@class PXZoomablePhotosViewModel, NSObject;
@protocol PXZoomablePhotosInteractionDelegate, PXAnonymousView;

@interface PXZoomablePhotosInteraction : NSObject {
    double _currentMagnifyEventScale;
    id _eventMonitor;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (weak, nonatomic) NSObject<PXAnonymousView> *view;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)_magnifyWithEvent:(id)a0;
- (BOOL)_pinchInteractionShouldBegin;
- (BOOL)handleTapOnAssetReference:(id)a0;
- (id)initWithZoomablePhotosViewModel:(id)a0;

@end
