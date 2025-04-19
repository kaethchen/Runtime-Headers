@class NSSet;

@interface HeadGestures.MotionTransformerInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ RotationX;
    void /* unknown type, empty encoding */ RotationY;
    void /* unknown type, empty encoding */ RotationZ;
    void /* unknown type, empty encoding */ AccelerationX;
    void /* unknown type, empty encoding */ AccelerationY;
    void /* unknown type, empty encoding */ AccelerationZ;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
