@class MTLRenderPassDescriptor;

@interface VFXRendererViewPoint : NSObject {
    MTLRenderPassDescriptor *_passDescriptor;
    struct { double originX; double originY; double width; double height; double znear; double zfar; } _viewport;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } viewport;

- (void)dealloc;
- (id)passDescriptor;
- (void)setPassDescriptor:(id)a0;

@end
