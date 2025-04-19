@class NSString, NSTimer, NSTrackingArea, NSDraggingSession, NSImage, CPKCharactersSectionView;
@protocol NSDraggingSource, CPKMouseEventDelegate, NSPasteboardWriting;

@interface CPKDraggableView : NSView <NSDraggingSource, CPKSelectable> {
    BOOL _selected;
}

@property (retain, nonatomic) NSTimer *hoveringTimer;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) struct CGPoint { double x; double y; } draggingOrigin;
@property (retain, nonatomic) NSDraggingSession *draggingSession;
@property (readonly, nonatomic) NSImage *draggingImage;
@property (readonly, nonatomic) id<NSPasteboardWriting> pasteboardWriter;
@property (weak, nonatomic) CPKCharactersSectionView *sectionView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } draggingFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (nonatomic) double highlightGap;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) id<CPKMouseEventDelegate> mouseEventDelegate;
@property (weak, nonatomic) id<NSDraggingSource> dragSourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)accessibilityValueDescription;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)hideTooltip;
- (id)tooltipString;
- (void)startHoveringTimerWithDuration:(double)a0;
- (BOOL)displayAsPlainText;
- (void)drawContentsForImageWithOuterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 innerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)pasteboardItemFont;
- (id)pasteboardItemString;
- (void)showTooltip;
- (void)stopHoveringTimer;

@end
