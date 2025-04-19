@class IMKUIScrubberView, IMKUICandidateLayoutTraits, IMKUICandidateLineLayout, NSArray, IMKCandidateListDictionary, NSString, IMKCandidate, IMKUICandidateLineLayoutIterator, IMKUICandidateItemLayout, NSViewController;
@protocol IMKUICandidateControllerDelegate;

@interface IMKUICandidateTouchBarItemController : NSObject <IMKUIAbstractCandidateController, IMKUICandidateLayoutDelegate, NSScrubberDelegate> {
    IMKCandidate *_selectedCandidate;
    IMKUIScrubberView *_view;
    NSViewController *_viewController;
}

@property (nonatomic) long long lineIndex;
@property (retain, nonatomic) IMKUICandidateLineLayout *lineLayout;
@property (retain, nonatomic) IMKUICandidateLineLayoutIterator *lineLayoutIterator;
@property (retain, nonatomic) IMKUIScrubberView *scrubberView;
@property (nonatomic) double annotationFontSize;
@property (nonatomic) long long annotationType;
@property (nonatomic) double fixedWidth;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) IMKUICandidateItemLayout *itemLayout;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (nonatomic) unsigned long long numberOfFixedWidthCandidates;
@property (retain, nonatomic) IMKCandidate *selectedCandidate;
@property (nonatomic) BOOL showsChevron;
@property (nonatomic) long long style;
@property (readonly, nonatomic) NSArray *visibleCandidates;
@property (readonly, nonatomic) NSViewController *viewController;
@property (retain, nonatomic) IMKCandidateListDictionary *candidateGroups;
@property (weak, nonatomic) id<IMKUICandidateControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fittingCandidatesForCandidates:(id)a0;
- (double)candidateBarWidth;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)hide;
- (double)precomputedWidthForChineseStringWithLength:(unsigned long long)a0;
- (void)scrubber:(id)a0 didFocusCandidate:(id)a1;
- (void)scrubber:(id)a0 didSelectCandidate:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrubberFrame;
- (void)showCandidates;
- (void)updateItemLayout;
- (void)updateLayout;
- (void)updateLayoutConstraints;
- (void)updateVisualElements;
- (void)clearPasteboard;
- (void)addCandidatesToPasteboard;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (void)didShowCandidates;
- (struct CGSize { double x0; double x1; })preferredSizeForItem:(id)a0 layout:(id)a1;
- (void)willShowCandidates;

@end
