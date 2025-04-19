@class NSString;

@interface ULAssociatedStateStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; } x2; })_fetchAssociatedStatesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; } x2; })fetchAllAssociatedStateBetweenTimes:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2;
- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })getAllDistinctAssociatedStateLoiIds;
- (BOOL)insertEntries:(const void *)a0;

@end
