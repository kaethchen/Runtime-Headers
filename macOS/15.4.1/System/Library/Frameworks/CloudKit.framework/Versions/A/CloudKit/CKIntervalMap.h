@class CKIntervalMapRangeMapContainer;

@interface CKIntervalMap : NSObject

@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap;
@property (nonatomic) BOOL dirty;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsIndex:(unsigned long long)a0;
- (BOOL)containsIndexes:(id)a0;
- (id)allIndexes;
- (void)enumerateObjectsForIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (void)maintainInvariants;

@end
