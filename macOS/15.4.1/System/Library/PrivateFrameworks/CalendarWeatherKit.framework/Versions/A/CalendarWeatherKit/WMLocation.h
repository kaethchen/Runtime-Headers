@class NSTimeZone, NSString, CLLocation, NSDate;

@interface WMLocation : WMObject <NSSecureCoding, NSCopying, WMDataWithDate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *city;
@property (copy) NSString *county;
@property (copy) NSString *state;
@property (copy) NSString *stateAbbreviation;
@property (copy) NSString *country;
@property (copy) NSString *countryAbbreviation;
@property (copy) CLLocation *geoLocation;
@property (copy) NSString *locationID;
@property (copy) NSTimeZone *timeZone;
@property long long woeid;
@property (copy) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
