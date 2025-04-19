@class NSView;

@interface _MKCalloutDetailWrapperView : NSView {
    NSView *_view;
}

+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (double)firstBaselineOffsetFromTop;
- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;

@end
