@class IPAColorProfile, PADevice, NSString;
@protocol PARenderFormat;

@interface PADisplay : NSObject <NSCopying>

@property (readonly, nonatomic) PADevice *device;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) IPAColorProfile *profile;
@property (readonly, nonatomic) id<PARenderFormat> format;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL supportsHDR;
@property (readonly, nonatomic) double maxEDRHeadroom;
@property (readonly, nonatomic) double currentEDRHeadroom;

+ (BOOL)_forceDeepColor;
+ (BOOL)_enableDeepColor;
+ (BOOL)_shouldLogDeepColorUsage;
+ (long long)bitDepthForDisplayID:(unsigned int)a0;
+ (id)displayWithScreen:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGColorSpace { } *)colorSpace;
- (id)screen;
- (id)_buildIdentifier;
- (id)_initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (id)displayWithPixelFormat:(id)a0;
- (id)initWithDevice:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 format:(id)a2;
- (id)initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (BOOL)isEqualToDisplay:(id)a0;

@end
