@class CNCache, NSString;
@protocol CNCDDatabasePreparation, CNTimeProvider, CNScheduler;

@interface CNCDDatabaseCachingPreparer : NSObject <CNCDDatabasePreparation>

@property (readonly) id<CNCDDatabasePreparation> wrappedPreparer;
@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) CNCache *cache;
@property (readonly) id<CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0;
- (id)initWithPreparer:(id)a0 timeProvider:(id)a1;
- (BOOL)isCacheEntryValid:(id)a0;
- (void)onScheduler_cacheResult:(id)a0 forRequest:(id)a1;
- (id)onScheduler_cachedOrNewResultForRequest:(id)a0;
- (id)onScheduler_cachedResultForRequest:(id)a0;
- (id)onScheduler_newResultForRequest:(id)a0;

@end
