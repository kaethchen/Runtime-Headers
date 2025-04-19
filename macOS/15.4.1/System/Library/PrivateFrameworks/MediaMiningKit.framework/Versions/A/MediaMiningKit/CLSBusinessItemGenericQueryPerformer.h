@class NSArray, CLSLocationCache, CLSBusinessCategoryCache, NSString, NSObject;
@protocol OS_os_log, GEOMapServiceBatchSpatialLookupTicket;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol>

@property (class, readonly, nonatomic) NSArray *categories;

@property (readonly, nonatomic) NSArray *locationGeoParameters;
@property (readonly, nonatomic) id<GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, nonatomic) CLSBusinessCategoryCache *businessCategoryCache;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) struct { unsigned long long numberOfLocations; unsigned long long numberOfResolvedLocations; unsigned long long numberOfUnneededLocations; unsigned long long numberOfRequests; unsigned long long batchSize; } statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) CLSLocationCache *locationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)a0 forRegions:(id)a1;

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0;
- (unsigned long long)cacheItems:(id)a0;
- (id)initWithBusinessCategoryCache:(id)a0 locationCache:(id)a1;
- (id)initWithRegions:(id)a0 categories:(id)a1 precision:(double)a2 businessCategoryCache:(id)a3 locationCache:(id)a4;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)a0;
- (void)logGeoLookupFailureResult;
- (BOOL)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;

@end
