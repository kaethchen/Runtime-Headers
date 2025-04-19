@class SCNNode;

@interface SCNHitTestResult : NSObject {
    struct __C3DHitTestResult { } *_result;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdLocalCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdWorldCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdLocalNormal;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdWorldNormal;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdModelTransform;
@property (readonly, nonatomic) SCNNode *node;
@property (readonly, nonatomic) long long geometryIndex;
@property (readonly, nonatomic) long long faceIndex;
@property (readonly, nonatomic) struct SCNVector3 { double x0; double x1; double x2; } localCoordinates;
@property (readonly, nonatomic) struct SCNVector3 { double x0; double x1; double x2; } worldCoordinates;
@property (readonly, nonatomic) struct SCNVector3 { double x0; double x1; double x2; } localNormal;
@property (readonly, nonatomic) struct SCNVector3 { double x0; double x1; double x2; } worldNormal;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } modelTransform;
@property (readonly, nonatomic) SCNNode *boneNode;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { } *)a0;

- (void)dealloc;
- (id)description;
- (id)initWithResult:(struct __C3DHitTestResult { } *)a0;
- (struct CGPoint { double x0; double x1; })textureCoordinate;
- (struct CGPoint { double x0; double x1; })textureCoordinatesWithMappingChannel:(long long)a0;

@end
