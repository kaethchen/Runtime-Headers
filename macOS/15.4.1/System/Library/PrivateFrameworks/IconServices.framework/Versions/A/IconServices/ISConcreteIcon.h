@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISCodableIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbol;
- (void)resolve;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForDescriptor:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)initWithDigest:(id)a0;
- (double)_aspectRatio;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)_fallbackKey;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (id)_placeholderImageForError:(id)a0 descriptor:(id)a1;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToIcon:(id)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
