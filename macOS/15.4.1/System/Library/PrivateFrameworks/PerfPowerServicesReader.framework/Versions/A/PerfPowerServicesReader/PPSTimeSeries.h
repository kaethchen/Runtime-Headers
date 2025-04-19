@class NSArray, PPSEvent, NSData, NSMutableArray;

@interface PPSTimeSeries : PPSDataResponse <NSCopying, NSFastEnumeration, NSSecureCoding> {
    BOOL _isSorted;
    NSData *_sortHint;
    NSMutableArray *_events;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *allTimestamps;
@property (readonly, copy) NSArray *array;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) PPSEvent *firstObject;
@property (readonly, nonatomic) PPSEvent *lastObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (id)reverseObjectEnumerator;
- (void)addEvent:(id)a0;
- (id)initWithEvents:(id)a0;
- (void)removeAllEvents;
- (void)removeEvent:(id)a0;
- (id)JSONRepresentation;
- (BOOL)containsEvent:(id)a0;
- (id)countWithBlock:(id /* block */)a0;
- (void)_guaranteeSortedness;
- (id)countMapWithBlock:(id /* block */)a0 groupingDimensions:(id)a1;
- (id)filteredTimeSeriesUsingPredicate:(id)a0;
- (BOOL)isEqualToTimeSeries:(id)a0;
- (void)mergeWithTimeSeries:(id)a0;
- (id)metricValuesForKey:(id)a0;

@end
