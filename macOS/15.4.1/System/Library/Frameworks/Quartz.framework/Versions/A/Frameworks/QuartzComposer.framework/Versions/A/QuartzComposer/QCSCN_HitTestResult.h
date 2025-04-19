@class QCSCN_Node;

@interface QCSCN_HitTestResult : NSObject {
    id _reserved;
}

@property (readonly, nonatomic) QCSCN_Node *node;
@property (readonly, nonatomic) long long geometryIndex;
@property (readonly, nonatomic) long long faceIndex;
@property (readonly, nonatomic) struct _SCNVector3 { double x0; double x1; double x2; } localCoordinates;
@property (readonly, nonatomic) struct _SCNVector3 { double x0; double x1; double x2; } worldCoordinates;
@property (readonly, nonatomic) struct _SCNVector3 { double x0; double x1; double x2; } localNormal;
@property (readonly, nonatomic) struct _SCNVector3 { double x0; double x1; double x2; } worldNormal;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } modelTransform;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { } *)a0;

- (void)dealloc;
- (id)description;
- (id)initWithResult:(struct __C3DHitTestResult { } *)a0;
- (struct CGPoint { double x0; double x1; })textureCoordinate;
- (struct CGPoint { double x0; double x1; })textureCoordinatesWithMappingChannel:(long long)a0;

@end
