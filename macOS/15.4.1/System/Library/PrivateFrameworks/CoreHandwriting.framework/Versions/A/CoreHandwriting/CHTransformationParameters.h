@interface CHTransformationParameters : NSObject

@property (nonatomic) unsigned long long orientationBehavior;
@property (nonatomic) double orientationTarget;
@property (nonatomic) double italicsModifier;
@property (nonatomic) double boldModifier;
@property (nonatomic) unsigned long long resizeBehavior;
@property (nonatomic) unsigned long long textSizeTarget;
@property (nonatomic) double textSizeModifier;
@property (nonatomic) unsigned long long alignmentBehavior;
@property (nonatomic) unsigned long long leftMargin;
@property (nonatomic) unsigned long long rightMargin;
@property (nonatomic) struct CGPoint { double x; double y; } insertionPoint;
@property (nonatomic) unsigned long long lineSpaceBehavior;
@property (nonatomic) unsigned long long lineSpaceTarget;
@property (nonatomic) BOOL mergeLines;
@property (nonatomic) BOOL wrapLines;

- (id)init;
- (id)initWithOrientationBehavior:(unsigned long long)a0 orientationTarget:(double)a1 italicsModifier:(double)a2 boldModifier:(double)a3 resizeBehavior:(unsigned long long)a4 textSizeTarget:(unsigned long long)a5 textSizeModifier:(double)a6 alignmentBehavior:(unsigned long long)a7 leftMargin:(unsigned long long)a8 rightMargin:(unsigned long long)a9 insertionPoint:(struct CGPoint { double x0; double x1; })a10 lineSpaceBehavior:(unsigned long long)a11 lineSpaceTarget:(unsigned long long)a12 mergeLines:(BOOL)a13 wrapLines:(BOOL)a14;

@end
