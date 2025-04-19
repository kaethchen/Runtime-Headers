@protocol TKTonePickerViewDelegate;

@interface TKTonePickerView : NSView {
    BOOL _isPerformingBlockAffectingBaselineOffsetFromBottom;
}

@property (weak, nonatomic) id<TKTonePickerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (double)baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_performBlockAffectingBaselineOffsetFromBottom:(id /* block */)a0;
- (id)_viewForBaselineLayout;
- (id)_viewForSizingTonePickerView;

@end
