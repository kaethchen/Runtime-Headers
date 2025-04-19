@class NSView, NSString, NSToolbarItem;

@interface NSToolbarButton : NSButton {
    NSToolbarItem *_item;
    SEL _primaryAction;
    SEL _alternateAction;
    NSString *_primaryToolTip;
    NSString *_alternateToolTip;
    NSString *_primaryTitle;
    NSString *_alternateTitle;
    BOOL _showingRollover;
}

@property BOOL showingRollover;
@property (weak) NSView *focusRingView;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)_item;
- (void)_updateButtonStyle;
- (void)_updateImageScale;
- (void)_updateTitleAndLabelConfiguration;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)cachedDrawingImage;
- (id)designatedFocusRingView;
- (id)initWithItem:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateCachedDrawingImage;
- (BOOL)refusesFirstResponder;
- (BOOL)sendAction;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)setBezelColor:(id)a0;
- (void)setBordered:(BOOL)a0;

@end
