@class NSArray, VNHumanHandPoseObservation;

@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation {
    VNHumanHandPoseObservation *_leftHand;
    VNHumanHandPoseObservation *_rightHand;
}

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;

- (void).cxx_destruct;
- (id)leftHand;
- (id)recognizedPointForJointName:(id)a0 error:(id *)a1;
- (id)recognizedPointsForJointsGroupName:(id)a0 error:(id *)a1;
- (id)rightHand;
- (void)setLeftHand:(id)a0;
- (void)setRightHand:(id)a0;

@end
