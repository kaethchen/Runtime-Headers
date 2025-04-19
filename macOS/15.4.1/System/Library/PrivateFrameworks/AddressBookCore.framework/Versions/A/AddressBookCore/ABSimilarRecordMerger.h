@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ABSimilarRecordMerger : NSObject {
    NSMutableArray *_importPeople;
    NSMutableArray *_destPeople;
    NSMutableArray *_importGroups;
    NSMutableArray *_destGroups;
    NSMutableArray *_recordsToDelete;
    NSMutableArray *_modifiedRecords;
    NSMutableArray *_recordsToIgnore;
    NSMutableDictionary *_mergedMapping;
    NSArray *_peopleFilters;
    NSArray *_groupFilters;
}

+ (id)os_log;

- (void)dealloc;
- (id)init;
- (void)splitRecords:(id)a0 intoPeople:(id)a1 groups:(id)a2;
- (void)_validateRecords:(id)a0;
- (void)applyFilter:(id)a0 importRecords:(id)a1 destRecords:(id)a2;
- (void)applyGroupFilters;
- (void)applyPeopleFilters;
- (id)bucketInHashTable:(id)a0 forRecord:(id)a1;
- (void)constructGroupFilters;
- (void)constructPeopleFilters;
- (void)deleteRecords:(id)a0;
- (id)initWithLocalRecords:(id)a0;
- (id /* block */)makeRecordInInitialDataSetFilter;
- (id)matchAndMergeRecords:(id)a0;
- (id)matchAndMergeRecords:(id)a0 options:(unsigned long long)a1;
- (void)mergeIdenticalBucket:(id)a0;
- (void)mergeIdenticalGroupBucket:(id)a0;
- (void)mergeSimilarBucket:(id)a0;
- (void)separateMatchableRecords:(id)a0 intoPeople:(id)a1 groups:(id)a2;
- (id)uniqueIdForLocalUniqueId:(id)a0;

@end
