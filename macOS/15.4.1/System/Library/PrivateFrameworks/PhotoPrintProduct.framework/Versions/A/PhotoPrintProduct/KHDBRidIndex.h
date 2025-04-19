@class NSString, KHDBLockedDictionary, KHDBValueSelector, KHDBRidIndexEntity;

@interface KHDBRidIndex : NSObject {
    int _spinlock;
}

@property (retain, nonatomic) NSString *indexName;
@property (readonly, retain, nonatomic) KHDBRidIndexEntity *indexEntity;
@property (readonly, retain, nonatomic) KHDBValueSelector *valueSelector;
@property (readonly, retain, nonatomic) KHDBValueSelector *returnIdSelector;
@property (readonly, retain, nonatomic) KHDBLockedDictionary *indexesByValue;
@property (readonly, retain, nonatomic) NSString *returnsIdColumn;
@property (nonatomic) BOOL allowsDuplicateIds;

- (void)dealloc;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isNullOnlyIndex;
- (void)addToIndex:(id)a0;
- (void)addToIndexForId:(unsigned long long)a0 forValue:(id)a1;
- (void)andRids:(id)a0;
- (void)clearIndex;
- (void)combineAllIndexesToValue:(id)a0;
- (id)convertValueToIndexKey:(id)a0;
- (void)copyFromIndex:(id)a0;
- (void)dropIndexForValue:(id)a0;
- (void)forceSaveIndex;
- (unsigned long long)highestId;
- (unsigned long long)idForModel:(id)a0;
- (BOOL)idInUse:(unsigned long long)a0;
- (id)indexForValue:(id)a0;
- (id)indexForValue:(id)a0 createIfMissing:(BOOL)a1;
- (id)initWithIndexName:(id)a0 forIndexEntity:(id)a1;
- (id)initWithIndexName:(id)a0 returnsIdColumn:(id)a1 forIndexEntity:(id)a2;
- (void)loadIndex;
- (void)removeFromIndex:(id)a0;
- (void)removeRidFromIndex:(unsigned long long)a0;
- (void)removeRidsFromIndex:(id)a0;
- (void)saveIndex;
- (void)setIndex:(id)a0 forValue:(id)a1;
- (void)updateIndex:(id)a0 forValue:(id)a1;
- (void)updateIndex:(id)a0 forValue:(id)a1 forFieldName:(id)a2;
- (void)updateIndexForId:(unsigned long long)a0 forValue:(id)a1;
- (id)valueForModel:(id)a0;
- (id)valueForModel:(id)a0 replacingValue:(id)a1 forFieldName:(id)a2;

@end
