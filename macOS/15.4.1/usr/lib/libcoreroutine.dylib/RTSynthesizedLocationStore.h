@class NSString;

@interface RTSynthesizedLocationStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fetchStoredLocationsCountWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeLocations:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)fetchRequestFromStoredLocationOptions:(id)a0;
- (void)fetchStoredLocationsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)removeLocationsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeLocations:(id)a0 handler:(id /* block */)a1;

@end
