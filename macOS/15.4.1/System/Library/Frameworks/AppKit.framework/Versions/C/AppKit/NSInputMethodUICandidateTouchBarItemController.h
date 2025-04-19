@class NSInputMethodUICandidateLayoutTraits, NSInputMethodUIScrubberView, NSArray, NSInputMethodUICandidateItemLayout, NSViewController, NSTouchBarInputMethodCandidateList, NSTouchBarInputMethodCandidate;
@protocol NSInputMethodUICandidateControllerDelegate;

@interface NSInputMethodUICandidateTouchBarItemController : NSObject {
    NSInputMethodUIScrubberView *_view;
    NSViewController *_viewController;
}

@property (retain, nonatomic) NSInputMethodUIScrubberView *scrubberView;
@property (nonatomic) double annotationFontSize;
@property (nonatomic) long long annotationType;
@property (weak, nonatomic) id<NSInputMethodUICandidateControllerDelegate> delegate;
@property (nonatomic) double fixedWidth;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSInputMethodUICandidateItemLayout *itemLayout;
@property (retain, nonatomic) NSInputMethodUICandidateLayoutTraits *layoutTraits;
@property (nonatomic) unsigned long long numberOfFixedWidthCandidates;
@property (retain, nonatomic) NSTouchBarInputMethodCandidate *selectedCandidate;
@property (nonatomic) BOOL showsChevron;
@property (nonatomic) long long style;
@property (nonatomic) double touchBarItemWidth;
@property (readonly, nonatomic) NSArray *visibleCandidates;
@property (readonly, nonatomic) NSViewController *viewController;
@property (retain, nonatomic) NSTouchBarInputMethodCandidateList *candidateList;

- (id)init;
- (void).cxx_destruct;
- (id)fittingCandidatesForCandidates:(id)a0;
- (double)candidateBarWidth;
- (id)candidateItemForCandidate:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)hide;
- (double)precomputedWidthForChineseStringWithLength:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })preferredSizeForItem:(id)a0;
- (void)scrubber:(id)a0 didFocusCandidate:(id)a1;
- (void)scrubber:(id)a0 didSelectCandidate:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrubberFrame;
- (void)setCandidateList:(id)a0 selectedCandidate:(id)a1;
- (void)showCandidates;
- (void)updateItemLayout;
- (void)updateLayout;
- (void)updateLayoutConstraints;
- (void)updateSizeAndLayout;
- (void)updateVisualElements;

@end
