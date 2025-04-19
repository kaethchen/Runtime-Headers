@class NSString, NSDictionary, SFLatLng, NSDate, NSData, SFColor;

@interface SFWeatherColor : SFColor <SFWeatherColor, NSSecureCoding, NSCopying> {
    struct { unsigned char cloudCover : 1; unsigned char cloudCoverLowAltPct : 1; unsigned char cloudCoverMidAltPct : 1; unsigned char cloudCoverHighAltPct : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *condition;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double cloudCover;
@property (nonatomic) double cloudCoverLowAltPct;
@property (nonatomic) double cloudCoverMidAltPct;
@property (nonatomic) double cloudCoverHighAltPct;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) SFColor *darkModeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasCloudCover;
- (BOOL)hasCloudCoverHighAltPct;
- (BOOL)hasCloudCoverLowAltPct;
- (BOOL)hasCloudCoverMidAltPct;

@end
