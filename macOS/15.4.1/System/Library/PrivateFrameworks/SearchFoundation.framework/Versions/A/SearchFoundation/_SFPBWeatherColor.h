@class NSString, _SFPBLatLng, NSData, _SFPBDate;

@interface _SFPBWeatherColor : PBCodable <_SFPBWeatherColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *condition;
@property (retain, nonatomic) _SFPBLatLng *location;
@property (retain, nonatomic) _SFPBDate *date;
@property (nonatomic) double cloudCover;
@property (nonatomic) double cloudCoverLowAltPct;
@property (nonatomic) double cloudCoverMidAltPct;
@property (nonatomic) double cloudCoverHighAltPct;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
