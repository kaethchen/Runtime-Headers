@interface RS3DCurvedSurface : RS3DSurface <NSCopying, NSSecureCoding> {
    float _radius;
    float _startOrientation;
    float _endOrientation;
    float _floorHeight;
    float _ceilingHeight;
    void /* unknown type, empty encoding */ _circleCenter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ circleCenter;
@property (readonly, nonatomic) float radius;
@property (readonly, nonatomic) float startOrientation;
@property (readonly, nonatomic) float endOrientation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)translateBy:(SEL)a0;
- (id)initWithDictionaryRepresentation:(id)a0 WithGroupId:(unsigned int)a1;
- (void)rotateAlongZAxisRightHand:(float)a0;

@end
