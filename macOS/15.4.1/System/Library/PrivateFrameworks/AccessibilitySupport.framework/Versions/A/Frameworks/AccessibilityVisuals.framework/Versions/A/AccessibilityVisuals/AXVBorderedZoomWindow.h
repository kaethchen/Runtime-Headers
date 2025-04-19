@class NSString, AXVOverlayWindow, AXVBorderedLayer, NSColor;
@protocol AXVBorderedZoomWindowDelegate;

@interface AXVBorderedZoomWindow : AXVCGMagicZoomWindow <AXEEventTapListener>

@property (class, readonly, nonatomic) NSColor *_resizeModeWindowBackgroundColor;
@property (class, readonly, nonatomic) NSColor *_resizeModeOKButtonBackgroundColor;
@property (class, readonly, nonatomic) NSColor *_resizeModeOKButtonMouseOverBackgroundColor;
@property (class, readonly, nonatomic) NSColor *_resizeModeOKButtonMouseDownBackgroundColor;
@property (class, readonly, nonatomic) AXVBorderedZoomWindow *reservedSystemZoomWindow0;
@property (class, readonly, nonatomic) AXVBorderedZoomWindow *reservedSystemZoomWindow1;

@property (retain, nonatomic) AXVOverlayWindow *_overlayWindow;
@property (retain, nonatomic) AXVBorderedLayer *_borderedLayer;
@property (retain, nonatomic) AXVBorderedLayer *_resizeModeOKButtonLayer;
@property (nonatomic, setter=_setInResizeMode:) BOOL _inResizeMode;
@property (copy, nonatomic) id /* block */ _customPlacementBlock;
@property (nonatomic) struct CGPoint { double x; double y; } _mouseLocationAtDragStart;
@property (nonatomic) struct CGPoint { double x; double y; } _previousDragMouseLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _zoomWindowFrameAtDragStart;
@property (nonatomic) unsigned long long _mouseOverRegion;
@property (nonatomic) unsigned long long _mouseDownRegion;
@property (weak, nonatomic) id<AXVBorderedZoomWindowDelegate> delegate;
@property (nonatomic) BOOL showBorder;
@property (nonatomic) unsigned long long borderStyle;
@property (nonatomic) double borderThickness;
@property (readonly, nonatomic) double totalBorderThickness;
@property (copy, nonatomic) NSColor *borderColor;
@property (nonatomic) double highlightRatio;
@property (copy, nonatomic) NSColor *highlightColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long allowedResizeTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_draggingAllowedForMouseOverRegion:(unsigned long long)a0 allowedResizeTargets:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameFromOriginalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mouseDownRegion:(unsigned long long)a1 dragDelta:(struct CGPoint { double x0; double x1; })a2 minimumSize:(struct CGSize { double x0; double x1; })a3;
+ (int)_mouseCursorTypeForMouseOverRegion:(unsigned long long)a0 mouseButtonDown:(BOOL)a1;
+ (unsigned long long)_mouseOverRegionForZoomWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resizeModeOKButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mouseLocation:(struct CGPoint { double x0; double x1; })a2 resizeHandleHalfThickness:(double)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (struct __CGEvent { } *)eventTapManager:(id)a0 activelyTappedMouseEvent:(id)a1 cgEvent:(struct __CGEvent { } *)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (void)_exitResizeMode;
- (void)_setResizeModeOKButtonBackgroundColor:(id)a0;
- (void)enterResizeModeWithCustomPlacementBlock:(id /* block */)a0;
- (void)frameDidChange;
- (id)initWithReferenceWindow:(id)a0;
- (id)initWithZoomWindowNumber:(long long)a0 referenceWindow:(id)a1;
- (void)levelDidChange;
- (void)setMaxZoomedWindowLevel:(long long)a0;

@end
