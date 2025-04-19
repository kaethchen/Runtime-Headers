@class FI_TShrinkToFitWindow, NSWindow, FI_TShrinkToFitController;

@interface FI_TShrinkToFitTextView : FI_TTextView {
    FI_TShrinkToFitWindow *_stfWindow;
    struct TNSWeakPtr<FI_TShrinkToFitController> { FI_TShrinkToFitController *fWeakObject; } _weakSTFController;
}

@property (retain, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxGlobalFrame;
@property (readonly, nonatomic) double srcGlobalBaseline;
@property (nonatomic) BOOL textGrowsUpwards;
@property (nonatomic) unsigned long long maxUniChars;
@property (weak, nonatomic) FI_TShrinkToFitController *stfController;
@property (nonatomic) long long maxNumLines;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setString:(id)a0;
- (id).cxx_construct;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)a0 withRecognizer:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)didChangeText;
- (void)doCommandBySelector:(SEL)a0;
- (double)firstBaselineOffsetFromTop;
- (BOOL)isEditing;
- (double)lastBaselineOffsetFromBottom;
- (void)quickLookWithEvent:(id)a0;
- (void)setConstrainedFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFont:(id)a0;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (void)startEditing;
- (double)calcGlobalBaselineFromTop;
- (void)configureAttributes;
- (void)configureSTFWindow;
- (struct pair<CGRect, double> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })lineFragmentAndBaselineForCharAtIndex:(unsigned long long)a0;
- (void)setMaxGlobalFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andGlobalBaseline:(double)a1;
- (void)stopEditing:(BOOL)a0;

@end
