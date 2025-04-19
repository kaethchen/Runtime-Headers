@class NSTextField, KHFrame, KHSelectionManager, KHLayoutView, NSTrackingArea;
@protocol KHTextViewEditingProtocol;

@interface KHTextView : NSTextView {
    struct CGPoint { double x; double y; } _lastOrigin;
    double _lastDelta;
    id _placementObserver;
    NSTrackingArea *_trackingArea;
    BOOL _updatingFontPanel;
}

@property (readonly, nonatomic) KHSelectionManager *selectionManager;
@property BOOL textIsDirty;
@property (retain) NSTextField *debugTextField;
@property (retain, nonatomic) KHFrame *textFrame;
@property (nonatomic) double drawingScale;
@property id<KHTextViewEditingProtocol> editingDelegate;
@property long long vAlignment;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preservedBounds;
@property BOOL useRealMetrics;
@property BOOL honorFlipped;
@property double nudgeY;
@property (retain) KHFrame *autoColorSource;
@property (readonly, nonatomic) KHLayoutView *enclosingLayoutView;

+ (id)defaultMenu;
+ (id)editingTextView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)checkTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 types:(unsigned long long)a1 options:(id)a2;
- (void)updateFontPanel;
- (void)_appWillTerminate:(id)a0;
- (void)_setFrameSize:(struct CGSize { double x0; double x1; })a0 forceScroll:(BOOL)a1;
- (id)acceptableDragTypes;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)changeColor:(id)a0;
- (void)commonInit;
- (void)didChangeText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTextCheckingResults:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 types:(unsigned long long)a2 options:(id)a3 orthography:(id)a4 wordCount:(long long)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)resignFirstResponder;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContinuousSpellCheckingEnabled:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHorizontalAlignment:(unsigned long long)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidAdditionalLayout:(BOOL)a1;
- (void)setTextColor:(id)a0;
- (void)setVerticalAlignment:(long long)a0;
- (void)tearDown;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setSelectedFont:(id)a0;
- (void)setKerning:(double)a0;
- (void)setLeading:(double)a0;
- (unsigned long long)trackingOptions;
- (void)setAttributeValue:(id)a0 forKey:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedRect;
- (void)_setupForEditing:(BOOL)a0;
- (void)cleanupColumns;
- (id)enclosingFrameView;
- (void)ensureCalendarCaptionFormat;
- (void)evaluateAutoColor;
- (void)getFrameInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })glyphRectForScale:(double)a0;
- (double)lastDelta;
- (void)setupColumnsAtScale:(double)a0;
- (BOOL)shouldHandlePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showFrameInspector:(id)a0;
- (void)showLayoutInspector:(id)a0;

@end
