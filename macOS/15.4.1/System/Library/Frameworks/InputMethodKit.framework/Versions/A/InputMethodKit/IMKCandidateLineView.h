@class IMKCandidateController, NSOrderedSet, NSMutableDictionary, NSArray, IMKCandidateUnitView, NSAttributedString, NSColor;

@interface IMKCandidateLineView : IMKUIView

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSOrderedSet *layoutUnitsToAnimateOut;
@property (retain, nonatomic) NSColor *lineColor;
@property (nonatomic) BOOL touchesWithinView;
@property (retain, nonatomic) NSMutableDictionary *uniqueKeyToCandidateView;
@property (retain, nonatomic) NSArray *viewsToBeAnimatedOut;
@property (retain, nonatomic) IMKCandidateUnitView *unitViewToBeUpdatedByPressAndHold;
@property (nonatomic) BOOL animateChanges;
@property (nonatomic) IMKCandidateController *candidateController;
@property (retain, nonatomic) NSAttributedString *groupName;
@property (nonatomic) unsigned long long highlightStyle;
@property (retain, nonatomic) NSArray *layoutUnits;
@property (nonatomic) unsigned long long number;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refresh;
- (void)animate;
- (id)candidateViewForKey:(id)a0;
- (void)checkPrefixForAnimationWithOriginalUnits:(id)a0 newUnits:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 candidateController:(id)a1 properties:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrubbed:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)shouldUpdateForPressAndHold:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 with:(long long)a2;
- (id)suffixOfOriginalLayoutUnits:(id)a0 andNewLayoutUnits:(id)a1;
- (void)touchesEnded:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)updateBackgroundAndLineColors;

@end
