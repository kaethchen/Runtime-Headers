@class CLGeocoderInternal, CLSilo;

@interface CLGeocoder : NSObject {
    CLGeocoderInternal *_internal;
}

@property (setter=_setResponseSilo:) CLSilo *_responseSilo;
@property (readonly, nonatomic, getter=isGeocoding) BOOL geocoding;

+ (id)_timeZoneAtLocation:(id)a0;
+ (void)hydrateGeoMapItemLocallyFromHandle:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void)_notifyNoResult;
- (void)_notifyCancel;
- (void)_notifyError:(id)a0;
- (void)_notifyPartialResult:(id)a0;
- (void)_notifyResult:(id)a0;
- (void)_notifyResult:(id)a0 error:(id)a1;
- (void)_ticket:(id)a0 didReturnError:(id)a1;
- (void)_ticket:(id)a0 didReturnError:(id)a1 partialResultForLocation:(id)a2;
- (void)_ticket:(id)a0 didReturnGeoMapItems:(id)a1;
- (void)cancelGeocode;
- (void)geocodeAddressDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)geocodeAddressDictionary:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)geocodeAddressString:(id)a0 completionHandler:(id /* block */)a1;
- (void)geocodeAddressString:(id)a0 inRegion:(id)a1 completionHandler:(id /* block */)a2;
- (void)geocodeAddressString:(id)a0 inRegion:(id)a1 preferredLocale:(id)a2 completionHandler:(id /* block */)a3;
- (void)geocodeAddressString:(id)a0 inRegionCenteredAt:(struct CLLocationCoordinate2D { double x0; double x1; })a1 inRegionRadius:(double)a2 preferredLocale:(id)a3 completionHandler:(id /* block */)a4;
- (void)geocodePostalAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)geocodePostalAddress:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)reverseGeocodeLocation:(id)a0 heading:(double)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 heading:(double)a1 localResultsOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reverseGeocodeLocation:(id)a0 localResultsOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 preferredLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)reverseGeocodeLocation:(id)a0 preferredLocale:(id)a1 heading:(double)a2 localResultsOnly:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
