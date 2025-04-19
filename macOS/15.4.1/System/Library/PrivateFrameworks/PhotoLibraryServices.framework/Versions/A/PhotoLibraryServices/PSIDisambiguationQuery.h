@class PLPhotoLibrary, NSArray, PSIDatabase;

@interface PSIDisambiguationQuery : NSObject

@property (readonly, nonatomic) PSIDatabase *photosEntityStore;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSArray *disambiguations;
@property (nonatomic) BOOL cancelled;

+ (id)_consolidateDisambiguationIntermediateResults:(id)a0;
+ (BOOL)_disambiguationQueryTextIsExactMatchOfGroup:(id)a0 disambiguation:(id)a1 normalizedQueryText:(id)a2;
+ (BOOL)_disambiguationQueryTextIsSubstringMatchOfGroup:(id)a0 disambiguation:(id)a1 normalizedQueryText:(id)a2;
+ (id)_disambiguationResultForDisambiguation:(id)a0 sortedResults:(id)a1;
+ (id)_fetchGroupsWithFTS5FormattedString:(id)a0 indexingCategories:(id)a1 delegate:(id)a2;
+ (id)_sortedResultsForDisambiguation:(id)a0 exactMatchResults:(id)a1 fullTokenMatchResults:(id)a2 wildcardMatchResults:(id)a3;
+ (id)_sortedResultsForDisambiguationType:(unsigned long long)a0 maxNumberOfResults:(unsigned long long)a1 exactMatchResults:(id)a2 fullTokenMatchResults:(id)a3 wildcardMatchResults:(id)a4;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDisambiguation:(id)a0 photoLibrary:(id)a1 photosEntityStore:(id)a2;
- (id)performDisambiguationQuery;
- (id)_disambiguationIntermediateResultWithDisambiguation:(id)a0 delegate:(id)a1;
- (id)_disambiguationResultWithDisambiguation:(id)a0 delegate:(id)a1;
- (id)_groupsForMatchType:(unsigned long long)a0 fromGroups:(id)a1 disambiguation:(id)a2 normalizedQueryText:(id)a3;
- (id)initWithDisambiguations:(id)a0 photosEntityStore:(id)a1;

@end
