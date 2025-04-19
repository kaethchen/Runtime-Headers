@class DDScannerServiceConfiguration, NSCharacterSet;

@interface QPDataDetectorsParser : NSObject {
    DDScannerServiceConfiguration *_config;
    NSCharacterSet *_punctuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)_currencyFromResult:(id)a0 attributes:(id)a1;
- (void)_addressFromResult:(id)a0 attributes:(id)a1;
- (void)_emailAddressFromResult:(id)a0 attributes:(id)a1;
- (void)_flightFromResult:(id)a0 attributes:(id)a1;
- (void)_linkFromResult:(id)a0 attributes:(id)a1;
- (void)_phoneNumberDigitsFromResult:(id)a0 attributes:(id)a1;
- (void)_trackingNumberFromResult:(id)a0 attributes:(id)a1;
- (void)enumerateDatesInString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateEntitiesInString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;

@end
