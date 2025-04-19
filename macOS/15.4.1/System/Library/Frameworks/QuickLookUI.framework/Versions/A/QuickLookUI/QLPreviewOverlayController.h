@class NSTimer, NSString, NSArray, NSTrackingArea, CALayer, QLOverlayProgressButtonLayer, QLOverlayButtonLayer, QLOverlayView, NSObject, QLOverlayLoadingButtonLayer;
@protocol QLPreviewOverlayDataSource;

@interface QLPreviewOverlayController : NSObject <QLAccessibilityUIElementDelegate> {
    BOOL _active;
    BOOL _mouseOver;
    short _firstClick;
    unsigned long long _visibilityOptions;
    QLOverlayView *_overlayView;
    CALayer *_overlayLayer;
    NSTrackingArea *_overlayTrackingArea;
    QLOverlayProgressButtonLayer *_playButtonLayer;
    QLOverlayButtonLayer *_leftPageButtonLayer;
    QLOverlayLoadingButtonLayer *_rightPageButtonLayer;
    NSTimer *_progressTimer;
    BOOL _canExpand;
}

@property (readonly) NSArray *accessibilityChildren;
@property (readonly) BOOL useLayers;
@property (weak, nonatomic) NSObject<QLPreviewOverlayDataSource> *dataSource;
@property (readonly) BOOL isActive;
@property unsigned long long visibilityOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_defaultRolloverActivationDelay;
+ (id)keyPathsForValuesAffectingCanGoToNextPage;
+ (id)keyPathsForValuesAffectingCanGoToPreviousPage;
+ (id)keyPathsForValuesAffectingIsLoadingNextPage;
+ (double)overlayMinimumSupportedSize;
+ (unsigned long long)overlayTrackingAreaOptions;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeObservers;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)deactivate;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)windowWillClose:(id)a0;
- (BOOL)worksWhenModal;
- (void)_addObservers;
- (void)goToNextPage:(id)a0;
- (void)goToPreviousPage:(id)a0;
- (void)mouseEntered;
- (BOOL)mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 dequeue:(BOOL)a2;
- (void)mouseExited;
- (BOOL)canGoToNextPage;
- (BOOL)canGoToPreviousPage;
- (void)_removeOverlay;
- (BOOL)isLoadingNextPage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElementInParentSpace:(id)a0;
- (void)_cleanupAccessibilityForButtonLayer:(id)a0;
- (void)_createOverlay;
- (struct CGPoint { double x0; double x1; })_localPointFromDataSourceParent:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_mouseDownAtLocalPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 dequeue:(BOOL)a2;
- (void)_mouseEntered;
- (double)_rolloverActivationDelay;
- (void)_setShowOverlay:(BOOL)a0 dimmed:(BOOL)a1;
- (void)_setShowPlayButton:(BOOL)a0 canExpand:(BOOL)a1 showPageButtons:(BOOL)a2;
- (void)_setupAccessibilityForButtonLayer:(id)a0 withLabel:(id)a1 andIdentifier:(id)a2;
- (BOOL)_shouldDimOverlay;
- (BOOL)_shouldShowOverlay;
- (void)_updateMouseOver;
- (void)_updateOverlay;
- (void)_updateOverlayVisibility;
- (void)_updatePlayButton;
- (BOOL)accessibilityPerformPress:(id)a0;
- (id)accessibilityValueFor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElement:(id)a0;
- (BOOL)hasControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)previewWindowDidResizeFrame:(id)a0;
- (void)togglePlay:(id)a0;
- (void)updateOverlayFrame;

@end
