@class NSData;
@protocol MTLTexture, MTLDevice;

@interface PXGTextureDataColorLookupCube : PXGColorLookupCube {
    id<MTLDevice> _device;
    id<MTLTexture> _texture;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)center;
- (BOOL)shouldCache;
- (id)textureData;
- (id)createTextureWithContext:(id)a0;
- (id)initWithData:(id)a0 edgeSize:(long long)a1 pixelFormat:(unsigned long long)a2;

@end
