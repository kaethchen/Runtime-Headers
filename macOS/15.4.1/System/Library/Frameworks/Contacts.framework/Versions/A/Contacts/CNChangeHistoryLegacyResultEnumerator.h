@class CNQueue;
@protocol CNEnumeratorRefillStrategy;

@interface CNChangeHistoryLegacyResultEnumerator : NSEnumerator

@property (readonly, copy, nonatomic) CNQueue *changes;
@property (readonly, nonatomic) CNQueue *batchFetchQueue;
@property (readonly, nonatomic) id<CNEnumeratorRefillStrategy> refillStrategy;

+ (id)contactEnumeratorWithChanges:(id)a0 keysToFetch:(id)a1 unifyResults:(BOOL)a2 contactStore:(id)a3;
+ (id)groupEnumeratorWithChanges:(id)a0 contactStore:(id)a1;

- (void).cxx_destruct;
- (id)nextObject;
- (void)_fetchNextBatch;
- (id)initWithChanges:(id)a0 refillStrategy:(id)a1;

@end
