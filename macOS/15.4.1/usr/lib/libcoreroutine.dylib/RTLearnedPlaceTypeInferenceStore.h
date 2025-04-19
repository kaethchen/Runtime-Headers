@class RTLearnedLocationStore, NSString;

@interface RTLearnedPlaceTypeInferenceStore : RTStore <RTEnumerableStore>

@property (readonly, copy, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestForLearnedPlaceTypeInferenceEnumerationOptions:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_deletedLearnedPlaceTypeInferencesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLearnedPlaceTypeInferencesCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLearnedPlaceTypeInferencesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_getLearnedPlacesMapFromLearnedPlaceIdentifiers:(id)a0 error:(id *)a1;
- (void)_logCacheStoreWithReason:(id)a0 handler:(id /* block */)a1;
- (void)_storeLearnedPlaceTypeInferences:(id)a0 handler:(id /* block */)a1;
- (void)deletedLearnedPlaceTypeInferencesPredating:(id)a0 handler:(id /* block */)a1;
- (void)fetchLearnedPlaceTypeInferencesCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchLearnedPlaceTypeInferencesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)initWithPersistenceManager:(id)a0 learnedLocationStore:(id)a1;
- (void)logCacheStoreWithReason:(id)a0 handler:(id /* block */)a1;
- (void)storeLearnedPlaceTypeInferences:(id)a0 handler:(id /* block */)a1;

@end
