@class NSString;

@interface ULAssociatedStateMO : NSManagedObject

@property (nonatomic) int band;
@property (nonatomic) int channel;
@property (nonatomic) BOOL isAssociated;
@property (retain, nonatomic) NSString *loiId;
@property (retain, nonatomic) NSString *loiType;
@property (retain, nonatomic) NSString *macAddress;
@property (nonatomic) double timestamp;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationAssociatedStateTable::Entry> { union { char x0; struct Entry { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; BOOL x3; struct CLMacAddress { unsigned long long x0; } x4; int x5; int x6; } x1; } x0; BOOL x1; })convertToEntry;

@end
