@class NSUUID, NSArray, NSData, NSDate, NSString, GEOAddressObject;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying> {
    GEOAddressObject *_localGeoAddressObject;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
    NSString *_subLocality;
    NSString *_locality;
    NSString *_subAdministrativeArea;
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSString *_postalCode;
    NSString *_country;
    NSString *_countryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSData *geoAddressData;
@property (readonly, nonatomic) NSArray *subPremises;
@property (readonly, copy, nonatomic) NSString *subThoroughfare;
@property (readonly, copy, nonatomic) NSString *thoroughfare;
@property (readonly, copy, nonatomic) NSString *subLocality;
@property (readonly, copy, nonatomic) NSString *locality;
@property (readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString *administrativeArea;
@property (readonly, copy, nonatomic) NSString *administrativeAreaCode;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *inlandWater;
@property (readonly, copy, nonatomic) NSString *ocean;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic) BOOL isIsland;
@property (readonly, copy, nonatomic) NSString *iso3166CountryCode;
@property (readonly, copy, nonatomic) NSString *iso3166SubdivisionCode;
@property (readonly, nonatomic) NSString *mergedThoroughfare;

+ (id)_encodeGeoAddressObject:(id)a0 compress:(BOOL)a1;
+ (id)_decodeGeoAddressObjectFromData:(id)a0 decompress:(BOOL)a1;
+ (id)_mergedThoroughfareWithSubPremises:(id)a0 subThoroughfare:(id)a1 thoroughfare:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 geoAddressObject:(id)a1 subPremises:(id)a2 isIsland:(BOOL)a3 creationDate:(id)a4 expirationDate:(id)a5 iso3166CountryCode:(id)a6 iso3166SubdivisionCode:(id)a7;
- (id)geoAddressObject;
- (id)geoDictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 geoAddressData:(id)a1 subPremises:(id)a2 subThoroughfare:(id)a3 thoroughfare:(id)a4 subLocality:(id)a5 locality:(id)a6 subAdministrativeArea:(id)a7 administrativeArea:(id)a8 administrativeAreaCode:(id)a9 postalCode:(id)a10 country:(id)a11 countryCode:(id)a12 inlandWater:(id)a13 ocean:(id)a14 areasOfInterest:(id)a15 isIsland:(BOOL)a16 creationDate:(id)a17 expirationDate:(id)a18 iso3166CountryCode:(id)a19 iso3166SubdivisionCode:(id)a20;
- (BOOL)isEqualToAddress:(id)a0;
- (id)initWithGeoDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithIdentifier:(id)a0 geoAddressData:(id)a1 subPremises:(id)a2 isIsland:(BOOL)a3 creationDate:(id)a4 expirationDate:(id)a5 iso3166CountryCode:(id)a6 iso3166SubdivisionCode:(id)a7;

@end
