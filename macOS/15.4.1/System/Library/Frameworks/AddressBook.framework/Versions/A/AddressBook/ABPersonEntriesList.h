@class NSArray, NSMutableDictionary, NSString, NSPredicate, NSMutableArray, NSMutableSet;
@protocol ABPersonListHeadlining;

@interface ABPersonEntriesList : NSObject {
    NSMutableSet *_extraUIDsForSearchResults;
}

@property (copy, nonatomic) NSMutableArray *entries;
@property (copy) NSArray *sectionedEntries;
@property (retain) NSMutableDictionary *entriesByUID;
@property (copy) NSString *filterTerms;
@property (readonly) NSPredicate *filterPredicate;
@property (retain) id<ABPersonListHeadlining> headliner;
@property BOOL suspendSorting;

+ (id)keyPathsForValuesAffectingCountOfEntries;

- (id)init;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (void)rearrangeObjects;
- (id)entryAtIndex:(unsigned long long)a0;
- (void)removeAllEntries;
- (void)clearExtraUniqueIdsInSearchResults;
- (unsigned long long)countOfEntries;
- (id)entryForUID:(id)a0;
- (id)indexesOfEntriesWithUids:(id)a0;
- (void)loadEntriesByUid:(id)a0 rearrangeObjects:(BOOL)a1;
- (void)removeEntry:(id)a0;
- (id)entriesForUIDs:(id)a0;
- (id)entryForLinkId:(id)a0;
- (void)addEntriesFromArray:(id)a0;
- (void)addEntriesToReverseCache:(id)a0;
- (void)addEntriesToSectionedEntries:(id)a0;
- (void)appendExtraUniqueIdToSearchResults:(id)a0;
- (id)entriesAtIndexes:(id)a0;
- (id)entryInEntriesAtIndex:(unsigned long long)a0;
- (id)flattenedEntriesFromSectionedEntries:(id)a0;
- (id)flattenedEntriesIncludingHeaders;
- (unsigned long long)indexOfEntry:(id)a0;
- (void)insertEntry:(id)a0 inEntriesAtIndex:(unsigned long long)a1;
- (void)insertEntry:(id)a0 inSectionedEntriesAtIndex:(unsigned long long)a1;
- (id)mutableEntries;
- (void)removeEntriesFromReverseCache:(id)a0;
- (void)removeEntriesFromSectionedEntries:(id)a0;
- (void)removeEntriesInArray:(id)a0;
- (void)removeEntry:(id)a0 fromSectionedEntries:(id)a1;
- (void)replaceEntry:(id)a0 inSectionedEntriesWithEntry:(id)a1;
- (void)replaceEntry:(id)a0 withEntry:(id)a1;
- (id)sortDescriptorsFromNameSortingPreference;

@end
