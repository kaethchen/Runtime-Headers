@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)initWithCountryCode:(id)a0;

@end
