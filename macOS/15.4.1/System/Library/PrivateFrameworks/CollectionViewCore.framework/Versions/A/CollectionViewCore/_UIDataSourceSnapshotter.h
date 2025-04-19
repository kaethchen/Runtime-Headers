@class NSString;

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UICollectionDataSourceSnapshotTranslating> {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _sectionRanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotterForDataSourceBackedView:(id)a0;
+ (id)snapshotterForSectionCountsProvider:(id /* block */)a0;
+ (id)snapshotterForSnapshot:(id)a0;
+ (id)snapshotterForNoDataSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfItems;
- (id)snapshot;
- (BOOL)_incrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_decrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_deleteSection:(long long)a0;
- (BOOL)_decrementSectionCount:(long long)a0;
- (BOOL)_deleteAllSections;
- (BOOL)_incrementSectionCount:(long long)a0;
- (BOOL)_insertSection:(long long)a0 withInitialCount:(long long)a1;
- (void)_recomputeRangeLocations;
- (long long)globalIndexForIndexPath:(id)a0;
- (id)indexPathForAppendingInsertInSection:(long long)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (BOOL)indexPathIsSectionAppendingInsert:(id)a0;
- (id)initWithDataSourceBackedView:(id)a0;
- (id)initWithSectionCounts:(id)a0;
- (id)initWithSectionCountsProvider:(id /* block */)a0;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (long long)sectionForGlobalIndex:(long long)a0;
- (void)_resetToStateOfSnapshotter:(id)a0;

@end
