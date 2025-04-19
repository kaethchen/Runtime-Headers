@class NSString, NSTouchBarInputMethodCandidate;
@protocol NSInputMethodUICandidateAccessibilityTarget;

@interface NSInputMethodUICandidateAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton>

@property (retain, nonatomic) NSTouchBarInputMethodCandidate *candidate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<NSInputMethodUICandidateAccessibilityTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)accessibilityValueDescription;
- (id)initWithCandidate:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
