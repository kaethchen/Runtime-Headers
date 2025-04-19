@class NSString;

@interface VFXIESProfile : NSObject <NSCopying, NSSecureCoding> {
    struct __CFXIESInfo { float totalLights; float totalLumens; float candalaMult; float maxCandela; float maxHAngle; float maxVAngle; int typeOfPhotometric; int typeOfUnit; int anglesHCount; int anglesVCount; int candalaValuesCount; float width; float length; float height; float ballastFactor; float futureUse; float inputWatts; float *anglesH; float *anglesV; float *candalaValues; } _iesInfo;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;

+ (id)profileWithURL:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const struct __CFXIESInfo { float x0; float x1; float x2; float x3; float x4; float x5; int x6; int x7; int x8; int x9; int x10; float x11; float x12; float x13; float x14; float x15; float x16; float *x17; float *x18; float *x19; } *)_infoHangle;

@end
