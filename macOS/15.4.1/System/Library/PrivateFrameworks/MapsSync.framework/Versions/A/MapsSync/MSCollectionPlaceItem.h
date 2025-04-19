@class GEOMapItemStorage, NSString, NSUUID, NSData, NSDate, NSNumber;

@interface MSCollectionPlaceItem : MSCollectionItem {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _droppedPinCoordinate;
    void /* unknown type, empty encoding */ _droppedPinFloorOrdinal;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemAddress;
    void /* unknown type, empty encoding */ _mapItemCategory;
    void /* unknown type, empty encoding */ _mapItemLastRefreshed;
    void /* unknown type, empty encoding */ _mapItemName;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _origin;
    void /* unknown type, empty encoding */ _originalIdentifier;
    void /* unknown type, empty encoding */ _placeItemNote;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _mapItemStorage;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;
@property (nonatomic, copy) NSUUID *originalIdentifier;
@property (nonatomic, copy) NSString *placeItemNote;
@property (nonatomic) short type;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;

+ (id)optionsWith:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (id)initWithCustomName:(id)a0 droppedPinCoordinate:(id)a1 droppedPinFloorOrdinal:(int)a2 latitude:(id)a3 longitude:(id)a4 mapItemAddress:(id)a5 mapItemCategory:(id)a6 mapItemLastRefreshed:(id)a7 mapItemName:(id)a8 muid:(id)a9 origin:(short)a10 originalIdentifier:(id)a11 placeItemNote:(id)a12 type:(short)a13;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 customName:(id)a1 droppedPinCoordinate:(id)a2 droppedPinFloorOrdinal:(int)a3 latitude:(id)a4 longitude:(id)a5 mapItemAddress:(id)a6 mapItemCategory:(id)a7 mapItemLastRefreshed:(id)a8 mapItemName:(id)a9 muid:(id)a10 origin:(short)a11 originalIdentifier:(id)a12 placeItemNote:(id)a13 type:(short)a14;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
