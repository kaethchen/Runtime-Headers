@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {
    BOOL mIsSnapshot;
}

@property MCAnimationPathKeyframed *animationPath;
@property (nonatomic) double timeOffset;
@property (nonatomic) int timeOffsetKind;
@property (nonatomic) float preControl;
@property (nonatomic) float postControl;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)description;
- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
