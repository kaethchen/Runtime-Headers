@interface GEOPlaceDataRequester : GEOServiceRequester <GEOPlaceDataRequester>

+ (id)sharedInstance;

- (id)init;
- (void)cancelRequest:(id)a0;
- (id)_validateResponse:(id)a0;
- (void)startWithRequest:(id)a0 traits:(id)a1 timeout:(double)a2 auditToken:(id)a3 throttleToken:(id)a4 completionHandler:(id /* block */)a5;

@end
