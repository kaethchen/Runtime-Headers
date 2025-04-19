@class NSString, NSData;

@interface CNCDPostalAddress : ABCDOwnedObject

@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *sama;
@property (retain, nonatomic) NSString *zipCode;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSData *customValuesDictionary;

@end
