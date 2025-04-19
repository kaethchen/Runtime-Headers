@class NSString, NSMutableDictionary;

@interface ABPersonListHeadliner : NSObject <ABPersonListHeadlining> {
    NSMutableDictionary *_sectionTableEntries;
}

@property (nonatomic) unsigned long long numberOfMeCards;
@property (nonatomic) long long sectioningThreshold;
@property (nonatomic) unsigned long long countLabelThreshold;
@property (nonatomic) BOOL vibrantHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addEntriesToArray:(id)a0 forHeader:(id)a1 withBuckets:(id)a2 rules:(id)a3;
- (id)bucketForKey:(id)a0 inBuckets:(id)a1;
- (id)bucketedEntriesForSortedEntries:(id)a0;
- (id)bucketsForSortedEntries:(id)a0;

@end
