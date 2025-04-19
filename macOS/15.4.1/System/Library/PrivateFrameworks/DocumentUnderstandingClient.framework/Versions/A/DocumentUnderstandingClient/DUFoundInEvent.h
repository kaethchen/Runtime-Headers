@interface DUFoundInEvent : NSObject

+ (void)geocodeAddress:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isPIRGeocodingAvailable;
+ (BOOL)isValidEventForSpotlightDonation:(id)a0;

- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (id)requestEventExtractionWithSerializedDocument:(id)a0 documentType:(long long)a1 options:(id)a2 error:(id *)a3;

@end
