@class NSArray, NSDictionary, PXCollectionsDataSection, NSIndexSet, NSNumber;

@interface PXNavigationListDataSection : PXDataSection {
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_countNumber;
    BOOL _skipAssetCountFetches;
}

@property (readonly, nonatomic) PXCollectionsDataSection *collectionsDataSection;
@property (readonly, nonatomic) NSArray *sectionRangeMap;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, copy, nonatomic) NSDictionary *childDataSections;
@property (readonly, copy, nonatomic) NSDictionary *childIndexHints;

- (id)debugDescription;
- (void).cxx_destruct;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(long long)a0;
- (id)content;
- (id)existingFetchResultForListItem:(id)a0;
- (id)initWithCollectionsDataSection:(id)a0;
- (void)_createDataSubsectionsIfNecessary;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)a0;
- (long long)indexForListItem:(id)a0;
- (long long)indexInCollectionsDataSectionOfListItem:(id)a0 hintIndex:(long long)a1;
- (id)initWithCollectionsDataSection:(id)a0 indentationLevel:(long long)a1 childDataSections:(id)a2 childIndexHints:(id)a3 skipAssetCountFetches:(BOOL)a4;
- (id)initWithOutlineObject:(id)a0;
- (id)parentOfListItemAtIndex:(long long)a0 localIndex:(long long *)a1;
- (long long)validatedIndexOfListItem:(id)a0 hintIndex:(long long)a1;

@end
