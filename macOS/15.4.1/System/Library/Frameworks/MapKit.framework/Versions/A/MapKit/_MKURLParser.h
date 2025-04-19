@class NSString, NSArray, MKMapCamera, GEOMuninViewState, GEOEnrichmentInfo, GEOURLExtraStorage, GEOMapURLParser, GEOUserSessionEntity, GEOURLDirectionsOptions, GEOURLLocationQueryItem, GEOURLCollectionStorage;

@interface _MKURLParser : NSObject {
    GEOMapURLParser *parser;
}

@property (readonly, nonatomic) unsigned long long mapType;
@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) BOOL trackingModeSpecified;
@property (readonly, nonatomic) long long trackingMode;
@property (readonly, nonatomic) BOOL exactPositionSpecified;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; } span;
@property (readonly, nonatomic) float zoomLevel;
@property (readonly, nonatomic) double cameraCenterBasedAltitude;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *directionsSourceAddressString;
@property (readonly, nonatomic) NSArray *directionsDestinationAddressStrings;
@property (readonly, nonatomic) NSString *directionsDestinationAddressString;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } searchCoordinate;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } searchRegion;
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
@property (readonly, nonatomic) MKMapCamera *mapCamera;
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
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })commonSnapshotRegionForRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (BOOL)isAppleMapsGuidesURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)parseIncludingCustomParameters:(BOOL)a0;
- (void)_drawImage:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 inContext:(struct CGContext { } *)a2 hiDpi:(BOOL)a3;
- (unsigned long long)_indexOfHiDpi:(id)a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })regionFromMapItems:(id)a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })regionWithViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)renderSnapshotWithOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (BOOL)resolveWithViewSize:(struct CGSize { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (BOOL)resolveWithViewSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1 completionBlock:(id /* block */)a2;

@end
