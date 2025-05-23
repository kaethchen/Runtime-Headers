@class NSMutableDictionary;

@interface AVTAvatarPose : NSObject <NSCopying> {
    BOOL _hasNeckPosition;
    BOOL _hasNeckOrientation;
    NSMutableDictionary *_weights;
}

@property (nonatomic) void /* unknown type, empty encoding */ neckPosition;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } neckOrientation;
@property (nonatomic) double bakedAnimationBlendFactor;

+ (id)friendlyPose;
+ (id)neutralPose;
+ (id)posesForAnimojiNamed:(id)a0 inPosePack:(id)a1;
+ (id)posesForMemojiInPosePack:(id)a0;
+ (id)posesInPosePack:(id)a0;
+ (id)posesInPosePack:(id)a0 avatarSelectionBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)setWeights:(id)a0;
- (id)hashString;
- (id)initWithScene:(id)a0;
- (BOOL)isEqualToPose:(id)a0;
- (BOOL)affectsPhysicsSimulation;
- (id)initWithWeights:(id)a0 neckPosition:(void *)a1 neckOrientation:(struct { } *)a2 bakedAnimationBlendFactor:(double)a3;
- (BOOL)isFriendlyPose;
- (BOOL)isNeutralPose;
- (id)poseByMergingPose:(id)a0;
- (void)setNeckPositionAndOrientationFromHierarchy:(id)a0;
- (void)setWeight:(double)a0 forBlendShapeNamed:(id)a1;
- (double)weightForBlendShapeNamed:(id)a0;

@end
