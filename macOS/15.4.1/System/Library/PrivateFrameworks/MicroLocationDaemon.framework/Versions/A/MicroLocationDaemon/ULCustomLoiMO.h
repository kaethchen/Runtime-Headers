@class NSString;

@interface ULCustomLoiMO : NSManagedObject

@property (retain, nonatomic) NSString *serviceId;
@property (retain, nonatomic) NSString *loiId;
@property (nonatomic) double lastSeenTimeStamp;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMiLoCustomLoiTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; } x1; } x0; BOOL x1; })convertToEntry;

@end
