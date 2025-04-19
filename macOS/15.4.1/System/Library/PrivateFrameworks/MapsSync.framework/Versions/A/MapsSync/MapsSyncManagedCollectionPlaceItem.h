@class NSString, NSUUID, NSData, NSDate, NSNumber, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic) short origin;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, copy) NSString *placeItemNote;
@property (nonatomic) short type;
@property (nonatomic, copy) NSUUID *originalIdentifier;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
