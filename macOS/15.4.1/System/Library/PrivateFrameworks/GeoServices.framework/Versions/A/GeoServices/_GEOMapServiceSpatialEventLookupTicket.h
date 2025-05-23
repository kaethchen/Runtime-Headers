@class NSArray, NSString, GEOMapServiceTraits;

@interface _GEOMapServiceSpatialEventLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialEventLookupTicket>

@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxParametersCount;

- (void).cxx_destruct;
- (void)callCompletion:(id /* block */)a0 onQueue:(id)a1 withResult:(id)a2 error:(id)a3;
- (void)createSpatialEventLookupResultForLookupResults:(id)a0 usingPlaces:(id)a1 completion:(id /* block */)a2 queue:(id)a3;
- (id)eventsForEventLookupResponses:(id)a0 usingIdentifierToEventMap:(id)a1;
- (void)handleResponse:(id)a0 completion:(id /* block */)a1 queue:(id)a2;
- (id)initWithRequest:(id)a0 parameters:(id)a1 traits:(id)a2;
- (id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)a0;
- (id)spatialEventLookupResultsFromResponse:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 queue:(id)a2;
- (void)submitWithHandler:(id /* block */)a0 queue:(id)a1;

@end
