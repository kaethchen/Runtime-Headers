@interface ULHomeSlamAnalyticEventMO : NSManagedObject

@property (nonatomic) short event;
@property (nonatomic) double timestamp;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMiLoHomeSlamAnalyticEventTable::Entry> { union { char x0; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; short x1; } x1; } x0; BOOL x1; })convertToEntry;

@end
