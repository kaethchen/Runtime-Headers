@class NSString, NSUUID, NSData, NSDate, NSNumber;

@interface MapsSyncManagedUserRoute : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSData *addressObject;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSString *customNote;
@property (nonatomic) long long hikeType;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSNumber *northLatitude;
@property (nonatomic, retain) NSNumber *southLatitude;
@property (nonatomic, retain) NSNumber *originLatitude;
@property (nonatomic, retain) NSNumber *originLongitude;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *routeGeometry;
@property (nonatomic, retain) NSNumber *eastLongitude;
@property (nonatomic, retain) NSNumber *westLongitude;
@property (nonatomic, retain) NSNumber *totalAscent;
@property (nonatomic, retain) NSNumber *totalDescent;
@property (nonatomic) long long tourIdentifier;
@property (nonatomic, retain) NSNumber *transportType;
@property (nonatomic, retain) NSNumber *length;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
