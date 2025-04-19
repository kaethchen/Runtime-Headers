@class NSString;

@interface _GEOGeographicMetadataRequesterDelegateDataBlockAdapter : NSObject <GEOGeographicMetadataRequesterDelegate> {
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)geoGeographicMetadataRequester:(id)a0 failedWithError:(id)a1 forLocation:(id)a2;
- (void)geoGeographicMetadataRequester:(id)a0 resultsDidNotChangeForLocation:(id)a1;
- (void)geoGeographicMetadataRequester:(id)a0 returnedNewResults:(id)a1 forLocation:(id)a2;
- (void)geoGeographicMetadataRequester:(id)a0 skippedLocation:(id)a1;

@end
