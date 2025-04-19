@class NSString;

@interface ULCustomLoiStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getAllCustomLoiIdsForServiceId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<CLMiLoCustomLoiTable::Entry, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoCustomLoiTable::Entry *, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry *x0; } x2; })_fetchCustomLoisByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)addServiceToCustomLoiMapping:(const struct uuid { unsigned char x0[16]; } *)a0 loiId:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)deleteAllCustomLoiOfDeletedServices;
- (struct vector<CLMiLoCustomLoiTable::Entry, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoCustomLoiTable::Entry *, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getAllDistinctCustomLoiIds;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getAllServicesEnabledAtCustomLoiId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)insertEntries:(const void *)a0;
- (BOOL)removeServiceToCustomLoiMapping:(const struct uuid { unsigned char x0[16]; } *)a0 loiId:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)updateAllCustomLoiIdsWithMatchingServiceUUID:(const struct uuid { unsigned char x0[16]; } *)a0 withNewServiceUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
