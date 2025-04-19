@class NSString, QLIndexSheetView, QLControlsController;
@protocol QLIndexSheetDelegate;

@interface QLIndexSheetController : NSObject <QLIndexSheetViewDelegate, QLControlsDelegate> {
    QLIndexSheetView *_indexSheetView;
}

@property (weak) id<QLIndexSheetDelegate> delegate;
@property (weak) QLControlsController *controlsController;
@property (readonly) int status;
@property (readonly) QLIndexSheetView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingStatus;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)_setup;
- (void)goToNextPage:(id)a0;
- (void)goToPreviousPage:(id)a0;
- (void)_updateControls;
- (void)_activateControls;
- (BOOL)_controlsActivated;
- (void)_deactivateControls;
- (id)_indexSheetTransitionLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)activateIndexSheetWithAnimation:(BOOL)a0 forItemAtIndex:(unsigned long long)a1;
- (void)deactivateIndexSheetWithAnimation:(BOOL)a0 forItemAtIndex:(unsigned long long)a1;
- (void)indexSheetDidActivate:(id)a0;
- (void)indexSheetDidDeactivate:(id)a0;
- (void)indexSheetWillActivate:(id)a0;
- (void)indexSheetWillDeactivate:(id)a0;
- (void)invalidateContentsOfThumbnailLayerForIndex:(unsigned long long)a0;
- (void)setPreviewItems:(id)a0 withVisibleIndex:(long long)a1;

@end
