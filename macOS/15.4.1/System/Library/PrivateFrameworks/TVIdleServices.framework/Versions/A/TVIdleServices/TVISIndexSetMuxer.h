@class NSMutableDictionary;

@interface TVISIndexSetMuxer : NSObject

@property (retain, nonatomic) NSMutableDictionary *indexSetDictionary;
@property (retain, nonatomic) NSMutableDictionary *pickedCounts;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)remainingCount;
- (id)remainingCounts;
- (id)_unrepresentedSets;
- (void)addIndexSet:(id)a0 withName:(id)a1;
- (id)nextIndexSet;
- (void)pickedIndex:(unsigned long long)a0;
- (id)remainingIndexSet;

@end
