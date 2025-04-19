@class NSString, MTLRenderPassDescriptor;

@interface CFXVFXRenderTargetInfo : NSObject <VFXRenderTargetInfo>

@property (nonatomic) MTLRenderPassDescriptor *descriptor;
@property (nonatomic) void /* unknown type, empty encoding */ _renderTargetSize;
@property (readonly, nonatomic) BOOL vrrEnabled;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)colorPixelFormatAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)renderTargetSize;

@end
