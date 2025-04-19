@class NSArray, NSMutableDictionary, NSString, IMKUICandidateLayoutTraits, IMKUIDelimiter;
@protocol IMKUICandidateAccessibilityDelegate, IMKUICandidateItemViewHandling;

@interface IMKUICandidateBarView : NSView <NSAccessibilityList>

@property (retain, nonatomic) NSArray *candidateItems;
@property (retain, nonatomic) NSMutableDictionary *itemToViewMapping;
@property (retain, nonatomic) IMKUIDelimiter *bottomLine;
@property (weak, nonatomic) id<IMKUICandidateAccessibilityDelegate> accessibilityController;
@property (nonatomic) double candidateItemMargin;
@property (weak, nonatomic) id<IMKUICandidateItemViewHandling> delegate;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (nonatomic) BOOL showsBottomLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isFlipped;
- (void)setAccessibilitySelectedChildren:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(id)a0;
- (id)itemViewForCandidate:(id)a0;
- (id)itemViewForItem:(id)a0;
- (void)setCandidateItems:(id)a0 animate:(BOOL)a1;
- (void)setItemView:(id)a0 forItem:(id)a1;

@end
