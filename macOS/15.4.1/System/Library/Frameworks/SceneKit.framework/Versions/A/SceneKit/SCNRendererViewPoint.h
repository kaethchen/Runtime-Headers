@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject {
    MTLRenderPassDescriptor *_passDescriptor;
    struct { double originX; double originY; double width; double height; double znear; double zfar; } _viewport;
}

@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } viewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdViewMatrix;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } projectionMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdProjectionMatrix;
@property (retain, nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } viewport;

- (void)dealloc;

@end
