@class NSString, NSData;

@interface ULModelMO : NSManagedObject

@property (retain, nonatomic) NSString *modelUUID;
@property (nonatomic) double generationTimestamp;
@property (retain, nonatomic) NSData *model;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *loiId;
@property (nonatomic) int modelType;
@property (retain, nonatomic) NSString *serviceUUID;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationModelTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; int x2; struct Model { void /* function */ **x0; struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x0; int x1; int x2; int x3; } x1; unsigned long long x2; double x3; int x4; int x5; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x0; int x1; int x2; int x3; } x6; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x0; int x1; int x2; int x3; } x7; BOOL x8; unsigned int x9; struct anchorAppearancesVector *x10; struct LocationSimilarityListData *x11; int x12; int x13; struct RepeatedField<int> { int *x0; int x1; int x2; } x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; void *x21; struct BlueAtlasData *x22; unsigned int x23; int x24; unsigned int x25[1]; } x3; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x4; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x5; struct uuid { unsigned char x0[16]; } x6; } x1; } x0; BOOL x1; })convertToEntry;

@end
