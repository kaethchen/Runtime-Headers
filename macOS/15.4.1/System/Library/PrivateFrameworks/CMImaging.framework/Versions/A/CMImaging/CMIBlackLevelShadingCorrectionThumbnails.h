@class NSDictionary, NSData, NSString;

@interface CMIBlackLevelShadingCorrectionThumbnails : NSObject <NSCopying, NSSecureCoding> {
    id /* block */ _pixelBufferProvider;
    NSDictionary *_metadata;
    NSData *_compressedData;
    NSString *_metadataFileSystemLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int encodingOptions;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSData *compressedData;
@property (readonly, nonatomic) NSString *metadataFileSystemLocation;

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
- (id)initWithMetadataPath:(id)a0;

@end
