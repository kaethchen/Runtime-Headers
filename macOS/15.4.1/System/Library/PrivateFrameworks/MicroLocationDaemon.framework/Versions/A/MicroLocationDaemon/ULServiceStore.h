@class NSString;

@interface ULServiceStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMiLoServiceTable::Entry, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoServiceTable::Entry *, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; } x2; })fetchAllServicesForServiceType:(unsigned long long)a0;
- (id)getServiceUUIDsWithServiceType:(unsigned int)a0;
- (struct vector<CLMiLoServiceTable::Entry, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoServiceTable::Entry *, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; } x2; })_fetchServicesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteAllServicesWithExceptions:(const void *)a0;
- (BOOL)deleteAllServicesWithUUIDs:(struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })a0;
- (BOOL)deleteOldestsServicesPerClientAboveMaxCount;
- (BOOL)deleteServiceForUUID:(struct uuid { unsigned char x0[16]; })a0;
- (struct vector<CLMiLoServiceTable::Entry, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoServiceTable::Entry *, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<CLMiLoServiceTable::Entry, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoServiceTable::Entry *, std::allocator<CLMiLoServiceTable::Entry>> { struct Entry *x0; } x2; })fetchAllServicesForClientId:(const void *)a0 andUserId:(const void *)a1;
- (struct optional<CLMiLoServiceTable::Entry> { union { char x0; struct Entry { unsigned long long x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x3; unsigned long long x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x5; } x1; } x0; BOOL x1; })fetchServiceByUUID:(struct uuid { unsigned char x0[16]; })a0;
- (id)getAllServiceUUIDs:(unsigned long long)a0;
- (BOOL)insertEntries:(const void *)a0;
- (BOOL)updateAllServicesWithMatchingClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; })a0 withNewClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; })a1;
- (BOOL)updateAllServicesWithMatchingServiceUUID:(struct uuid { unsigned char x0[16]; })a0 withNewServiceUUID:(struct uuid { unsigned char x0[16]; })a1;
- (BOOL)updateLastActiveTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0 forService:(struct uuid { unsigned char x0[16]; })a1;
- (BOOL)updateServiceLocationTypes:(struct uuid { unsigned char x0[16]; })a0 withLocationTypes:(unsigned long long)a1;

@end
