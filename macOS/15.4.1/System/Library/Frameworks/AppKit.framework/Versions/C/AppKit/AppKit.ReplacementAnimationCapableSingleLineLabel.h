@interface AppKit.ReplacementAnimationCapableSingleLineLabel : NSView {
    void /* unknown type, empty encoding */ _attributedText;
    void /* unknown type, empty encoding */ _segmentLayout;
    void /* unknown type, empty encoding */ outgoingSegmentLayouts;
    void /* unknown type, empty encoding */ firstBaselineOffsetFromTopCache;
}

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
