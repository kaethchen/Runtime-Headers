@class NSString;

@interface ULMeasurementStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationMeasurementTable::Entry, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationMeasurementTable::Entry *, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; } x2; })_fetchMeasurementEntriesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)batchTransferRecordsUsingBatchSize:(unsigned long long)a0 andLimit:(unsigned long long)a1 usingDistinctRecords:(BOOL)a2 intoTargetStore:(id)a3 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a4;
- (BOOL)deleteMeasurementsFromRecordingUUIDs:(const void *)a0;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<CLMicroLocationMeasurementTable::Entry, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationMeasurementTable::Entry *, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; } x2; })fetchAllLocalizingMeasurementsWithLimit:(unsigned long long)a0;
- (struct vector<CLMicroLocationMeasurementTable::Entry, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationMeasurementTable::Entry *, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<CLMicroLocationMeasurementTable::Entry, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationMeasurementTable::Entry *, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; } x2; })fetchLearningMeasurementsAtLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0 fromTime:(double)a1 toTime:(double)a2;
- (struct vector<CLMicroLocationMeasurementTable::Entry, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMicroLocationMeasurementTable::Entry *, std::allocator<CLMicroLocationMeasurementTable::Entry>> { struct Entry *x0; } x2; })fetchMeasurementsForRecordingUUIDs:(const void *)a0;
- (BOOL)insertEntries:(const void *)a0;
- (unsigned int)numLocalizationScansFromTime:(double)a0 toTime:(double)a1;
- (unsigned int)numRecordingScansFromTime:(double)a0 toTime:(double)a1;

@end
