@interface SearchUISupplementaryProvider : NSObject

+ (unsigned long long)headerTypeForHeaderView:(id)a0;
+ (void)registerSupplementariesForCollectionView:(id)a0;
+ (id)sectionForHeaderView:(id)a0;
+ (id)viewForSupplementaryOfKind:(id)a0 atIndexPath:(id)a1 forSectionModel:(id)a2 controller:(id)a3;

- (id)init;

@end
