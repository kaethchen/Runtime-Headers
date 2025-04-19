@class NSURL, GEODirectionsRequester;

@interface GEODirectionsService : NSObject {
    GEODirectionsRequester *_directionsRequester;
}

@property (class, readonly, nonatomic) GEODirectionsService *sharedService;

@property (readonly, nonatomic) NSURL *directionsURL;

+ (BOOL)_canCurrentVoiceLanguageHandleWrittenText;
+ (BOOL)canSpeakWrittenAddresses;
+ (BOOL)canSpeakWrittenPlaceNames;
+ (void)customRouteCreationSupportedForLocation:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_logDirectionsErrorForRequest:(id)a0 error:(id)a1 directionsError:(id)a2;
- (id)_retryFailedDirectionsRequest:(id)a0 error:(id)a1 directionsError:(id)a2;
- (void)_submitDirectionsRequest:(id)a0 waypoints:(id)a1 traits:(id)a2 auditToken:(id)a3 useBackgroundURL:(BOOL)a4 requestPriority:(long long)a5 allowRetry:(BOOL)a6 handler:(id /* block */)a7;
- (id)requestDirections:(id)a0 handler:(id /* block */)a1;
- (id)requestRoutes:(id)a0 handler:(id /* block */)a1;

@end
