@class NSString, NSData, NSColorGamut;

@interface NSColorSpace : NSObject <NSSecureCoding> {
    id _profile;
    struct { unsigned char colorSpaceID : 8; unsigned char storageType : 3; unsigned char replacedDuringUnarchiving : 1; unsigned int  : 20; unsigned int  : 32; } _flags;
    _Atomic struct CGColorSpace *_cgColorSpace;
    _Atomic struct CGColorTransform *_cgColorTransform;
}

@property (class, readonly) NSColorSpace *sRGBColorSpace;
@property (class, readonly) NSColorSpace *genericGamma22GrayColorSpace;
@property (class, readonly) NSColorSpace *extendedSRGBColorSpace;
@property (class, readonly) NSColorSpace *extendedGenericGamma22GrayColorSpace;
@property (class, readonly) NSColorSpace *displayP3ColorSpace;
@property (class, readonly) NSColorSpace *adobeRGB1998ColorSpace;
@property (class, readonly) NSColorSpace *genericRGBColorSpace;
@property (class, readonly) NSColorSpace *genericGrayColorSpace;
@property (class, readonly) NSColorSpace *genericCMYKColorSpace;
@property (class, readonly) NSColorSpace *deviceRGBColorSpace;
@property (class, readonly) NSColorSpace *deviceGrayColorSpace;
@property (class, readonly) NSColorSpace *deviceCMYKColorSpace;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSColorGamut *colorGamut;
@property (readonly) NSData *ICCProfileData;
@property (readonly) void *colorSyncProfile;
@property (readonly) struct CGColorSpace { } *CGColorSpace;
@property (readonly) long long numberOfColorComponents;
@property (readonly) long long colorSpaceModel;
@property (readonly, copy) NSString *localizedName;

+ (id)DCIP3ColorSpace;
+ (id)_invertedDeviceGrayColorSpace;
+ (id)_invertedGenericGrayColorSpace;
+ (id)availableColorSpacesWithModel:(long long)a0;
+ (id)colorSpaceForCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)colorSpaceForColorSpaceName:(id)a0;
+ (id)extendedLinearSRGBColorSpace;
+ (id)linearSRGBColorSpace;
+ (id)specialColorSpaceWithID:(int)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (struct CGColor { } *)_newCGColorByConvertingCGColor:(struct CGColor { } *)a0;
- (int)_colorSpaceID;
- (void)_createProfileFor:(struct __CFString { } *)a0;
- (id)_initWithCGColorSpaceNoCache:(struct CGColorSpace { } *)a0;
- (BOOL)_isDeviceColorSpace;
- (BOOL)allowsExtendedRange;
- (id)colorProfile;
- (id)colorSpaceName;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (id)initWithColorProfile:(id)a0;
- (id)initWithColorSyncProfile:(void *)a0;
- (id)initWithICCProfileData:(id)a0;
- (BOOL)isWideGamut;

@end
