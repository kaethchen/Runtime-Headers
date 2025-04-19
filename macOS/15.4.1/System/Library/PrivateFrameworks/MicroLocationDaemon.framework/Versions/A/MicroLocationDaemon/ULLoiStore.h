@class NSString;

@interface ULLoiStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; } x2; })_fetchLoisByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)batchTransferRecordsUsingBatchSize:(unsigned long long)a0 andLimit:(unsigned long long)a1 intoTargetStore:(id)a2 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3;
- (unsigned int)countDistinctLoiGroups;
- (unsigned int)countDistinctLoiTypes:(const void *)a0;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; } x2; })fetchAllDistinctLoiGroups;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; } x2; })fetchLoiIdEntriesInLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry *x0; } x2; })fetchLoiIdEntriesforLoiGroupIds:(void *)a0 withLimit:(unsigned int)a1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getDistinctHomeLoiGroupIdsWithLimit:(unsigned int)a0;
- (struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; })getLoiGroupIdForLoi:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getLoiGroupIdsForLois:(const void *)a0;
- (id)getLoiIdsInLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; })getLoiTypeForLoi:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)insertEntries:(const void *)a0;
- (BOOL)updateLoiIds:(const void *)a0 withLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a1 andLoiType:(const void *)a2;

@end
