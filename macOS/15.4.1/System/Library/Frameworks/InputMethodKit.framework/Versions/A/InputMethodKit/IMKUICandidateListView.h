@class NSAttributedString, NSArray, IMKUIScrollView, IMKUICandidateCollectionDocumentView, NSColor, IMKUICandidateGroupView, IMKUITextField, IMKUIAbstractCandidateLayout, IMKUICandidateLayoutTraits, NSString, NSDictionary, NSMutableDictionary;
@protocol IMKUICandidateAccessibilityDelegate, IMKUICandidateItemViewHandling, IMKUICandidateListViewState;

@interface IMKUICandidateListView : NSVisualEffectView <NSAccessibilityList>

@property (nonatomic) BOOL expandedContent;
@property (retain, nonatomic) IMKUICandidateGroupView *groupView;
@property (retain, nonatomic) NSArray *linesToShow;
@property (copy, nonatomic) NSAttributedString *noCandidatesAttributedString;
@property (retain, nonatomic) IMKUITextField *noCandidatesTextField;
@property (nonatomic) BOOL showsNoCandidatesMessage;
@property (retain, nonatomic) IMKUIScrollView *scrollView;
@property (weak, nonatomic) id<IMKUICandidateAccessibilityDelegate> accessibilityController;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) IMKUIAbstractCandidateLayout *candidateLayout;
@property (weak, nonatomic) id<IMKUICandidateItemViewHandling> delegate;
@property (retain, nonatomic) IMKUICandidateCollectionDocumentView *documentView;
@property (nonatomic) struct CGSize { double width; double height; } extraSize;
@property (nonatomic) unsigned long long firstLine;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (copy, nonatomic) NSString *noCandidatesMessage;
@property (retain, nonatomic) NSDictionary *noCandidatesMessageAttributes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } noCandidatesMessageSize;
@property (retain, nonatomic) NSMutableDictionary *numberToLineMapping;
@property (readonly, nonatomic) BOOL showsGroups;
@property (nonatomic) BOOL showsScrollBars;
@property (weak, nonatomic) id<IMKUICandidateListViewState> stateDelegate;
@property (readonly, nonatomic) NSArray *visibleLineIndices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (long long)accessibilityOrientation;
- (id)accessibilityRows;
- (id)accessibilitySelectedChildren;
- (id)accessibilityTitle;
- (id)accessibilityVisibleChildren;
- (BOOL)isAccessibilityEnabled;
- (void)setAccessibilitySelectedChildren:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateScrollers;
- (void)updateGroupView;
- (BOOL)viewNeedsToExpandWithFirstLine:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertedFrameForCandidateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateViewBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentViewFrameWithCandidateLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtIndex:(unsigned long long)a0 groupHeaderThickness:(double)a1 sizeAllowanceForScrollers:(struct CGSize { double x0; double x1; })a2;
- (id)groupTitleForLineWithIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })groupViewFrameWithVisibility:(BOOL)a0;
- (void)removeAllLines;
- (void)removeTrailingViews;
- (void)scrollViewDidUpdateBounds;
- (struct CGSize { double x0; double x1; })sizeAllowanceForScrollers;
- (void)updateViewBoundsInternal;
- (id)viewForLineWithIndex:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)visibleAreasForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
