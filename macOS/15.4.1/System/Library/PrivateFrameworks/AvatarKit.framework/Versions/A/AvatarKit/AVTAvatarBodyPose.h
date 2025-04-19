@class NSDictionary;

@interface AVTAvatarBodyPose : NSObject {
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)neutralPose;
+ (id)posesInPosePack:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)_applyBodyPoseWithDictionaryRepresentation:(id)a0 skeletonRootJoint:(id)a1;
- (void)_applyBodyPoseWithDictionaryRepresentationA:(id)a0 dictionaryRepresentationB:(id)a1 dictionaryRepresentationC:(id)a2 dictionaryRepresentationD:(id)a3 variantIntensityX:(float)a4 variantIntensityY:(float)a5 skeletonRootJoint:(id)a6;
- (void)_applyBodyPoseWithDictionaryRepresentationA:(id)a0 dictionaryRepresentationB:(id)a1 variantIntensity:(float)a2 skeletonRootJoint:(id)a3;
- (void)applyToBodySkeletonWithRootJoint:(id)a0 ageBodyPoseVariantIntensity:(float)a1 shoulderWidthBodyPoseVariantIntensity:(float)a2;
- (id)initWithHierarchy:(id)a0;
- (id)initWithRootJoints:(id)a0;
- (id)initWithSceneAtURL:(id)a0;

@end
