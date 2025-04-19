@class NSString, NSImage, NSTrackingArea, NSColor;
@protocol NSRolloverButtonDelegate;

@interface NSRolloverButton : NSButton <NSViewToolTipOwner> {
    NSTrackingArea *_trackingArea;
    BOOL _mouseOver;
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
}

@property (nonatomic) BOOL usesCustomAlignmentRectInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customAlignmentRectInsets;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *rolloverColor;
@property (retain, nonatomic) NSColor *alternateColor;
@property (retain, nonatomic) NSColor *rolloverBackgroundColor;
@property (retain, nonatomic) NSColor *alternateBackgroundColor;
@property (retain, nonatomic) NSImage *rolloverImage;
@property (retain, nonatomic) NSImage *focusRingMask;
@property (retain, nonatomic) NSString *toolTipString;
@property (retain, nonatomic) NSString *alternateToolTipString;
@property (weak, nonatomic) id<NSRolloverButtonDelegate> delegate;
@property (nonatomic) BOOL usesRolloverAppearanceWhenFirstResponder;
@property (nonatomic) BOOL redrawOnMouseEnteredAndExited;
@property (nonatomic) BOOL useRolloverAppearanceNow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_finishInitialization;
- (id)_modifierBackgroundColor;
- (id)_modifierColor;
- (void)_setAttributes;
- (BOOL)accessibilityPerformPress;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)shouldUseRolloverAppearance;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)a0;
- (void)updateTrackingAreas;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;

@end
