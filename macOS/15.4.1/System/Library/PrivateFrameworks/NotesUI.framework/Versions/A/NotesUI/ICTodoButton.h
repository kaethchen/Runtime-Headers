@class NSImageView, ICTrackedParagraph, NSTrackingArea, NSLayoutConstraint, NSColor;
@protocol ICTodoButtonDragDelegate;

@interface ICTodoButton : NSButton

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultImageSize;

@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (nonatomic) BOOL trackedParagraphIsRTL;
@property (nonatomic) BOOL useConstraintBasedRendering;
@property (retain) NSImageView *undoneImageView;
@property (retain) NSImageView *doneImageView;
@property (retain) NSTrackingArea *cursorTrackingArea;
@property (retain, nonatomic) NSLayoutConstraint *doneEdgeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoneEdgeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *doneWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *doneHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoneWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoneHeightConstraint;
@property (nonatomic, getter=isDone) BOOL done;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (copy, nonatomic) NSColor *highlightColor;
@property (copy, nonatomic) NSColor *overrideTintColor;
@property (nonatomic) double zoomFactor;
@property (weak, nonatomic) id<ICTodoButtonDragDelegate> dragDelegate;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)commonInit;
- (void)cursorUpdate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)updateTintColor;
- (id)initWithZoomFactor:(double)a0;
- (void)accentColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomFactor:(double)a1;
- (void)setDone:(BOOL)a0 animated:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftToRight:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeForImage;
- (void)trackedParagraphDidChange;
- (void)updateEdgeConstraints;
- (void)updateImagesAnimated:(BOOL)a0;
- (void)updateSizeConstraints;
- (void)wasPressed;
- (void)zoomFactorDidChange;

@end
