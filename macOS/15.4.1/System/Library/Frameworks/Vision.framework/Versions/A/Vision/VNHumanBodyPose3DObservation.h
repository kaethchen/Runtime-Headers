@class NSArray;

@interface VNHumanBodyPose3DObservation : VNRecognizedPoints3DObservation

@property (readonly) long long heightEstimation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraOriginMatrix;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, nonatomic) float bodyHeight;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)pointInImageForJointName:(id)a0 error:(id *)a1;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_cameraIntrinsics;
- (struct { void /* unknown type, empty encoding */ x0[4]; })_cameraRootTransform;
- (struct CGSize { double x0; double x1; })_inputSize;
- (BOOL)getCameraRelativePosition:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 forJointName:(id)a1 error:(id *)a2;
- (id)parentJointNameForJointName:(id)a0;
- (id)recognizedPointForJointName:(id)a0 error:(id *)a1;
- (id)recognizedPointsForJointsGroupName:(id)a0 error:(id *)a1;

@end
