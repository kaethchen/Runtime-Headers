@class NSString, NSSet, NSArray, NSDictionary, NSNumber;

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    BOOL _deliverOnUnlock;
    BOOL _observeUnfrozenSeries;
    NSNumber *_anchor;
    NSNumber *_subscriptionAnchor;
    NSSet *_updatedSampleTypes;
    NSArray *_queryDescriptors;
    NSDictionary *_sampleTypeToFilterMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_stop;
- (id)objectTypes;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (void)associationsUpdatedForObject:(id)a0 subObject:(id)a1 type:(unsigned long long)a2 objects:(id)a3 anchor:(id)a4;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;

@end
