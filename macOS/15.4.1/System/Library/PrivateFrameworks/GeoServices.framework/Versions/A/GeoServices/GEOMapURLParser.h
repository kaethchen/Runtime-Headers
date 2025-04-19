@class NSString, NSArray, GEOMuninViewState, GEOEnrichmentInfo, NSURL, GEOURLExtraStorage, GEOUserSessionEntity, GEOURLDirectionsOptions, GEOURLLocationQueryItem, GEOURLCollectionStorage;

@interface GEOMapURLParser : NSObject {
    NSURL *_url;
}

@property (readonly, nonatomic) int mapType;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) int trackingMode;
@property (readonly, nonatomic) BOOL trackingModeSpecified;
@property (readonly, nonatomic) BOOL exactPositionSpecified;
@property (readonly, nonatomic) struct { double latitude; double longitude; } centerCoordinate;
@property (readonly, nonatomic) struct { double latitudeDelta; double longitudeDelta; } span;
@property (readonly, nonatomic) float zoomLevel;
@property (readonly, nonatomic) float cameraDistance;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *directionsSourceAddressString;
@property (readonly, nonatomic) NSArray *directionsDestinationAddressStrings;
@property (readonly, nonatomic) NSString *directionsDestinationAddressString;
@property (readonly, nonatomic) NSArray *directionsWaypointAddressStrings;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct { double latitude; double longitude; } searchCoordinate;
@property (readonly, nonatomic) struct { struct { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } searchRegion;
@property (readonly, nonatomic) int searchProviderID;
@property (readonly, nonatomic) unsigned long long searchUID;
@property (readonly, nonatomic) NSString *contentProvider;
@property (readonly, nonatomic) NSString *contentProviderID;
@property (readonly, nonatomic) NSString *abRecordID;
@property (readonly, nonatomic) NSString *abAddressID;
@property (readonly, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) NSString *cnAddressIdentifier;
@property (readonly, nonatomic) GEOUserSessionEntity *userSessionEntity;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double tilt;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) unsigned long long lineMUID;
@property (readonly, copy, nonatomic) NSString *lineName;
@property (readonly, nonatomic) long long favoritesType;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) GEOURLDirectionsOptions *directionsOptions;
@property (readonly, nonatomic) BOOL tester;
@property (readonly, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (readonly, nonatomic) GEOURLExtraStorage *extraStorage;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) BOOL showCarDestinations;
@property (readonly, nonatomic) BOOL showParkedCar;
@property (readonly, nonatomic) BOOL showMyLocationCard;
@property (readonly, nonatomic) BOOL showReports;
@property (readonly, nonatomic) unsigned long long curatedCollectionMUID;
@property (readonly, nonatomic) unsigned long long publisherMUID;
@property (readonly, nonatomic) BOOL showAllCuratedCollections;
@property (readonly, nonatomic) GEOEnrichmentInfo *enrichmentInfo;
@property (readonly, nonatomic) GEOURLLocationQueryItem *locationQueryItem;
@property (readonly, nonatomic) GEOURLLocationQueryItem *sourceLocationQueryItem;
@property (readonly, nonatomic) GEOURLLocationQueryItem *destinationLocationQueryItem;
@property (readonly, nonatomic) NSArray *directionsLocationQueryItems;

+ (BOOL)isValidMapURL:(id)a0;
+ (BOOL)isValidMapsCategoryURL:(id)a0;
+ (BOOL)isValidMapsURLForAppendingSharedSessionID:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)parseIncludingCustomParameters:(BOOL)a0;
- (struct { double x0; double x1; })_coordinateFromComponents:(id)a0;
- (struct { double x0; double x1; })_coordinateFromQueryValue:(id)a0;
- (int)_mapTypeFromQueryItemValue:(id)a0;
- (int)_trackingModeFromQueryItemValue:(id)a0;
- (id)restoreCodableOfClass:(Class)a0 queryItem:(id)a1 key:(id)a2 compressedKey:(id)a3;

@end
