@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <NSSecureCoding> {
    _GEOAddressObject *_pimpl;
    int *_knownAccuracy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) int knownAccuracy;

+ (id)addressObjectForPlaceData:(id)a0;
+ (id)addressObjectWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3;
+ (BOOL)isLoggingDebug;
+ (BOOL)isMarkingMMStrings;
+ (id)libraryVersion;
+ (void)markMMStrings:(BOOL)a0;
+ (void)setLoggingDebug:(BOOL)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)address;
- (id)addressDictionary;
- (id)initWithCNPostalAddress:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)initWithContactAddressDictionary:(id)a0 language:(id)a1 country:(id)a2 phoneticLocale:(id)a3;
- (id)shortAddress;
- (id)weatherDisplayName;
- (id)locationAddress;
- (id)phoneticAddress;
- (id)cnPostalAddress;
- (id)aboveDoorShortAddress;
- (id)cityAndAboveNoCurrentCountryWithFallback:(BOOL)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0;
- (id)cityAndAboveWithFallback:(BOOL)a0 relative:(id)a1;
- (id)cityDisplayNameWithFallback:(BOOL)a0;
- (id)countryName;
- (id)fullAddressNoCurrentCountryWithMultiline:(BOOL)a0;
- (id)fullAddressWithMultiline:(BOOL)a0;
- (id)fullAddressWithMultiline:(BOOL)a0 relative:(id)a1;
- (id)initWithCurrentCountry;
- (id)initWithPlaceDataAddressObject:(id)a0 placeDataAddress:(id)a1 placeDataInfo:(id)a2 placeDataEntity:(id)a3 language:(id)a4 country:(id)a5 phoneticLocale:(id)a6;
- (id)initWithProtobufEncodedAsBase64String:(id)a0;
- (id)neighborhoodName:(BOOL)a0;
- (id)parkingDisplayName;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)a0;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)venueLabel;
- (id)venueLabel:(long long)a0;
- (id)venueLevel;
- (id)venueShortAddress;
- (id)weatherLocationName;

@end
