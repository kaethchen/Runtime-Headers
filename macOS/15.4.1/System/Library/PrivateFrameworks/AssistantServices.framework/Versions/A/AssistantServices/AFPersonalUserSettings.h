@class NSString;

@interface AFPersonalUserSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *temperatureUnit;
@property (nonatomic) BOOL twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *preferredLanguage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
