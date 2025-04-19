@class NSView, AXVBorderedZoomWindow, SOGridView;

@interface SOGridWindowController : NSWindowController {
    unsigned long long _startingNumber;
    struct CGPath { } *_defaultCutoutPath;
    BOOL _gridActive;
}

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) SOGridView *gridView;
@property (retain, nonatomic) SOGridView *prevGridView;
@property (retain, nonatomic) AXVBorderedZoomWindow *zoomWindow;
@property (retain, nonatomic) SOGridView *zoomGridView;
@property BOOL minimumSize;
@property (readonly) unsigned long long gridLevel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_reset;
- (id)initWithScreen:(id)a0;
- (double)_computeZoomFactorForDimension:(double)a0;
- (id)labeledElements;
- (void)_animateInWindow;
- (void)_computeNextGridViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeSquareFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_containsGridNumber:(unsigned long long)a0;
- (BOOL)_containsNumber:(unsigned long long)a0;
- (BOOL)_needsZoomForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_orderFrontWindowsForGridView:(id)a0;
- (void)_orderOutWindowsForGridView:(id)a0;
- (void)_showZoomWindowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_synchronizeControllerState;
- (BOOL)_zoomActive;
- (void)drillAtNumber:(unsigned long long)a0;
- (void)hideWindowContents;
- (unsigned long long)maximumGridCellNumber;
- (unsigned long long)minimumGridCellNumber;
- (void)showGridForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startingNumber:(unsigned long long)a1;
- (void)showGridWithStartingNumber:(unsigned long long)a0;

@end
