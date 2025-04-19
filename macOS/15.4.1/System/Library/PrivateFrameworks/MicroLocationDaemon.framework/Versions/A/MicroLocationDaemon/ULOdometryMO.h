@class NSUUID;

@interface ULOdometryMO : NSManagedObject

@property (nonatomic) short deltaPositionX;
@property (nonatomic) short deltaPositionY;
@property (nonatomic) short deltaPositionZ;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *trajectoryUUID;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMiLoOdometryTable::Entry> { union { char x0; struct Entry { float x0; float x1; float x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; id x4; } x1; } x0; BOOL x1; })convertToEntry;

@end
