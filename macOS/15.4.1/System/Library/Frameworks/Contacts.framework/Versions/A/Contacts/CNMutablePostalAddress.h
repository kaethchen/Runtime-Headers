@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (copy) NSString *formattedAddress;
@property (copy) NSString *street;
@property (copy) NSString *subLocality;
@property (copy) NSString *city;
@property (copy) NSString *subAdministrativeArea;
@property (copy) NSString *state;
@property (copy) NSString *postalCode;
@property (copy) NSString *country;
@property (copy) NSString *ISOCountryCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)freeze;

@end
