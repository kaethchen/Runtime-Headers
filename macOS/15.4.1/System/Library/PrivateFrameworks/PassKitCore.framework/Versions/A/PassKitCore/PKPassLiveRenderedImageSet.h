@class PKImage;

@interface PKPassLiveRenderedImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *diffuseMaterialPropertyImage;
@property (retain, nonatomic) PKImage *ambientMaterialPropertyImage;
@property (retain, nonatomic) PKImage *specularMaterialPropertyImage;
@property (retain, nonatomic) PKImage *normalMaterialPropertyImage;
@property (retain, nonatomic) PKImage *reflectiveMaterialPropertyImage;
@property (retain, nonatomic) PKImage *emissionMaterialPropertyImage;
@property (retain, nonatomic) PKImage *transparentMaterialPropertyImage;
@property (retain, nonatomic) PKImage *multiplyMaterialPropertyImage;
@property (retain, nonatomic) PKImage *displacementMaterialPropertyImage;
@property (retain, nonatomic) PKImage *ambientOcclusionMaterialPropertyImage;
@property (retain, nonatomic) PKImage *selfIlluminationMaterialPropertyImage;
@property (retain, nonatomic) PKImage *metalnessMaterialPropertyImage;
@property (retain, nonatomic) PKImage *roughnessMaterialPropertyImage;
@property (retain, nonatomic) PKImage *overlayMaterialPropertyImage;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (BOOL)shouldCache;
+ (id)archiveName;
+ (long long)imageSetType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
