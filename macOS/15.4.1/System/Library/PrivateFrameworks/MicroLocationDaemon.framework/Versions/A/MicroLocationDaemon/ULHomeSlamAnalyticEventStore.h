@class NSString;

@interface ULHomeSlamAnalyticEventStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct optional<CLMiLoHomeSlamAnalyticEventTable::Entry> { union { char x0; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; short x1; } x1; } x0; BOOL x1; })fetchFirstEvent;
- (struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; } x2; })_fetchAnalyticEventsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *x0; } x2; })fetchAnalyticEventsASCFromTime:(double)a0 toTime:(double)a1;
- (struct optional<CLMiLoHomeSlamAnalyticEventTable::Entry> { union { char x0; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; short x1; } x1; } x0; BOOL x1; })fetchLatestAnalyticEventType:(const void *)a0 beforeTime:(double)a1;
- (BOOL)insertEntries:(const void *)a0;

@end
