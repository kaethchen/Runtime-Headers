@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasStreet;
@property (retain, nonatomic) NSString *street;
@property (readonly, nonatomic) BOOL hasSubLocality;
@property (retain, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) BOOL hasCity;
@property (retain, nonatomic) NSString *city;
@property (readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *state;
@property (readonly, nonatomic) BOOL hasPostalCode;
@property (retain, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
