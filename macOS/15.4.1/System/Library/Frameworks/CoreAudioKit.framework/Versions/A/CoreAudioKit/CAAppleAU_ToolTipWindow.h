@class CACustomToolTipView, NSWindow;

@interface CAAppleAU_ToolTipWindow : NSWindow {
    CACustomToolTipView *toolTipView;
    NSWindow *itsWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } constrainedArea;
}

@property int anchorSide;
@property struct CGPoint { double x; double y; } anchorPoint;

- (void)dealloc;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)isExcludedFromWindowsMenu;
- (void)mouseDown:(id)a0;
- (void)parameterPopupMenuValueChanged:(id)a0;
- (void)parameterTextFieldValueChanged:(id)a0;
- (void)bindIndexedParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 stringValues:(id)a4;
- (void)bindParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 unitLabel:(id)a4;
- (void)bindParameter:(unsigned int)a0 label:(id)a1 minValue:(float)a2 maxValue:(float)a3 unitLabel:(id)a4 editable:(BOOL)a5;
- (id)initWithWindow:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setLabel:(id)a0 forParameter:(unsigned int)a1;
- (void)toolTipViewSizeChanged:(id)a0;
- (void)tooltipTextBeganEditing:(id)a0;
- (void)tooltipTextEndedEditing:(id)a0;
- (void)updateParameter:(unsigned int)a0 value:(float)a1;
- (void)updateWindowPosition;

@end
