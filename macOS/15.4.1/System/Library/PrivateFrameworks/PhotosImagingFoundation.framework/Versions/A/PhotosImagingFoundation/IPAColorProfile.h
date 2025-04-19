@class NSString, NSURL, IPAChecksum;

@interface IPAColorProfile : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _finishLoadingLock;
    BOOL _finishLoading;
    struct ColorSyncProfile { } *_colorSyncProfile;
    struct CGColorSpace { } *_colorSpace;
}

@property (readonly, nonatomic) NSString *profileClass;
@property (readonly, nonatomic) NSString *colorSpaceType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) IPAChecksum *checksum;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) struct ColorSyncProfile { } *colorSyncProfile;
@property (readonly, nonatomic) BOOL needsGamutMapping;

+ (void)initialize;
+ (id)currentIndex;
+ (id)profileWithIdentifier:(id)a0;
+ (id)displayProfiles;
+ (id)adobeRGBProfile;
+ (id)abstractProfiles;
+ (id)cmykProfiles;
+ (id)colorSpaceProfiles;
+ (id)genericGrayProfile;
+ (id)genericP3Profile;
+ (id)genericRGBProfile;
+ (id)grayProfiles;
+ (id)inputProfiles;
+ (id)installedProfiles;
+ (id)labProfiles;
+ (id)linearAdobeRGBProfile;
+ (id)linearGenericP3Profile;
+ (id)linearGenericRGBProfile;
+ (id)linearSRGBProfile;
+ (id)linearWideGamutProfile;
+ (BOOL)loadProfilesWithError:(id *)a0;
+ (id)newLinearAdobeRGBProfile;
+ (id)newLinearP3Profile;
+ (id)newLinearSRGBProfile;
+ (id)newLinearWideGamutProfile;
+ (id)newP3Profile;
+ (id)outputProfiles;
+ (id)profileWithChecksum:(id)a0;
+ (id)profileWithColorSpace:(struct CGColorSpace { } *)a0;
+ (id)profileWithColorSpace:(struct CGColorSpace { } *)a0 identifier:(id)a1;
+ (id)profileWithColorSyncProfile:(struct ColorSyncProfile { } *)a0;
+ (id)profileWithColorSyncProfile:(struct ColorSyncProfile { } *)a0 name:(id)a1 wantsCache:(BOOL)a2;
+ (id)profileWithDisplayID:(int)a0;
+ (id)profileWithIdentifierValue:(id)a0;
+ (id)rgbProfiles;
+ (id)sRGBProfile;
+ (BOOL)unloadProfiles;
+ (id)xyzProfiles;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)finishLoading;
- (BOOL)isRGB;
- (void)debugDumpProfile;
- (BOOL)fullyLoaded;
- (id)initWithColorSpace:(struct CGColorSpace { } *)a0 identifier:(id)a1;
- (id)initWithColorSyncProfile:(struct ColorSyncProfile { } *)a0 name:(id)a1 identifier:(id)a2;
- (id)initWithProfileDictionary:(id)a0;
- (BOOL)isEqualToColorProfile:(id)a0;

@end
