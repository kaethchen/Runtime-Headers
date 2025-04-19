@class GEOURLCollectionStorage, NSArray, NSString, NSImage, MKLookAroundScene, GEOPlaceCollection, MKMapCamera;

@interface MKLinkPreviewMetadata : NSObject

@property (class, readonly, nonatomic) double displayScale;

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) unsigned long long mapType;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } coordinateRegion;
@property (retain, nonatomic) MKMapCamera *mapCamera;
@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) MKLookAroundScene *scene;
@property (retain, nonatomic) GEOPlaceCollection *curatedCollection;
@property (retain, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *icon;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithActionType:(long long)a0 mapType:(unsigned long long)a1;

@end
