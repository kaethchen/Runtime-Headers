@class NSString, PLRevGeoMapItem, CNPostalAddress, PLRevGeoCompoundNameInfo;

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PLRevGeoMapItem *mapItem;
@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *geoServiceProvider;
@property (readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo;
@property (readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo;
@property (nonatomic) BOOL isHome;

+ (id)infoFromPlistData:(id)a0;
+ (id)_newRevGeoLocationInfoFromData:(id)a0;
+ (id)_namingOrderForAssetDetailedReverseGeoDescription;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)countryCodeWithGEOMapItem:(id)a0;
+ (BOOL)isInvalidWithCoder:(id)a0;
+ (BOOL)isInvalidWithPlistData:(id)a0;
+ (id)newDataFromRevGeoLocationInfo:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescription;
- (id)plistData;
- (BOOL)hasLocation;
- (BOOL)hasMapItem;
- (id)initWithGEOMapItem:(id)a0;
- (id)placeNamesForLocalizedDetailedDescription;
- (unsigned long long)_locationInfoOrderForCurrentLocale;
- (id)initWithMapItem:(id)a0 postalAddress:(id)a1 addressString:(id)a2 countryCode:(id)a3 compoundNameInfo:(id)a4 compoundSecondaryNameInfo:(id)a5 isHome:(BOOL)a6 geoServiceProvider:(id)a7;
- (BOOL)locationWasResolvedWithBestRevGeoProvider;
- (id)placeWithAnnotation:(id)a0;

@end
