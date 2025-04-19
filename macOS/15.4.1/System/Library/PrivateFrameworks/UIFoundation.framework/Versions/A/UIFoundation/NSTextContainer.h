@class NSTextViewportLayoutController, NSArray, NSView, NSDictionary, NSTextView, NSLayoutManager, NSTextLayoutManager;
@protocol NSTextContainerView;

@interface NSTextContainer : NSObject <NSTextLayoutOrientationProvider, NSSecureCoding> {
    NSLayoutManager *_layoutManager;
    NSView<NSTextContainerView> *_textView;
    struct CGSize { double width; double height; } _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    struct __tcFlags { unsigned char widthTracksTextView : 1; unsigned char heightTracksTextView : 1; unsigned char observingFrameChanges : 1; unsigned char lineBreakMode : 4; unsigned char oldAPI : 1; unsigned char _reserved : 8; } _tcFlags;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    struct CGPath { } *_cachedBoundingPath;
    struct __CFArray { } *_cachedClippingAttributes;
    struct __CFArray { } *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
    BOOL _textViewSupportsAdaptiveColor;
    BOOL _textViewSupportsDowngrade;
    BOOL _textViewHasDefaultParagraphStyle;
    BOOL _textViewHasLinkTextAttributes;
    BOOL _textViewHasHighlightAttributes;
    NSTextViewportLayoutController *_textViewportLayoutController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property NSLayoutManager *layoutManager;
@property (copy) NSArray *exclusionPaths;
@property (weak) NSTextView *textView;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property struct CGSize { double x0; double x1; } size;
@property unsigned long long lineBreakMode;
@property double lineFragmentPadding;
@property unsigned long long maximumNumberOfLines;
@property (readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property BOOL widthTracksTextView;
@property BOOL heightTracksTextView;
@property (readonly) long long layoutOrientation;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultParagraphStyle;
- (id)renderingColorForDocumentColor:(id)a0;
- (void)_commonInit;
- (void)_resizeAccordingToTextView:(id)a0;
- (struct CGSize { double x0; double x1; })containerSize;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)invalidateTextContainerOrigin;
- (long long)layoutOrientation;
- (id)linkTextAttributes;
- (id)selectedTextAttributes;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)setLayoutOrientation:(long long)a0;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (id)textHighlightRenderingAttributesForAttributes:(id)a0;
- (id)textViewportLayoutController;
- (void)_containerTextViewFrameChanged:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView_iOS:(id)a0;
- (BOOL)_containerObservesTextViewFrameChanges;
- (BOOL)_hasLayoutManager:(id)a0;
- (void)_setContainerObservesTextViewFrameChanges:(BOOL)a0;
- (unsigned long long)_textLength;
- (BOOL)_textViewAllowsMigratingToLayoutManager;
- (id)attributesForExtraLineFragment;
- (void)coordinateAccess:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1 writingDirection:(long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sweepDirection:(unsigned long long)a1 movementDirection:(unsigned long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)markedTextAttributesAtCharacterIndex:(long long)a0 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (double)minimumLineFragmentWidth;
- (void)replaceLayoutManager:(id)a0;
- (void)setAttributesForExtraLineFragment:(id)a0;
- (void)setMinimumLineFragmentWidth:(double)a0;
- (void)setTextLayoutManager:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView_macOS:(id)a0;

@end
