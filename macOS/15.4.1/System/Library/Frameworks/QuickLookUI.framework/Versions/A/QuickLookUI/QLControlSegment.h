@class NSControl, NSString, NSImage, QLControlCommon, QLControlSegmentedControl;

@interface QLControlSegment : NSObject <QLControl> {
    NSImage *_originalImage;
}

@property (retain) QLControlCommon *common;
@property (retain) QLControlSegmentedControl *segmentedControl;
@property unsigned long long segmentIndex;
@property (copy) id /* block */ menuProvider;
@property (readonly) NSControl *control;
@property (retain) NSImage *image;
@property (copy) NSString *title;
@property (copy) NSString *keyEquivalent;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy) NSString *controlIdentifier;
@property int style;
@property int segmentedStyle;
@property BOOL alternate;
@property BOOL sendActionOnMouseDown;
@property double tooltipMargin;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isShown) BOOL shown;
@property (readonly) NSImage *originalImage;
@property (copy) NSString *toolTip;
@property (getter=isHidden) BOOL hidden;
@property SEL action;
@property (weak) id target;
@property double preferredButtonWidth;
@property double buttonPadding;
@property unsigned long long trackingMode;
@property (nonatomic) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)_updateStyle;
- (void)_controlPressedWithSender:(id)a0;
- (void)_updateTooltip;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andSegmentedControl:(id)a1;

@end
