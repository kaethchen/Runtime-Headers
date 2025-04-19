@class NSDictionary, NSData, NSString;

@interface CMIShadingFPNCorrectionImage : NSObject <NSCopying, NSSecureCoding> {
    id /* block */ _pixelBufferProvider;
    struct __CVBuffer { } *_pixelBuffer;
    NSDictionary *_metadata;
    NSData *_compressedData;
    NSString *_pixelBufferFileSystemLocation;
    NSString *_metadataFileSystemLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int encodingOptions;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSData *compressedData;
@property (readonly, nonatomic) NSString *pixelBufferFileSystemLocation;
@property (readonly, nonatomic) NSString *metadataFileSystemLocation;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCompressedData:(id)a0;
- (id)initWithPixelBufferProvider:(id /* block */)a0;
- (BOOL)_decompressImageFromData:(id)a0;
- (void)_deferredSetupWithPixelBufferProviderIfneeded;
- (void)_setupWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithPixelBufferPath:(id)a0 metadataPath:(id)a1;

@end
