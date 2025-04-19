@class PXGMetalCaptureSpriteTexture, MTLRenderPassDescriptor, PXGEffect;

@interface PXGMetalRenderPass : NSObject

@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderRect;
@property (retain, nonatomic) PXGMetalCaptureSpriteTexture *captureSpriteTexture;
@property (nonatomic) float captureSpriteZPosition;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } renderSize;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) struct { double red; double green; double blue; double alpha; } clearColor;
@property (retain, nonatomic) PXGEffect *offscreenKernelEffect;
@property (nonatomic) double drawingScale;
@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) long long drawCalls;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
