@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    unsigned long long _enumerationMutations;
    id<PXDisplayCollection> _collectionArray[1];
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;
@property (readonly, nonatomic) unsigned long long lockState;

- (void).cxx_destruct;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithDisplayCollection:(id)a0 lockState:(unsigned long long)a1 outlineObject:(id)a2;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
