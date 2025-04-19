@class NSString;

@interface ABCNMutablePostalAddress : ABCNPostalAddress

@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setState:(id)a0;
- (id)freeze;
- (void)setCountryCode:(id)a0;
- (void)setCity:(id)a0;
- (void)setCountry:(id)a0;
- (void)setPostalCode:(id)a0;
- (void)setSubLocality:(id)a0;
- (void)setSubAdministrativeArea:(id)a0;
- (void)setStreet:(id)a0;

@end
