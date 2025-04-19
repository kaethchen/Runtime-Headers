@class NSString, NSNumber, NSData;

@interface MapsSyncManagedHistoryMarkedLocation : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic) int floorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
