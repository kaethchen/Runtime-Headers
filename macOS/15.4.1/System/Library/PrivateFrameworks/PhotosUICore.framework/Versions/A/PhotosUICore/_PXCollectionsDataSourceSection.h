@class NSDictionary, PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) NSDictionary *lockStatePerCollection;
@property (readonly, nonatomic) unsigned long long section;

- (void).cxx_destruct;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(long long)a0;
- (id)content;
- (long long)countForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0 lockStatePerCollection:(id)a1 outlineObject:(id)a2;
- (id)initWithCollectionsDataSource:(id)a0 outlineObject:(id)a1;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
