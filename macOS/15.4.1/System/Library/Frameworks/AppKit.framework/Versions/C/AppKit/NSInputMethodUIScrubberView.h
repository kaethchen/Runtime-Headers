@class NSTouchBarInputMethodCandidate, NSArray, NSString, NSInputMethodUICandidateAccessibilityElement, NSMutableArray;
@protocol NSInputMethodUIScrubberViewDelegate;

@interface NSInputMethodUIScrubberView : NSView <NSAccessibilityList>

@property (retain, nonatomic) NSMutableArray *accessibilityChildren;
@property (nonatomic) BOOL currentTouchInteractionInsideView;
@property (weak, nonatomic) id<NSInputMethodUIScrubberViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingFrame;
@property (nonatomic) double fontSize;
@property (nonatomic) double horizontalPosition;
@property (nonatomic) double minimumWidth;
@property (nonatomic) BOOL roundsLeftCorners;
@property (nonatomic) BOOL roundsRightCorners;
@property (retain, nonatomic) NSTouchBarInputMethodCandidate *selectedCandidate;
@property (retain, nonatomic) NSInputMethodUICandidateAccessibilityElement *selectedCandidateAccessibilityElement;
@property (nonatomic) BOOL showsChevron;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSArray *UICandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)elementPressed:(id)a0;
- (id)UICandidateAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityElementForUICandidate:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRows;
- (id)accessibilitySelectedChildren;
- (id)accessibilityTitle;
- (id)accessibilityVisibleChildren;
- (void)checkCandidateSelectionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawBackgroundForCandidate:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 index:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (void)drawCandidate:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 index:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawStandardCandidate:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 index:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityEnabled;
- (struct CGPoint { double x0; double x1; })locationInViewWithEvent:(id)a0;
- (BOOL)pointIsInsideView:(struct CGPoint { double x0; double x1; })a0;
- (void)setAccessibilitySelectedChildren:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
