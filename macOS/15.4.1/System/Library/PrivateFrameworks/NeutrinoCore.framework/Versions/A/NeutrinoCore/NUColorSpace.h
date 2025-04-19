@class NSString, NSDictionary;

@interface NUColorSpace : NSObject

@property (class, readonly) NUColorSpace *displayP3_PQ;
@property (class, readonly) NUColorSpace *displayP3_HLG;

@property (readonly, nonatomic) BOOL hasCICP;
@property (readonly, nonatomic) BOOL isRGB;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) BOOL isExtended;
@property (readonly, nonatomic) struct CGColorSpace { } *CGColorSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *descriptionName;
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;
@property (readonly, nonatomic) float headroom;

+ (id)displayP3ColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBColorSpace;
+ (id)sRGBColorSpace;
+ (id)workingColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)a0;
+ (id)adobeRGBColorSpace;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)displayP3LinearColorSpace;
+ (id)extendedLinearGrayColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)itur2100PQColorSpace;
+ (id)linearGrayColorSpace;
+ (id)rec709ColorSpace;
+ (id)sRGBLinearColorSpace;
+ (BOOL)shouldTagAsDisplayP3:(struct __CVBuffer { } *)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (id)extended;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithColorSpaceName:(id)a0;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (id)linearized;
- (void)nu_updateDigest:(id)a0;
- (void)nu_updateDigest:(id)a0;

@end
