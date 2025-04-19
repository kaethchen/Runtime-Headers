@class NSMutableIndexSet;

@interface PXUpdater : NSObject {
    SEL *_orderedUpdateSelectors;
    unsigned long long _orderedUpdateSelectorsCapacity;
    unsigned long long _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    BOOL _hasUpdatedForCurrentPass;
}

@property (nonatomic, getter=isUpdatePassScheduled) BOOL updatePassScheduled;
@property (nonatomic) BOOL extraChecksEnabled;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) SEL needsUpdateSelector;
@property (readonly, nonatomic) BOOL isPerformingUpdates;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)updateIfNeeded;
- (void)addUpdateSelector:(SEL)a0;
- (void)addUpdateSelector:(SEL)a0 needsUpdate:(BOOL)a1;
- (id)initWithTarget:(id)a0 needsUpdateSelector:(SEL)a1;
- (void)setNeedsUpdateOf:(SEL)a0;
- (void)_scheduleUpdatePassIfNeeded;
- (BOOL)hasAlreadyUpdatedSelector:(SEL)a0;

@end
