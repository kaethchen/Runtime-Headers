@class NSString;

@interface RTContactPostalAddress : RTAddress

@property (readonly, copy, nonatomic) NSString *contactsIdentifier;
@property (readonly, nonatomic) unsigned long long labelType;

+ (id)labelTypeToString:(unsigned long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 CNPostalAddress:(id)a1 lableType:(unsigned long long)a2 creationDate:(id)a3 expirationDate:(id)a4;
- (id)initWithIdentifier:(id)a0 geoAddressData:(id)a1 subPremises:(id)a2 isIsland:(BOOL)a3 creationDate:(id)a4 expirationDate:(id)a5 contactsIdentifier:(id)a6 labelType:(unsigned long long)a7 iso3166CountryCode:(id)a8 iso3166SubdivisionCode:(id)a9;
- (id)initWithIdentifier:(id)a0 geoAddressData:(id)a1 subPremises:(id)a2 subThoroughfare:(id)a3 thoroughfare:(id)a4 subLocality:(id)a5 locality:(id)a6 subAdministrativeArea:(id)a7 administrativeArea:(id)a8 administrativeAreaCode:(id)a9 postalCode:(id)a10 country:(id)a11 countryCode:(id)a12 inlandWater:(id)a13 ocean:(id)a14 areasOfInterest:(id)a15 isIsland:(BOOL)a16 creationDate:(id)a17 expirationDate:(id)a18 contactsIdentifier:(id)a19 labelType:(unsigned long long)a20 iso3166CountryCode:(id)a21 iso3166SubdivisionCode:(id)a22;
- (id)initWithIdentifier:(id)a0 geoAddressData:(id)a1 subPremises:(id)a2 subThoroughfare:(id)a3 thoroughfare:(id)a4 subLocality:(id)a5 locality:(id)a6 subAdministrativeArea:(id)a7 administrativeArea:(id)a8 administrativeAreaCode:(id)a9 postalCode:(id)a10 country:(id)a11 countryCode:(id)a12 inlandWater:(id)a13 ocean:(id)a14 areasOfInterest:(id)a15 isIsland:(BOOL)a16 creationDate:(id)a17 expirationDate:(id)a18 iso3166CountryCode:(id)a19 iso3166SubdivisionCode:(id)a20;
- (id)initWithIdentifier:(id)a0 geoAddressObject:(id)a1 subPremises:(id)a2 isIsland:(BOOL)a3 creationDate:(id)a4 expirationDate:(id)a5 contactsIdentifier:(id)a6 labelType:(unsigned long long)a7 iso3166CountryCode:(id)a8 iso3166SubdivisionCode:(id)a9;
- (id)initWithIdentifier:(id)a0 lableType:(unsigned long long)a1 geoDictionary:(id)a2 language:(id)a3 country:(id)a4 phoneticLocale:(id)a5;

@end
