@class NSView, NSScrollView, NSArray, IMKCandidateController, NSMutableDictionary, IMKUITextField, IMKDocumentView, NSMutableArray, IMKCandidateUIString;

@interface IMKCandidateView : NSView {
    unsigned long long _topVisibleLine;
}

@property (readonly, nonatomic) NSView *accessibilitySizeComparisonView;
@property (retain, nonatomic) IMKDocumentView *documentView;
@property (retain, nonatomic) NSMutableArray *existingLines;
@property (retain, nonatomic) NSMutableDictionary *existingLineViews;
@property (retain, nonatomic) IMKUITextField *messageTextField;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *currentLinesWithSelectionKeys;
@property (retain, nonatomic) NSMutableDictionary *selectionKeyToCandidateMapping;
@property (nonatomic) BOOL canScroll;
@property (nonatomic) IMKCandidateController *candidateController;
@property (nonatomic) struct CGSize { double width; double height; } documentSize;
@property (nonatomic) double lineThickness;
@property (retain, nonatomic) IMKCandidateUIString *message;
@property (nonatomic) BOOL respondsToMouseInteraction;
@property (readonly, nonatomic) BOOL showsLegacyScroller;
@property (readonly, nonatomic) double scrollerThickness;
@property (nonatomic) unsigned long long topVisibleLine;
@property (readonly, nonatomic) NSArray *visibleCandidatesFromTopLine;
@property (readonly, nonatomic) NSArray *visibleLines;
@property (readonly, nonatomic) NSArray *visibleLineViews;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)animateChanges;
- (void)flashScrollers;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)visibleCandidates;
- (void)scrollToTop;
- (void)setUpScrollView;
- (void)resetCandidates;
- (id)UIElementFromDefinitionUnit:(id)a0;
- (id)UIElementsFromDefinitionUnits:(id)a0;
- (void)addLines:(id)a0;
- (id)allCandidates;
- (BOOL)hasRubberbandEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollable:(BOOL)a1;
- (id)layoutUnitsForLine:(unsigned long long)a0;
- (id)lineViewWithNumber:(unsigned long long)a0;
- (id)linesToAddFromNew:(id)a0 existing:(id)a1;
- (id)linesToRemoveFromNew:(id)a0 existing:(id)a1;
- (void)removeCurrentSelectionKeys;
- (void)scrollToLineNumber:(unsigned long long)a0;
- (void)scrollViewDidUpdateBounds;
- (id)selectedCandidateView;
- (void)setDocumentSize:(struct CGSize { double x0; double x1; })a0 resetCandidates:(BOOL)a1;
- (void)setHasRubberBandEffect:(BOOL)a0;
- (void)setHorizontalSelectionKeysWithHighlighted:(BOOL)a0;
- (void)setSelectionKeysForLineView:(id)a0 startingWith:(unsigned long long)a1;
- (void)setVerticalSelectionKeys;
- (void)setVerticallyAlignedSelectionKeys;
- (id)unitForSelectionKey:(id)a0;
- (void)updateLines;
- (id)viewForUniqueKey:(id)a0;
- (id)visibleAreasForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
