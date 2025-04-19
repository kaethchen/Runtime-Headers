@interface SKTransformNode : SKNode {
    void *_skcTransformLayer;
    void /* unknown type, empty encoding */ _euler;
}

@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (struct { })quaternion;
- (struct { void /* unknown type, empty encoding */ x0[3]; })rotationMatrix;
- (void)setQuaternion:(struct { })a0;
- (void)setEulerAngles:(SEL)a0;
- (void /* unknown type, empty encoding */)eulerAngles;
- (void)setZRotation:(double)a0;
- (double)zRotation;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)setRotationMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

@end
