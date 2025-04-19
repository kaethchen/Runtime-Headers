@class NSString, SCNNode, NSArray;

@interface AVTPhysicalizedSkeletonDynamic : NSObject <AVTAvatarDynamic> {
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    NSArray *_targetNodes;
    void /* unknown type, empty encoding */ _upDownRotation;
    void /* unknown type, empty encoding */ _leftRightRotation;
    void /* unknown type, empty encoding */ _forwardBackRotation;
    unsigned long long _side;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)affectsNode:(id)a0;
- (void)evaluateAtTime:(double)a0 physicsController:(id)a1;
- (void)resetTarget;

@end
