@interface EDReferenceCollection : EDCollection {
    BOOL mCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;

- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)referenceToCellWithIndex:(unsigned long long)a0 byRow:(BOOL)a1;
- (void)coalesce;
- (void)coalesceProgressiveCellReferencesCollection;
- (BOOL)coalesceReferenceAtIndex1:(unsigned long long)a0 index2:(unsigned long long)a1;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWihNoCoalesce;
- (id)reverseReferencesByRow:(BOOL)a0;

@end
