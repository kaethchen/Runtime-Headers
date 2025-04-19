@class NSString, NSCandidateBarCompositeCandidate;
@protocol _NSCandidateBarFunctionRowSegment_AccessibilityDelegate;

@interface _NSCandidateBarFunctionRowSegment : NSObject

@property long long segmentType;
@property (copy) NSCandidateBarCompositeCandidate *candidate;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hitTestRect;
@property (getter=isPressed) BOOL pressed;
@property (getter=isCorrection) BOOL correction;
@property BOOL roundLeft;
@property BOOL roundRight;
@property BOOL drawsRightToLeft;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (nonatomic) id accessibilityParent;
@property (nonatomic) id<_NSCandidateBarFunctionRowSegment_AccessibilityDelegate> accessibilityDelegate;

+ (id)segmentWithType:(long long)a0 candidate:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void)dealloc;
- (id)description;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (void)drawWithForegroundOpacity:(double)a0;
- (id)initWithType:(long long)a0 candidate:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
