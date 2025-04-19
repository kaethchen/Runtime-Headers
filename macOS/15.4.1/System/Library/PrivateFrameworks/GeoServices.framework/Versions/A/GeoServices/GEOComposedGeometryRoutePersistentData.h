@class NSUUID, NSString, NSArray, GEOMapItemIdentifier, GEORouteAttributes, GEOElevationProfile, GEOMapRegion, GEOPDURLData, geo_isolater, GEORawRouteGeometry, GEOAddressObject, GEOComposedRouteAnchorPointList;

@interface GEOComposedGeometryRoutePersistentData : NSObject <NSSecureCoding> {
    geo_isolater *_countryCodeIsolater;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long originalVersion;
@property (retain) NSUUID *storageID;
@property (copy) NSString *userProvidedName;
@property (copy) NSString *userProvidedNotes;
@property (retain, nonatomic) NSUUID *routeID;
@property (copy, nonatomic) NSString *routeName;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) GEOMapItemIdentifier *tourIdentifier;
@property (nonatomic) unsigned long long tourMuid;
@property (nonatomic) unsigned long long mapItemMuid;
@property (retain, nonatomic) GEORawRouteGeometry *rawRouteGeometry;
@property (copy, nonatomic) NSArray *waypoints;
@property (copy, nonatomic) GEOComposedRouteAnchorPointList *anchorPoints;
@property (copy, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOAddressObject *address;
@property (copy, nonatomic) NSString *iso3166CountryCode;
@property (nonatomic) int transportType;
@property (nonatomic) double distance;
@property (nonatomic) double duration;
@property (retain, nonatomic) GEOElevationProfile *elevationProfile;
@property (nonatomic) int elevationModel;
@property (copy, nonatomic) NSArray *travelDirectionArrows;
@property (copy, nonatomic) NSArray *routeNameLabels;
@property (retain, nonatomic) GEOMapRegion *boundingMapRegion;
@property (copy, nonatomic) NSString *disclaimerText;
@property (retain, nonatomic) GEOPDURLData *disclaimerURL;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } originCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } destinationCoordinate;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAvailableForCurrentCountry;
- (void)updateCountryIfNecessaryWithCompletionHandler:(id /* block */)a0;

@end
