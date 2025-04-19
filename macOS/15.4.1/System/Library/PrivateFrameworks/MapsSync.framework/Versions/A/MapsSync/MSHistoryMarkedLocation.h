@class NSString, NSNumber, GEOMapItemStorage;

@interface MSHistoryMarkedLocation : MSHistoryItem {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _floorOrdinal;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _muid;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic) int floorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;

- (void).cxx_destruct;
- (id)initWithCustomName:(id)a0 floorOrdinal:(int)a1 latitude:(id)a2 longitude:(id)a3 mapItemStorage:(id)a4 muid:(id)a5;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 customName:(id)a1 floorOrdinal:(int)a2 latitude:(id)a3 longitude:(id)a4 mapItemStorage:(id)a5 muid:(id)a6;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
