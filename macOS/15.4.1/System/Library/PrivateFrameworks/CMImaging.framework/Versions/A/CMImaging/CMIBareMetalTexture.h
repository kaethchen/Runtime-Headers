@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface CMIBareMetalTexture : NSObject {
    MTLTextureDescriptor *_textureDescriptor;
    unsigned int _osType;
    unsigned int _stride;
    unsigned int _dataOffset;
}

@property (readonly, nonatomic) id<MTLTexture> texture;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (BOOL)saveToFile:(id)a0;
- (id)initWithData:(id)a0 device:(id)a1;
- (id)initWithFile:(id)a0 device:(id)a1;
- (BOOL)saveToData:(id *)a0;
- (BOOL)saveToData:(id *)a0 withBMTLversion:(unsigned int)a1;
- (BOOL)saveToFile:(id)a0 withBMTLversion:(unsigned int)a1;
- (BOOL)saveToStream:(id)a0 withBMTLversion:(unsigned int)a1;
- (int)updateTextureContent:(id)a0;
- (int)updateTextureDescriptor:(id)a0;
- (BOOL)updateTextureWithData:(id)a0;
- (BOOL)updateTextureWithFile:(id)a0;

@end
